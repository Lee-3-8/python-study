#include "MouseClass.h"

void MouseClass::OnLeftPressed(int x, int y)
{
	this->leftIsDown = true;
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::LPress, x, y));
}

void MouseClass::OnLeftReleased(int x, int y)
{
	this->leftIsDown = false;
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::LRelease, x, y));
}

void MouseClass::OnRightPressed(int x, int y)
{
	this->rightIsDown = true;
	MouseEvent me(MouseEvent::EventType::RPress, x, y);
	this->eventBuffer.push(me);
}

void MouseClass::OnRightReleased(int x, int y)
{
	this->rightIsDown = false;
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::RRelease, x, y));
}

void MouseClass::OnMiddlePressed(int x, int y)
{
	this->mbuttonDown = true;
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::MPRess, x, y));
}

void MouseClass::OnMiddleReleased(int x, int y)
{
	this->mbuttonDown = false;
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::MRelease, x, y));
}

void MouseClass::OnWheelUp(int x, int y)
{
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::WheelUp, x, y));
}

void MouseClass::OnWheelDown(int x, int y)
{
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::WheelDown, x, y));
}

void MouseClass::OnMouseMove(int x, int y)
{
	this->x = x;
	this->y = y;
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::Move, x, y));
}

void MouseClass::OnMouseMoveRaw(int x, int y)
{
	this->eventBuffer.push(MouseEvent(MouseEvent::EventType::RAW_MOVE, x, y));
}

bool MouseClass::IsLeftDown()
{
	return this->leftIsDown;
}

bool MouseClass::IsMiddleDown()
{
	return this->mbuttonDown;
}

bool MouseClass::IsRightDown()
{
	return this->rightIsDown;
}

int MouseClass::GetPosX()
{
	return this->x;
}

int MouseClass::GetPosY()
{
	return this->y;
}

MousePoint MouseClass::GetPos()
{
	return { this->x, this->y };
}

bool MouseClass::EventBufferIsEmpty()
{
	return this->eventBuffer.empty();
}

MouseEvent MouseClass::ReadEvent()
{
	if (this->eventBuffer.empty())
	{
		return MouseEvent();
	}
	else
	{
		MouseEvent e = this->eventBuffer.front();
		this->eventBuffer.pop();
		return e;
	}
}
