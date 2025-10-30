import rosbag2_py
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

bag_path = 'rosbag2_2025_10_20-10_54_42'

# Abrir la bag
reader = rosbag2_py.SequentialReader()
storage_options = rosbag2_py.StorageOptions(uri=bag_path, storage_id='sqlite3')
converter_options = rosbag2_py.ConverterOptions('', '')
reader.open(storage_options, converter_options)

# Info de los tópicos
topic_types = reader.get_all_topics_and_types()
type_map = {t.name: t.type for t in topic_types}

while reader.has_next():
    (topic, data, t) = reader.read_next()
    msg_type = get_message(type_map[topic])
    msg = deserialize_message(data, msg_type)
    print(f"[{topic}] t={t}: {msg}")

