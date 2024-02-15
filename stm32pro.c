// Define the custom data structure
typedef struct {
    uint8_t field1;
    uint16_t field2;
    // Add more fields as needed
} CustomData;

// Function to send custom data via UART
void sendCustomData(UART_HandleTypeDef *huart, CustomData *data) {
    uint8_t buffer[sizeof(CustomData)];

    // Copy the data structure to the buffer
    memcpy(buffer, data, sizeof(CustomData));

    // Send the buffer via UART
    HAL_UART_Transmit(huart, buffer, sizeof(CustomData), HAL_MAX_DELAY);
}

// Function to receive custom data via UART
void receiveCustomData(UART_HandleTypeDef *huart, CustomData *data) {
    uint8_t buffer[sizeof(CustomData)];

    // Receive the data into the buffer
    HAL_UART_Receive(huart, buffer, sizeof(CustomData), HAL_MAX_DELAY);

    // Copy the buffer to the data structure
    memcpy(data, buffer, sizeof(CustomData));
}

