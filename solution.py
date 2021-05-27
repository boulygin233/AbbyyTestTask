from PIL import Image
import numpy as np
from pdf2image import convert_from_path

np.random.seed(42)
mean = 0
std = 3


def add_gaussian_noise(image, mean=0, std=1):
    compressed_image = image.resize((int(image.size[0] / 2), int(image.size[1] / 2)))
    image_data = np.array(compressed_image)
    noise = np.random.normal(mean, std, image_data.shape)
    image_data = image_data + noise
    return Image.fromarray(image_data.astype('uint8'))


images = convert_from_path('example.pdf', poppler_path='poppler-21.03.0/Library/bin')
noisy_images = []
for img in images:
    noisy_images.append(add_gaussian_noise(img, mean, std))

noisy_images[0].save("noisy_example.tiff", compression="tiff_deflate", save_all=True, append_images=noisy_images[1:])
