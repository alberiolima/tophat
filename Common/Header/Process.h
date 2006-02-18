#if !defined(AFX_PROCESS_H__695AAC30_F401_4CFF_9BD9_FE62A2A2D0D2__INCLUDED_)
#define      AFX_PROCESS_H__695AAC30_F401_4CFF_9BD9_FE62A2A2D0D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

void				NoProcessing(int UpDown);
void				WindSpeedProcessing(int UpDown);
void				WindDirectionProcessing(int UpDown);
void				MacCreadyProcessing(int UpDown);
void				AccelerometerProcessing(int UpDown);
void				NextUpDown(int UpDown);
void				SpeedProcessing(int UpDown);
void				DirectionProcessing(int UpDown);
void				AltitudeProcessing(int UpDown);
void				AirspeedProcessing(int UpDown);
void				ForecastTemperatureProcessing(int UpDown);
int DetectStartTime(void);
int TimeLocal(int d);

#endif
