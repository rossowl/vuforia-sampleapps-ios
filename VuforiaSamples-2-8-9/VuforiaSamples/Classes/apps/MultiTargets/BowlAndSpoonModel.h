/*==============================================================================
 Copyright (c) 2012-2013 Qualcomm Connected Experiences, Inc.
 All Rights Reserved.
 ==============================================================================*/



#ifndef _OBJECT_H_
#define _OBJECT_H_


#define NUM_OBJECT_VERTEX 279
#define NUM_OBJECT_INDEX 430 * 3

// set object vertex coordinates
//
float objectVertices[NUM_OBJECT_VERTEX * 3] =
{
    6.738506, 5.517030, 1.844433, 6.822275, 4.896831, 1.844433, 6.574783, 5.473191, 1.620076, 2.106043, 4.276631, 1.844433, 2.022274, 4.896831, 1.844433, 2.269766, 4.320470, 1.620076, 6.119089, 3.199532, 1.844433, 5.621253, 2.820290, 1.844433, 5.999149, 3.319506, 1.620076, 5.145020, 4.173879, 0.182711, 4.932971, 4.012344, 0.182711, 4.963409, 4.355542, 0.055150, 5.408856, 4.632661, 0.182711, 5.306616, 4.385881, 0.182711, 5.160949, 4.699041, 0.055150, 4.942795, 4.757455, 0.044433, 4.888854, 4.627254, 0.044433, 4.692611, 4.824445, 0.044433, 4.702388, 4.896831, 0.044433, 4.961620, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.664596, 4.756824, 0.044433, 4.422275, 4.896831, 0.044433, 5.187664, 4.896831, 0.055150, 5.444537, 4.896831, 0.182711, 5.084400, 4.514272, 0.055150, 4.620317, 4.698732, 0.044433, 4.803596, 4.515401, 0.044433, 4.691718, 4.430175, 0.044433, 4.422275, 4.896831, 0.044433, 4.562212, 4.654469, 0.044433, 4.422275, 4.896831, 0.044433, 4.804643, 4.234597, 0.055150, 5.927657, 4.027060, 0.982135, 5.291613, 3.391201, 0.982135, 5.571496, 4.232841, 0.483058, 5.750726, 4.896831, 0.483058, 6.162434, 4.896831, 0.982135, 5.085935, 3.747421, 0.483058, 6.738506, 4.276631, 1.844433, 6.498474, 3.697257, 1.844433, 6.574783, 4.320470, 1.620076, 6.484860, 4.896831, 1.399232, 6.412868, 4.363825, 1.399232, 6.652630, 4.896831, 1.620076, 6.822275, 4.896831, 1.844433, 6.351718, 3.782049, 1.620076, 5.452689, 3.112230, 1.399232, 6.206583, 3.865904, 1.399232, 5.880535, 3.438154, 1.399232, 5.536503, 2.967070, 1.620076, 3.683601, 4.699041, 0.055150, 3.435693, 4.632661, 0.182711, 3.400013, 4.896831, 0.182711, 4.158247, 3.910211, 0.182711, 3.911579, 4.012344, 0.182711, 4.224591, 4.158128, 0.055150, 4.686303, 3.910211, 0.182711, 4.422275, 3.874569, 0.182711, 4.619958, 4.158128, 0.055150, 4.494622, 4.626483, 0.044433, 4.561576, 4.376289, 0.044433, 4.422275, 4.357485, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.616717, 0.044433, 4.422275, 4.131442, 0.055150, 4.349927, 4.626483, 0.044433, 4.282973, 4.376289, 0.044433, 4.152831, 4.430175, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.282337, 4.654469, 0.044433, 4.039906, 4.234597, 0.055150, 3.699529, 4.173879, 0.182711, 3.537933, 4.385881, 0.182711, 3.881140, 4.355542, 0.055150, 4.224233, 4.698732, 0.044433, 4.040954, 4.515401, 0.044433, 3.955696, 4.627254, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.179953, 4.756824, 0.044433, 3.760150, 4.514272, 0.055150, 4.151938, 4.824445, 0.044433, 3.901754, 4.757455, 0.044433, 3.882929, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.142161, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 3.656886, 4.896831, 0.055150, 3.802406, 2.580509, 1.844433, 3.223296, 2.820290, 1.844433, 3.846222, 2.744238, 1.620076, 4.422275, 3.568379, 0.483058, 4.422275, 3.156672, 0.982135, 3.552936, 3.391201, 0.982135, 3.758615, 3.747421, 0.483058, 5.042143, 2.580509, 1.844433, 4.422275, 2.496830, 1.844433, 4.998327, 2.744238, 1.620076, 4.954996, 2.906160, 1.399232, 4.422275, 2.666475, 1.620076, 3.391860, 3.112230, 1.399232, 4.422275, 2.834245, 1.399232, 3.889553, 2.906160, 1.399232, 3.308046, 2.967070, 1.620076, 3.273054, 4.232841, 0.483058, 2.916892, 4.027060, 0.982135, 2.682116, 4.896831, 0.982135, 2.725460, 3.199532, 1.844433, 2.346075, 3.697257, 1.844433, 2.845400, 3.319506, 1.620076, 2.964015, 3.438154, 1.399232, 2.492831, 3.782049, 1.620076, 2.637967, 3.865904, 1.399232, 2.431681, 4.363825, 1.399232, 2.191919, 4.896831, 1.620076, 2.725460, 6.594129, 1.844433, 3.223296, 6.973371, 1.844433, 2.845400, 6.474155, 1.620076, 3.881140, 5.438119, 0.055150, 3.699529, 5.619782, 0.182711, 3.911579, 5.781317, 0.182711, 3.435693, 5.161000, 0.182711, 3.537933, 5.407780, 0.182711, 3.683601, 5.094620, 0.055150, 4.151938, 4.969216, 0.044433, 3.901754, 5.036206, 0.044433, 3.955696, 5.166408, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.179953, 5.036838, 0.044433, 3.760150, 5.279389, 0.055150, 4.224233, 5.094929, 0.044433, 4.040954, 5.278260, 0.044433, 4.152831, 5.363486, 0.044433, 4.422275, 4.896831, 0.044433, 4.282337, 5.139192, 0.044433, 4.422275, 4.896831, 0.044433, 4.039906, 5.559064, 0.055150, 3.273054, 5.560820, 0.483058, 2.916892, 5.766601, 0.982135, 3.552936, 6.402460, 0.982135, 3.093823, 4.896831, 0.483058, 3.758615, 6.046240, 0.483058, 2.106043, 5.517030, 1.844433, 2.346075, 6.096404, 1.844433, 2.269766, 5.473191, 1.620076, 2.637967, 5.927757, 1.399232, 2.359689, 4.896831, 1.399232, 2.431681, 5.429836, 1.399232, 2.492831, 6.011612, 1.620076, 3.391860, 6.681431, 1.399232, 2.964015, 6.355506, 1.399232, 3.308046, 6.826591, 1.620076, 5.160949, 5.094620, 0.055150, 5.408856, 5.161000, 0.182711, 5.444537, 4.896831, 0.182711, 4.686303, 5.883450, 0.182711, 4.932971, 5.781317, 0.182711, 4.619958, 5.635533, 0.055150, 4.158247, 5.883450, 0.182711, 4.422275, 5.919093, 0.182711, 4.224591, 5.635533, 0.055150, 4.349927, 5.167178, 0.044433, 4.282973, 5.417372, 0.044433, 4.422275, 5.436176, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 5.176944, 0.044433, 4.422275, 5.662220, 0.055150, 4.494622, 5.167178, 0.044433, 4.561576, 5.417372, 0.044433, 4.691718, 5.363486, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.562212, 5.139192, 0.044433, 4.804643, 5.559064, 0.055150, 5.145020, 5.619782, 0.182711, 5.306616, 5.407780, 0.182711, 4.963409, 5.438119, 0.055150, 4.620317, 5.094929, 0.044433, 4.803596, 5.278260, 0.044433, 4.888854, 5.166408, 0.044433, 4.422275, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.664596, 5.036838, 0.044433, 5.084400, 5.279389, 0.055150, 4.692611, 4.969216, 0.044433, 4.942795, 5.036206, 0.044433, 4.961620, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 4.702388, 4.896831, 0.044433, 4.422275, 4.896831, 0.044433, 5.187664, 4.896831, 0.055150, 5.042143, 7.213152, 1.844433, 5.621253, 6.973371, 1.844433, 4.998327, 7.049423, 1.620076, 4.422275, 6.225282, 0.483058, 4.422275, 6.636990, 0.982135, 5.291613, 6.402460, 0.982135, 5.085935, 6.046240, 0.483058, 3.802406, 7.213152, 1.844433, 4.422275, 7.296831, 1.844433, 3.846222, 7.049423, 1.620076, 3.889553, 6.887502, 1.399232, 4.422275, 7.127186, 1.620076, 5.452689, 6.681431, 1.399232, 4.422275, 6.959416, 1.399232, 4.954996, 6.887502, 1.399232, 5.536503, 6.826591, 1.620076, 5.571496, 5.560820, 0.483058, 5.927657, 5.766601, 0.982135, 6.162434, 4.896831, 0.982135, 6.119089, 6.594129, 1.844433, 6.498474, 6.096404, 1.844433, 5.999149, 6.474155, 1.620076, 5.880535, 6.355506, 1.399232, 6.351718, 6.011612, 1.620076, 6.206583, 5.927757, 1.399232, 6.412868, 5.429836, 1.399232, 6.652630, 4.896831, 1.620076, 5.750726, 4.896831, 0.483058, 6.484860, 4.896831, 1.399232, 7.409268, 5.377024, 2.448585, 7.759353, 5.379165, 2.759072, 7.424907, 5.320870, 2.430408, 6.304264, 5.391462, 1.572853, 6.317639, 5.320427, 1.553660, 5.934025, 5.320159, 1.282014, 5.415246, 5.709844, 0.770477, 5.580448, 5.684927, 0.989686, 5.457167, 5.522807, 0.732575, 5.124302, 5.608622, 0.544544, 5.283649, 5.689806, 0.651278, 5.135542, 5.467068, 0.512329, 5.141785, 5.316000, 0.499870, 5.326661, 5.320265, 0.595968, 5.143421, 5.162755, 0.508099, 4.901330, 5.251467, 0.445906, 4.891500, 5.309432, 0.445247, 4.918377, 5.196848, 0.450802, 5.137730, 5.018158, 0.536759, 5.322763, 5.126557, 0.606521, 4.896726, 5.366647, 0.448806, 5.313364, 5.511104, 0.611270, 5.466925, 5.119915, 0.727683, 5.474813, 5.322928, 0.717946, 5.649044, 5.320913, 0.939194, 5.301205, 4.943660, 0.642592, 5.433656, 4.928100, 0.761483, 5.634982, 5.130643, 0.950653, 5.630393, 5.508715, 0.952552, 5.746101, 5.564915, 1.172327, 5.912647, 5.445924, 1.305034, 5.781186, 5.446037, 1.144869, 5.782833, 5.192575, 1.144699, 5.793733, 5.319973, 1.135433, 5.588683, 4.951345, 0.986509, 5.748818, 5.072536, 1.172379, 5.929545, 5.255841, 1.287857, 5.928377, 5.384033, 1.287763, 6.306154, 5.249560, 1.573382, 5.914718, 5.193908, 1.305447, 6.682610, 5.380538, 1.853889, 7.049404, 5.375253, 2.149441, 6.696666, 5.320563, 1.834785, 6.696666, 5.320563, 1.834785, 6.684402, 5.260798, 1.854500, 7.063540, 5.320695, 2.130868, 7.063540, 5.320695, 2.130868, 7.051183, 5.266403, 2.150102, 7.424907, 5.320870, 2.430408, 7.411092, 5.264973, 2.449277, 7.784627, 5.321132, 2.749217, 7.784627, 5.321132, 2.749217, 4.914281, 5.420332, 0.456341, 7.761144, 5.263398, 2.759766
};

//  set object normals
//
float objectNormals[NUM_OBJECT_VERTEX * 3] =
{
    -0.760926, -0.241082, 0.602388, -0.797131, -0.035889, 0.602739, -0.769715, -0.207637, 0.603677, 0.760926, 0.241082, 0.602388, 0.797131, 0.035889, 0.602739, 0.769715, 0.207637, 0.603677, -0.588956, 0.538365, 0.602739, -0.427384, 0.674089, 0.602451, -0.563437, 0.563643, 0.604025, -0.424757, 0.410496, 0.806892, -0.286104, 0.474150, 0.832662, -0.171162, 0.184126, 0.967885, -0.572680, 0.144386, 0.806964, -0.485794, 0.265922, 0.832640, -0.240480, 0.073993, 0.967830, -0.022623, 0.007168, 0.999718, -0.020036, 0.012710, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, -0.023686, 0.001066, 0.999719, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, -0.251228, 0.009130, 0.967885, -0.553327, -0.012171, 0.832875, -0.213555, 0.132987, 0.967837, 0.000000, 0.000000, 1.000000, -0.015992, 0.017505, 0.999719, -0.010926, 0.021067, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, -0.117702, 0.222377, 0.967830, -0.650686, 0.404136, 0.642870, -0.425706, 0.653719, 0.625640, -0.629239, 0.397459, 0.667896, -0.743134, 0.029606, 0.668488, -0.758316, -0.023194, 0.651475, -0.346578, 0.658625, 0.667905, -0.778880, 0.174354, 0.602451, -0.708475, 0.367685, 0.602388, -0.769700, 0.207693, 0.603677, -0.794063, 0.021505, 0.607455, -0.743926, 0.219444, 0.631203, -0.796965, 0.000030, 0.604025, -0.797131, -0.035889, 0.602739, -0.691036, 0.397547, 0.603677, -0.369117, 0.670871, 0.643183, -0.681903, 0.375062, 0.627962, -0.534342, 0.560937, 0.632320, -0.397325, 0.691164, 0.603676, 0.245034, 0.057005, 0.967837, 0.567604, 0.163302, 0.806944, 0.553327, 0.012171, 0.832875, 0.144307, 0.572687, 0.806973, 0.265805, 0.485858, 0.832640, 0.073955, 0.240491, 0.967830, -0.163214, 0.567616, 0.806953, -0.012164, 0.553327, 0.832875, -0.056975, 0.245041, 0.967837, 0.000000, 0.000000, 1.000000, -0.005181, 0.023155, 0.999718, 0.001066, 0.023686, 0.999719, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.009125, 0.251229, 0.967885, 0.000000, 0.000000, 1.000000, 0.007164, 0.022624, 0.999718, 0.012705, 0.020040, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.132932, 0.213590, 0.967837, 0.410373, 0.424876, 0.806892, 0.474077, 0.286225, 0.832662, 0.184077, 0.171216, 0.967885, 0.000000, 0.000000, 1.000000, 0.017500, 0.015997, 0.999719, 0.021064, 0.010931, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.222349, 0.117755, 0.967830, 0.000000, 0.000000, 1.000000, 0.023155, 0.005184, 0.999718, 0.023686, -0.001066, 0.999719, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.251228, -0.009130, 0.967885, 0.174263, 0.778900, 0.602451, 0.367518, 0.708561, 0.602388, 0.207585, 0.769729, 0.603677, 0.029589, 0.743121, 0.668503, -0.023181, 0.758341, 0.651446, 0.354385, 0.694943, 0.625672, 0.397310, 0.629326, 0.667903, -0.240957, 0.760965, 0.602388, -0.035869, 0.797132, 0.602739, -0.207529, 0.769744, 0.603677, -0.179281, 0.754658, 0.631150, 0.000030, 0.796965, 0.604025, 0.394915, 0.656001, 0.643199, 0.021493, 0.794063, 0.607456, 0.219338, 0.743976, 0.631182, 0.397375, 0.691135, 0.603676, 0.658558, 0.346719, 0.667897, 0.619205, 0.453778, 0.640835, 0.758316, 0.023194, 0.651475, 0.538194, 0.589112, 0.602739, 0.673977, 0.427561, 0.602451, 0.563480, 0.563600, 0.604025, 0.564749, 0.530405, 0.632242, 0.691065, 0.397497, 0.603677, 0.698425, 0.344651, 0.627230, 0.754619, 0.179368, 0.631171, 0.796965, -0.000030, 0.604025, 0.588956, -0.538365, 0.602739, 0.427384, -0.674090, 0.602450, 0.563436, -0.563643, 0.604025, 0.171163, -0.184126, 0.967885, 0.424757, -0.410496, 0.806892, 0.286104, -0.474150, 0.832662, 0.572680, -0.144386, 0.806964, 0.485794, -0.265922, 0.832640, 0.240479, -0.073993, 0.967830, 0.000000, 0.000000, 1.000000, 0.022623, -0.007168, 0.999718, 0.020036, -0.012710, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.213555, -0.132987, 0.967837, 0.000000, 0.000000, 1.000000, 0.015992, -0.017505, 0.999719, 0.010926, -0.021067, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.117702, -0.222377, 0.967830, 0.629239, -0.397459, 0.667896, 0.650686, -0.404136, 0.642870, 0.425706, -0.653719, 0.625640, 0.743134, -0.029606, 0.668488, 0.346577, -0.658624, 0.667906, 0.778880, -0.174354, 0.602451, 0.708475, -0.367685, 0.602388, 0.769700, -0.207693, 0.603677, 0.681903, -0.375062, 0.627962, 0.794062, -0.021505, 0.607456, 0.743926, -0.219444, 0.631204, 0.691036, -0.397547, 0.603677, 0.369118, -0.670871, 0.643183, 0.534342, -0.560937, 0.632320, 0.397325, -0.691164, 0.603677, -0.245034, -0.057005, 0.967837, -0.567604, -0.163302, 0.806944, -0.553327, -0.012171, 0.832875, -0.144307, -0.572687, 0.806973, -0.265804, -0.485858, 0.832640, -0.073955, -0.240491, 0.967830, 0.163214, -0.567616, 0.806953, 0.012164, -0.553327, 0.832875, 0.056975, -0.245041, 0.967837, 0.000000, 0.000000, 1.000000, 0.005181, -0.023155, 0.999718, -0.001066, -0.023686, 0.999719, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, -0.009126, -0.251228, 0.967885, 0.000000, 0.000000, 1.000000, -0.007164, -0.022624, 0.999718, -0.012705, -0.020040, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, -0.132932, -0.213590, 0.967837, -0.410373, -0.424876, 0.806892, -0.474077, -0.286225, 0.832662, -0.184077, -0.171216, 0.967885, 0.000000, 0.000000, 1.000000, -0.017500, -0.015997, 0.999719, -0.021064, -0.010931, 0.999718, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, -0.222349, -0.117755, 0.967830, 0.000000, 0.000000, 1.000000, -0.023155, -0.005184, 0.999718, -0.023686, 0.001066, 0.999719, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000, -0.251228, 0.009130, 0.967885, -0.174263, -0.778900, 0.602451, -0.367518, -0.708561, 0.602389, -0.207585, -0.769729, 0.603677, -0.029589, -0.743120, 0.668503, 0.023181, -0.758341, 0.651445, -0.354386, -0.694943, 0.625672, -0.397310, -0.629326, 0.667903, 0.240958, -0.760965, 0.602388, 0.035869, -0.797131, 0.602740, 0.207529, -0.769744, 0.603677, 0.179281, -0.754658, 0.631149, -0.000030, -0.796966, 0.604025, -0.394915, -0.656001, 0.643199, -0.021493, -0.794063, 0.607455, -0.219338, -0.743976, 0.631182, -0.397375, -0.691135, 0.603677, -0.658559, -0.346719, 0.667897, -0.619205, -0.453778, 0.640835, -0.758316, -0.023194, 0.651475, -0.538194, -0.589112, 0.602740, -0.673977, -0.427561, 0.602451, -0.563479, -0.563600, 0.604025, -0.564748, -0.530405, 0.632242, -0.691065, -0.397497, 0.603677, -0.698425, -0.344652, 0.627231, -0.754619, -0.179368, 0.631171, -0.796965, 0.000030, 0.604025, -0.743134, 0.029606, 0.668488, -0.794063, 0.021505, 0.607455, -0.594170, -0.392833, 0.701886, -0.610577, -0.388353, 0.690201, -0.602714, -0.389826, 0.696256, -0.572504, -0.276488, 0.771876, -0.590994, -0.047091, 0.805300, -0.657189, -0.038102, 0.752762, -0.674147, -0.282502, 0.682435, -0.776727, -0.317807, 0.543777, -0.706061, -0.208801, 0.676668, -0.338181, -0.157915, 0.927737, -0.502796, -0.256181, 0.825571, -0.329634, -0.159720, 0.930500, -0.343494, -0.036399, 0.938449, -0.553318, -0.027794, 0.832506, -0.347837, 0.092498, 0.932981, -0.229850, 0.011710, 0.973156, -0.221612, -0.050737, 0.973814, -0.230455, 0.104667, 0.967438, -0.373247, 0.205727, 0.904634, -0.549134, 0.136157, 0.824568, -0.263938, -0.091953, 0.960147, -0.539696, -0.188274, 0.820537, -0.716302, 0.153915, 0.680603, -0.715937, -0.028682, 0.697575, -0.797929, -0.019480, 0.602436, -0.572808, 0.229319, 0.786958, -0.742891, 0.264090, 0.615118, -0.801820, 0.193829, 0.565256, -0.789296, -0.230164, 0.569242, -0.771164, -0.344704, 0.535244, -0.673613, -0.352807, 0.649440, -0.765525, -0.238352, 0.597628, -0.771731, 0.223470, 0.595392, -0.766653, -0.009081, 0.641998, -0.803478, 0.319587, 0.502281, -0.756995, 0.342714, 0.556333, -0.655010, 0.263936, 0.708025, -0.670838, -0.217087, 0.709119, -0.566608, 0.329621, 0.755186, -0.649327, 0.347577, 0.676435, -0.571266, -0.349432, 0.742666, -0.583648, -0.384583, 0.715158, -0.572821, -0.376208, 0.728247, -0.572533, 0.341978, 0.745155, -0.577348, 0.368925, 0.728398, -0.585865, 0.377176, 0.717286, -0.583615, -0.392977, 0.710608, -0.586779, 0.385674, 0.712002, -0.596832, 0.385219, 0.703846, -0.605131, 0.382154, 0.698408, -0.613122, 0.380492, 0.692321, -0.612256, -0.384015, 0.691140, -0.384186, -0.003962, 0.923247, -0.613802, 0.376454, 0.693924
};

//  set object texture coordinates
//
float objectTexCoords[NUM_OBJECT_VERTEX * 2] =
{
    0.025115, 0.012339, 0.004825, 0.012339, 0.025115, 0.053024, 0.268555, 0.012339, 0.248265, 0.012339, 0.268555, 0.053024, 0.430834, 0.012339, 0.410543, 0.012339, 0.430834, 0.053024, 0.430834, 0.411975, 0.410543, 0.411975, 0.430834, 0.556235, 0.471415, 0.411975, 0.451124, 0.411975, 0.471415, 0.556235, 0.471415, 0.700495, 0.451124, 0.700495, 0.471415, 0.844756, 0.491705, 0.844756, 0.491705, 0.700495, 0.491705, 0.989016, 0.451124, 0.844756, 0.471415, 0.989016, 0.491705, 0.556235, 0.491705, 0.411975, 0.451124, 0.556235, 0.430834, 0.844756, 0.430834, 0.700495, 0.410543, 0.700495, 0.451124, 0.989016, 0.410543, 0.844756, 0.430834, 0.989016, 0.410543, 0.556235, 0.451124, 0.175077, 0.410543, 0.175077, 0.451124, 0.293526, 0.491705, 0.293526, 0.491705, 0.175077, 0.410543, 0.293526, 0.471415, 0.012339, 0.451124, 0.012339, 0.471415, 0.053024, 0.491705, 0.093708, 0.471415, 0.093708, 0.491705, 0.053024, 0.491705, 0.012339, 0.451124, 0.053024, 0.410543, 0.093708, 0.451124, 0.093708, 0.430834, 0.093708, 0.410543, 0.053024, 0.268555, 0.556235, 0.268555, 0.411975, 0.248265, 0.411975, 0.349706, 0.411975, 0.329426, 0.411975, 0.349705, 0.556235, 0.390264, 0.411975, 0.369985, 0.411975, 0.390264, 0.556235, 0.390264, 0.844756, 0.390264, 0.700495, 0.369985, 0.700495, 0.410543, 0.989016, 0.390264, 0.989016, 0.369985, 0.844756, 0.369985, 0.556235, 0.349706, 0.844756, 0.349706, 0.700495, 0.329426, 0.700495, 0.369985, 0.989016, 0.349706, 0.989016, 0.329426, 0.844756, 0.329426, 0.556235, 0.309136, 0.411975, 0.288845, 0.411975, 0.309136, 0.556235, 0.309136, 0.844756, 0.309136, 0.700495, 0.288845, 0.700495, 0.329426, 0.989016, 0.309136, 0.989016, 0.288845, 0.844756, 0.288845, 0.556235, 0.268555, 0.844756, 0.268555, 0.700495, 0.248265, 0.700495, 0.288845, 0.989016, 0.248265, 0.844756, 0.268555, 0.989016, 0.248265, 0.556235, 0.349706, 0.012339, 0.329426, 0.012339, 0.349706, 0.053024, 0.369985, 0.293526, 0.369985, 0.175077, 0.329426, 0.175077, 0.329426, 0.293526, 0.390264, 0.012339, 0.369985, 0.012339, 0.390264, 0.053024, 0.390264, 0.093708, 0.369985, 0.053024, 0.329426, 0.093708, 0.369985, 0.093708, 0.349706, 0.093708, 0.329426, 0.053024, 0.288845, 0.293526, 0.288845, 0.175077, 0.248265, 0.175077, 0.309136, 0.012339, 0.288845, 0.012339, 0.309136, 0.053024, 0.309136, 0.093708, 0.288845, 0.053024, 0.288845, 0.093708, 0.268555, 0.093708, 0.248265, 0.053024, 0.187394, 0.012339, 0.167103, 0.012339, 0.187394, 0.053024, 0.187394, 0.556235, 0.187394, 0.411975, 0.167103, 0.411975, 0.227974, 0.411975, 0.207684, 0.411975, 0.227974, 0.556235, 0.227974, 0.844756, 0.227974, 0.700495, 0.207684, 0.700495, 0.248265, 0.989016, 0.227974, 0.989016, 0.207684, 0.844756, 0.207684, 0.556235, 0.187394, 0.844756, 0.187394, 0.700495, 0.167103, 0.700495, 0.207684, 0.989016, 0.167103, 0.844756, 0.187394, 0.989016, 0.167103, 0.556235, 0.207684, 0.293526, 0.207684, 0.175077, 0.167103, 0.175077, 0.248265, 0.293526, 0.167103, 0.293526, 0.227974, 0.012339, 0.207684, 0.012339, 0.227974, 0.053024, 0.207684, 0.093708, 0.248265, 0.093708, 0.227974, 0.093708, 0.207684, 0.053024, 0.167103, 0.093708, 0.187394, 0.093708, 0.167103, 0.053024, 0.025115, 0.556235, 0.025115, 0.411975, 0.004825, 0.411975, 0.106265, 0.411975, 0.085986, 0.411975, 0.106265, 0.556235, 0.146824, 0.411975, 0.126545, 0.411975, 0.146824, 0.556235, 0.146824, 0.844756, 0.146824, 0.700495, 0.126545, 0.700495, 0.167103, 0.989016, 0.146824, 0.989016, 0.126545, 0.844756, 0.126545, 0.556235, 0.106265, 0.844756, 0.106265, 0.700495, 0.085986, 0.700495, 0.126545, 0.989016, 0.106265, 0.989016, 0.085986, 0.844756, 0.085986, 0.556235, 0.065696, 0.411975, 0.045405, 0.411975, 0.065696, 0.556235, 0.065696, 0.844756, 0.065696, 0.700495, 0.045405, 0.700495, 0.085986, 0.989016, 0.065696, 0.989016, 0.045405, 0.844755, 0.045405, 0.556235, 0.025115, 0.844755, 0.025115, 0.700495, 0.004824, 0.700495, 0.045405, 0.989016, 0.004825, 0.844756, 0.025115, 0.989016, 0.004824, 0.556235, 0.106265, 0.012339, 0.085986, 0.012339, 0.106265, 0.053024, 0.126545, 0.293526, 0.126545, 0.175077, 0.085986, 0.175077, 0.085986, 0.293526, 0.146824, 0.012339, 0.126545, 0.012339, 0.146824, 0.053024, 0.146824, 0.093708, 0.126545, 0.053024, 0.085986, 0.093708, 0.126545, 0.093708, 0.106265, 0.093708, 0.085986, 0.053024, 0.045405, 0.293526, 0.045405, 0.175077, 0.004824, 0.175077, 0.065696, 0.012339, 0.045405, 0.012339, 0.065696, 0.053024, 0.065696, 0.093708, 0.045405, 0.053024, 0.045405, 0.093708, 0.025115, 0.093708, 0.004824, 0.053024, 0.004824, 0.293526, 0.004824, 0.093708, 0.940226, 0.961229, 0.974385, 0.961230, 0.940226, 0.502445, 0.767074, 0.961229, 0.767074, 0.502446, 0.703108, 0.502446, 0.603351, 0.961229, 0.636746, 0.961229, 0.603351, 0.731837, 0.547153, 0.961229, 0.569955, 0.961229, 0.547153, 0.731837, 0.547153, 0.502446, 0.569955, 0.502446, 0.547153, 0.270608, 0.524351, 0.270608, 0.524351, 0.502446, 0.524351, 0.038770, 0.547153, 0.038771, 0.569955, 0.270608, 0.524351, 0.731837, 0.569955, 0.731837, 0.603351, 0.270608, 0.603351, 0.502446, 0.636746, 0.502446, 0.569955, 0.038771, 0.603351, 0.038771, 0.636746, 0.270608, 0.636746, 0.731838, 0.669927, 0.961229, 0.703108, 0.961230, 0.669927, 0.731837, 0.669927, 0.270608, 0.669927, 0.502446, 0.636746, 0.038771, 0.669927, 0.038771, 0.703108, 0.270608, 0.703108, 0.731837, 0.767073, 0.038771, 0.703108, 0.038771, 0.830219, 0.961229, 0.889615, 0.961229, 0.830219, 0.502446, 0.830219, 0.502446, 0.830219, 0.038771, 0.889615, 0.502446, 0.889615, 0.502446, 0.889615, 0.038771, 0.940226, 0.502445, 0.940226, 0.038771, 0.974385, 0.502445, 0.974385, 0.502445, 0.524351, 0.961230, 0.974385, 0.038770
};

//  indices for triangle strip
//
unsigned short objectIndices[NUM_OBJECT_INDEX] =
{
    2,1,0,5,4,3,8,7,6,11,10,9,14,13,12,17,16,15,15,19,18,17,18,20,17,22,21,12,24,23,14,23,19,25,14,15,28,27,26,27,16,21,26,21,29,26,31,30,25,9,13,11,25,16,32,11,27,35,34,33,33,37,36,12,36,24,9,10,38,41,40,39,43,42,37,39,45,44,41,44,42,46,41,43,33,34,47,46,6,40,8,46,48,50,8,49,53,52,51,56,55,54,59,58,57,62,61,60,61,28,30,60,30,63,65,60,64,57,10,32,59,32,28,66,59,61,69,68,67,68,62,65,67,65,70,72,67,71,54,58,66,56,66,62,73,56,68,76,75,74,79,78,77,78,69,72,77,72,80,82,77,81,74,55,73,76,73,69,83,76,78,86,85,84,85,79,82,84,82,87,84,89,88,52,75,83,51,83,79,90,51,85,93,92,91,96,95,94,95,34,38,38,10,57,54,55,97,100,99,98,47,34,95,50,98,7,100,50,47,102,100,101,95,96,103,102,91,99,93,102,104,106,93,105,109,108,107,108,96,97,97,55,74,107,75,52,112,111,110,103,96,108,106,110,92,112,106,103,114,112,113,115,108,109,114,3,111,5,114,115,117,5,116,120,119,118,123,122,121,126,125,124,129,128,127,128,86,88,127,88,130,132,127,131,124,53,90,126,90,86,133,126,128,136,135,134,135,129,132,134,132,137,134,139,138,122,125,133,121,133,129,140,121,135,143,142,141,142,109,144,124,144,53,122,123,145,148,147,146,109,142,149,117,146,4,148,117,150,152,148,151,142,143,153,152,118,147,120,152,149,155,120,154,158,157,156,161,160,159,164,163,162,167,166,165,166,136,138,165,138,168,170,165,169,162,123,140,164,140,136,171,164,166,174,173,172,173,167,170,172,170,175,177,172,176,159,163,171,161,171,167,178,161,173,181,180,179,184,183,182,183,174,177,182,177,185,187,182,186,179,160,178,181,178,174,188,181,183,191,190,189,190,184,187,189,187,192,189,194,193,157,180,188,156,188,184,195,156,190,198,197,196,201,200,199,200,143,145,145,123,162,159,160,202,205,204,203,153,143,200,155,203,119,205,155,153,207,205,206,200,201,208,207,196,204,198,207,209,211,198,210,214,213,212,213,201,202,202,160,179,212,180,157,217,216,215,208,201,213,211,215,197,217,211,208,219,217,218,220,213,214,219,0,216,2,219,220,222,2,221,2,222,1,5,117,4,8,50,7,11,32,10,14,25,13,17,21,16,18,17,15,23,14,12,19,15,14,15,16,25,26,30,28,21,26,27,25,11,9,16,27,11,27,28,32,35,38,34,36,35,33,12,13,35,35,36,12,35,13,9,9,38,35,41,46,40,37,33,48,37,48,43,44,41,39,42,43,41,43,48,46,49,48,33,33,47,49,46,8,6,48,49,8,49,47,50,51,90,53,56,73,55,59,66,58,60,65,62,30,60,61,32,59,57,28,61,59,61,62,66,67,72,69,65,67,68,66,56,54,62,68,56,68,69,73,76,83,75,77,82,79,72,77,78,73,76,74,69,78,76,78,79,83,84,88,86,82,84,85,83,51,52,79,85,51,85,86,90,93,106,92,94,97,96,38,94,95,57,94,38,58,94,57,54,94,58,97,94,54,100,102,99,95,104,101,101,47,95,50,100,98,47,101,100,101,104,102,105,104,95,95,103,105,102,93,91,104,105,93,105,103,106,107,144,109,97,107,108,74,75,107,107,97,74,52,144,107,53,144,52,112,114,111,108,115,113,113,103,108,106,112,110,103,113,112,113,115,114,109,150,116,116,115,109,114,5,3,115,116,5,116,150,117,120,155,119,121,140,123,126,133,125,127,132,129,88,127,128,90,126,124,86,128,126,128,129,133,134,138,136,132,134,135,133,121,122,129,135,121,135,136,140,141,145,143,144,141,142,124,125,141,141,144,124,141,125,122,122,145,141,148,152,147,151,150,109,109,149,151,117,148,146,150,151,148,151,149,152,154,149,142,142,153,154,152,120,118,149,154,120,154,153,155,156,195,158,161,178,160,164,171,163,165,170,167,138,165,166,140,164,162,136,166,164,166,167,171,172,177,174,170,172,173,171,161,159,167,173,161,173,174,178,181,188,180,182,187,184,177,182,183,178,181,179,174,183,181,183,184,188,189,193,191,187,189,190,188,156,157,184,190,156,190,191,195,198,211,197,199,202,201,145,199,200,162,199,145,163,199,162,159,199,163,202,199,159,205,207,204,200,209,206,206,153,200,155,205,203,153,206,205,206,209,207,210,209,200,200,208,210,207,198,196,209,210,198,210,208,211,212,223,214,202,212,213,179,180,212,212,202,179,157,223,212,158,223,157,217,219,216,213,220,218,218,208,213,211,217,215,208,218,217,218,220,219,214,224,221,221,220,214,219,2,0,220,221,2,221,224,222,227,226,225,230,229,228,233,232,231,236,235,234,239,238,237,237,241,240,239,240,242,244,239,243,236,234,245,236,245,241,246,236,237,249,248,247,248,238,244,247,244,250,252,247,251,246,231,235,233,246,238,253,233,248,256,255,254,230,258,257,258,249,252,257,252,259,261,257,260,253,254,232,256,253,249,262,256,258,261,264,263,267,266,265,229,265,228,268,229,263,270,268,269,271,225,266,273,270,272,275,273,274,227,276,226,228,255,262,262,230,228,233,253,232,236,246,235,239,244,238,240,239,237,242,243,239,243,250,244,277,245,234,241,237,236,237,238,246,247,252,249,244,247,248,250,251,247,251,259,252,246,233,231,238,248,233,248,249,253,256,262,255,257,261,230,252,257,258,259,260,257,260,264,261,253,256,254,249,258,256,258,230,262,229,230,261,261,263,229,267,271,266,229,267,265,263,269,268,269,272,270,271,227,225,272,274,273,274,278,275
};


#endif // _OBJECT_H_
