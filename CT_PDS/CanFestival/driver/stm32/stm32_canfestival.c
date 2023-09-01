#include "canfestival.h"


unsigned int TimeCNT=0;//ʱ�����
unsigned int NextTime=0;//��һ�δ���ʱ�����
unsigned int TIMER_MAX_COUNT=90000;//���ʱ�����
static TIMEVAL last_time_set = TIMEVAL_MAX;//��һ�ε�ʱ�����
void timerForCan(void);

//Set the next alarm //
void setTimer(TIMEVAL value)
{
	NextTime=(TimeCNT+value)%TIMER_MAX_COUNT;

}

// Get the elapsed time since the last occured alarm //
TIMEVAL getElapsedTime(void)
{
	int ret=0;
	ret = TimeCNT> last_time_set ? TimeCNT - last_time_set : TimeCNT + TIMER_MAX_COUNT - last_time_set;
	
	return ret;
}

void timerForCan(void)
{
	last_time_set = TimeCNT;
	TimeCNT++;
	if (TimeCNT>=TIMER_MAX_COUNT)
	{
		TimeCNT=0;
	}
	if (TimeCNT==NextTime)	
	{
		TimeDispatch();

		// unsigned char SDO_send1[8] = {0x23, 
		// 							  0x13, 
		// 							  0x20, 
		// 							  0x01, 
		// 							  MySlaveIndex6013_DeviceStatusDelayTime.Output1DelayTime >> 24, 
		// 							  MySlaveIndex6013_DeviceStatusDelayTime.Output1DelayTime >> 16, 
		// 							  MySlaveIndex6013_DeviceStatusDelayTime.Output1DelayTime >> 8, 
		// 							  MySlaveIndex6013_DeviceStatusDelayTime.Output1DelayTime >> 0};
		// sendSDO(&MyMaster_Data, SDO_CLIENT,0,SDO_send1);

		

	}
}



unsigned char canSend(CAN_PORT notused, Message *m)
{
	return CAN_Tx_Msg(&m->cob_id,
					  &m->rtr,
					  &m->len,
					  m->data,
					  Tx_packet);
}



