#ifndef TELEMETRY_H
#define TELEMETRY_H

struct telemetry_t {
	uint32_t counter_hot;
	uint32_t counter_cold;
	int8_t temp_hot;
	int8_t temp_cold;
}

#endif
