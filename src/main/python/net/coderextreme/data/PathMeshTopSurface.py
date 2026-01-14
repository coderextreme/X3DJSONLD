print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "PathMeshTopSurface.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Pathway for HAnim scene Winter and Spring."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Carol McDonald"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "Joe Williams and Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "27 May 2023"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 15 Sep 2025 05:20:53 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "source"
meta8.content = "originals/PathMeshTopSurface.x3dv"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/pathway.x3dv"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
NavigationInfo13 = x3d.NavigationInfo()
NavigationInfo13.DEF = "pathTop"
NavigationInfo13.headlight = False

Scene12.children.append(NavigationInfo13)
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.ambientIntensity = 0
Material16.diffuseColor = [0.5,0.5,0.5]
Material16.shininess = 0

Appearance15.material = Material16

Shape14.appearance = Appearance15
IndexedFaceSet17 = x3d.IndexedFaceSet()
IndexedFaceSet17.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet17.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate18 = x3d.Coordinate()
Coordinate18.point = [(26.39594, 0.075, 25.67472),(26.00195, 0.075, 25.75502),(26.25982, 0.075, 25.00694),(25.86584, 0.075, 25.08724),(26.1237, 0.075, 24.33916),(25.72972, 0.075, 24.41947)]

IndexedFaceSet17.coord = Coordinate18

Shape14.geometry = IndexedFaceSet17

Scene12.children.append(Shape14)
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.ambientIntensity = 0
Material21.diffuseColor = [0.5,0.5,0.5]
Material21.shininess = 0

Appearance20.material = Material21

Shape19.appearance = Appearance20
IndexedFaceSet22 = x3d.IndexedFaceSet()
IndexedFaceSet22.solid = False
IndexedFaceSet22.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet22.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate23 = x3d.Coordinate()
Coordinate23.point = [(26.39918, 0.075, 23.57728),(26.53329, 0.075, 24.23526),(25.5916, 0.075, 23.74189),(25.72572, 0.075, 24.39987)]

IndexedFaceSet22.coord = Coordinate23

Shape19.geometry = IndexedFaceSet22

Scene12.children.append(Shape19)
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.ambientIntensity = 0
Material26.diffuseColor = [0.5,0.5,0.5]
Material26.shininess = 0

Appearance25.material = Material26

Shape24.appearance = Appearance25
IndexedFaceSet27 = x3d.IndexedFaceSet()
IndexedFaceSet27.solid = False
IndexedFaceSet27.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet27.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate28 = x3d.Coordinate()
Coordinate28.point = [(25.58761, 0.075, 23.72229),(25.45349, 0.075, 23.06431),(26.39518, 0.075, 23.55768),(26.26106, 0.075, 22.8997)]

IndexedFaceSet27.coord = Coordinate28

Shape24.geometry = IndexedFaceSet27

Scene12.children.append(Shape24)
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.ambientIntensity = 0
Material31.diffuseColor = [0.5,0.5,0.5]
Material31.shininess = 0

Appearance30.material = Material31

Shape29.appearance = Appearance30
IndexedFaceSet32 = x3d.IndexedFaceSet()
IndexedFaceSet32.solid = False
IndexedFaceSet32.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet32.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate33 = x3d.Coordinate()
Coordinate33.point = [(25.84348, 0.075, 22.96441),(25.4495, 0.075, 23.04472),(25.57125, 0.075, 21.62885),(25.17726, 0.075, 21.70916)]

IndexedFaceSet32.coord = Coordinate33

Shape29.geometry = IndexedFaceSet32

Scene12.children.append(Shape29)
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()
Material36.ambientIntensity = 0
Material36.diffuseColor = [0.5,0.5,0.5]
Material36.shininess = 0

Appearance35.material = Material36

Shape34.appearance = Appearance35
IndexedFaceSet37 = x3d.IndexedFaceSet()
IndexedFaceSet37.solid = False
IndexedFaceSet37.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet37.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate38 = x3d.Coordinate()
Coordinate38.point = [(25.72724, 0.075, 28.63393),(25.59312, 0.075, 27.97596),(26.53481, 0.075, 28.46932),(26.40069, 0.075, 27.81134)]

IndexedFaceSet37.coord = Coordinate38

Shape34.geometry = IndexedFaceSet37

Scene12.children.append(Shape34)
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.ambientIntensity = 0
Material41.diffuseColor = [0.5,0.5,0.5]
Material41.shininess = 0

Appearance40.material = Material41

Shape39.appearance = Appearance40
IndexedFaceSet42 = x3d.IndexedFaceSet()
IndexedFaceSet42.solid = False
IndexedFaceSet42.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet42.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate43 = x3d.Coordinate()
Coordinate43.point = [(26.26258, 0.075, 27.13377),(26.3967, 0.075, 27.79175),(25.85879, 0.075, 27.21607),(25.99291, 0.075, 27.87405),(25.45501, 0.075, 27.29838),(25.58913, 0.075, 27.95636)]

IndexedFaceSet42.coord = Coordinate43

Shape39.geometry = IndexedFaceSet42

Scene12.children.append(Shape39)
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.ambientIntensity = 0
Material46.diffuseColor = [0.5,0.5,0.5]
Material46.shininess = 0

Appearance45.material = Material46

Shape44.appearance = Appearance45
IndexedFaceSet47 = x3d.IndexedFaceSet()
IndexedFaceSet47.solid = False
IndexedFaceSet47.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet47.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate48 = x3d.Coordinate()
Coordinate48.point = [(25.59236, 0.075, 25.85892),(25.78936, 0.075, 25.81877),(25.98635, 0.075, 25.77861),(25.72848, 0.075, 26.5267),(25.92547, 0.075, 26.48655),(26.12247, 0.075, 26.44639),(25.8646, 0.075, 27.19448),(26.06159, 0.075, 27.15432),(26.25858, 0.075, 27.11417)]

IndexedFaceSet47.coord = Coordinate48

Shape44.geometry = IndexedFaceSet47

Scene12.children.append(Shape44)
Shape49 = x3d.Shape()
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.ambientIntensity = 0
Material51.diffuseColor = [0.5,0.5,0.5]
Material51.shininess = 0

Appearance50.material = Material51

Shape49.appearance = Appearance50
IndexedFaceSet52 = x3d.IndexedFaceSet()
IndexedFaceSet52.solid = False
IndexedFaceSet52.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet52.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate53 = x3d.Coordinate()
Coordinate53.point = [(25.17878, 0.075, 25.94323),(25.57277, 0.075, 25.86292),(25.3149, 0.075, 26.611),(25.70888, 0.075, 26.53069),(25.45101, 0.075, 27.27878),(25.845, 0.075, 27.19847)]

IndexedFaceSet52.coord = Coordinate53

Shape49.geometry = IndexedFaceSet52

Scene12.children.append(Shape49)
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.ambientIntensity = 0
Material56.diffuseColor = [0.5,0.5,0.5]
Material56.shininess = 0

Appearance55.material = Material56

Shape54.appearance = Appearance55
IndexedFaceSet57 = x3d.IndexedFaceSet()
IndexedFaceSet57.solid = False
IndexedFaceSet57.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet57.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate58 = x3d.Coordinate()
Coordinate58.point = [(25.17478, 0.075, 25.92363),(25.04066, 0.075, 25.26565),(25.98236, 0.075, 25.75902),(25.84824, 0.075, 25.10104)]

IndexedFaceSet57.coord = Coordinate58

Shape54.geometry = IndexedFaceSet57

Scene12.children.append(Shape54)
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.ambientIntensity = 0
Material61.diffuseColor = [0.5,0.5,0.5]
Material61.shininess = 0

Appearance60.material = Material61

Shape59.appearance = Appearance60
IndexedFaceSet62 = x3d.IndexedFaceSet()
IndexedFaceSet62.solid = False
IndexedFaceSet62.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet62.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate63 = x3d.Coordinate()
Coordinate63.point = [(25.03667, 0.075, 25.24605),(24.90255, 0.075, 24.58807),(25.44046, 0.075, 25.16375),(25.30634, 0.075, 24.50577),(25.84424, 0.075, 25.08144),(25.71012, 0.075, 24.42346)]

IndexedFaceSet62.coord = Coordinate63

Shape59.geometry = IndexedFaceSet62

Scene12.children.append(Shape59)
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.ambientIntensity = 0
Material66.diffuseColor = [0.5,0.5,0.5]
Material66.shininess = 0

Appearance65.material = Material66

Shape64.appearance = Appearance65
IndexedFaceSet67 = x3d.IndexedFaceSet()
IndexedFaceSet67.solid = False
IndexedFaceSet67.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet67.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate68 = x3d.Coordinate()
Coordinate68.point = [(25.03991, 0.075, 23.14862),(25.43389, 0.075, 23.06831),(25.17602, 0.075, 23.81639),(25.57001, 0.075, 23.73609),(25.31214, 0.075, 24.48417),(25.70613, 0.075, 24.40386)]

IndexedFaceSet67.coord = Coordinate68

Shape64.geometry = IndexedFaceSet67

Scene12.children.append(Shape64)
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance()
Material71 = x3d.Material()
Material71.ambientIntensity = 0
Material71.diffuseColor = [0.5,0.5,0.5]
Material71.shininess = 0

Appearance70.material = Material71

Shape69.appearance = Appearance70
IndexedFaceSet72 = x3d.IndexedFaceSet()
IndexedFaceSet72.solid = False
IndexedFaceSet72.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet72.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate73 = x3d.Coordinate()
Coordinate73.point = [(24.62632, 0.075, 23.23292),(25.02031, 0.075, 23.15261),(24.89856, 0.075, 24.56848),(25.29254, 0.075, 24.48817)]

IndexedFaceSet72.coord = Coordinate73

Shape69.geometry = IndexedFaceSet72

Scene12.children.append(Shape69)
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.ambientIntensity = 0
Material76.diffuseColor = [0.5,0.5,0.5]
Material76.shininess = 0

Appearance75.material = Material76

Shape74.appearance = Appearance75
IndexedFaceSet77 = x3d.IndexedFaceSet()
IndexedFaceSet77.solid = False
IndexedFaceSet77.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet77.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate78 = x3d.Coordinate()
Coordinate78.point = [(24.62233, 0.075, 23.21332),(24.48821, 0.075, 22.55534),(25.4299, 0.075, 23.04871),(25.29578, 0.075, 22.39073)]

IndexedFaceSet77.coord = Coordinate78

Shape74.geometry = IndexedFaceSet77

Scene12.children.append(Shape74)
Shape79 = x3d.Shape()
Appearance80 = x3d.Appearance()
Material81 = x3d.Material()
Material81.ambientIntensity = 0
Material81.diffuseColor = [0.5,0.5,0.5]
Material81.shininess = 0

Appearance80.material = Material81

Shape79.appearance = Appearance80
IndexedFaceSet82 = x3d.IndexedFaceSet()
IndexedFaceSet82.solid = False
IndexedFaceSet82.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet82.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate83 = x3d.Coordinate()
Coordinate83.point = [(24.48421, 0.075, 22.53575),(24.3501, 0.075, 21.87777),(25.29178, 0.075, 22.37114),(25.15767, 0.075, 21.71316)]

IndexedFaceSet82.coord = Coordinate83

Shape79.geometry = IndexedFaceSet82

Scene12.children.append(Shape79)
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.ambientIntensity = 0
Material86.diffuseColor = [0.5,0.5,0.5]
Material86.shininess = 0

Appearance85.material = Material86

Shape84.appearance = Appearance85
IndexedFaceSet87 = x3d.IndexedFaceSet()
IndexedFaceSet87.solid = False
IndexedFaceSet87.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet87.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate88 = x3d.Coordinate()
Coordinate88.point = [(24.48745, 0.075, 20.43831),(24.88144, 0.075, 20.358),(24.75968, 0.075, 21.77387),(25.15367, 0.075, 21.69356)]

IndexedFaceSet87.coord = Coordinate88

Shape84.geometry = IndexedFaceSet87

Scene12.children.append(Shape84)
Shape89 = x3d.Shape()
Appearance90 = x3d.Appearance()
Material91 = x3d.Material()
Material91.ambientIntensity = 0
Material91.diffuseColor = [0.5,0.5,0.5]
Material91.shininess = 0

Appearance90.material = Material91

Shape89.appearance = Appearance90
IndexedFaceSet92 = x3d.IndexedFaceSet()
IndexedFaceSet92.solid = False
IndexedFaceSet92.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet92.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate93 = x3d.Coordinate()
Coordinate93.point = [(24.74009, 0.075, 21.77786),(24.3461, 0.075, 21.85817),(24.46785, 0.075, 20.44231),(24.07387, 0.075, 20.52261)]

IndexedFaceSet92.coord = Coordinate93

Shape89.geometry = IndexedFaceSet92

Scene12.children.append(Shape89)
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Material96 = x3d.Material()
Material96.ambientIntensity = 0
Material96.diffuseColor = [0.5,0.5,0.5]
Material96.shininess = 0

Appearance95.material = Material96

Shape94.appearance = Appearance95
IndexedFaceSet97 = x3d.IndexedFaceSet()
IndexedFaceSet97.solid = False
IndexedFaceSet97.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet97.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate98 = x3d.Coordinate()
Coordinate98.point = [(25.1763, 0.075, 30.15769),(25.04218, 0.075, 29.49971),(25.58009, 0.075, 30.07539),(25.44597, 0.075, 29.41741),(25.98387, 0.075, 29.99308),(25.84975, 0.075, 29.3351)]

IndexedFaceSet97.coord = Coordinate98

Shape94.geometry = IndexedFaceSet97

Scene12.children.append(Shape94)
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.ambientIntensity = 0
Material101.diffuseColor = [0.5,0.5,0.5]
Material101.shininess = 0

Appearance100.material = Material101

Shape99.appearance = Appearance100
IndexedFaceSet102 = x3d.IndexedFaceSet()
IndexedFaceSet102.solid = False
IndexedFaceSet102.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet102.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate103 = x3d.Coordinate()
Coordinate103.point = [(25.03819, 0.075, 29.48012),(24.90407, 0.075, 28.82214),(25.44197, 0.075, 29.39781),(25.30785, 0.075, 28.73983),(25.84576, 0.075, 29.31551),(25.71164, 0.075, 28.65753)]

IndexedFaceSet102.coord = Coordinate103

Shape99.geometry = IndexedFaceSet102

Scene12.children.append(Shape99)
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.ambientIntensity = 0
Material106.diffuseColor = [0.5,0.5,0.5]
Material106.shininess = 0

Appearance105.material = Material106

Shape104.appearance = Appearance105
IndexedFaceSet107 = x3d.IndexedFaceSet()
IndexedFaceSet107.solid = False
IndexedFaceSet107.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet107.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate108 = x3d.Coordinate()
Coordinate108.point = [(25.04142, 0.075, 27.38268),(25.43541, 0.075, 27.30237),(25.17754, 0.075, 28.05046),(25.57153, 0.075, 27.97015),(25.31366, 0.075, 28.71824),(25.70764, 0.075, 28.63793)]

IndexedFaceSet107.coord = Coordinate108

Shape104.geometry = IndexedFaceSet107

Scene12.children.append(Shape104)
Shape109 = x3d.Shape()
Appearance110 = x3d.Appearance()
Material111 = x3d.Material()
Material111.ambientIntensity = 0
Material111.diffuseColor = [0.5,0.5,0.5]
Material111.shininess = 0

Appearance110.material = Material111

Shape109.appearance = Appearance110
IndexedFaceSet112 = x3d.IndexedFaceSet()
IndexedFaceSet112.solid = False
IndexedFaceSet112.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet112.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate113 = x3d.Coordinate()
Coordinate113.point = [(24.62784, 0.075, 27.46698),(24.82483, 0.075, 27.42683),(25.02183, 0.075, 27.38668),(24.76396, 0.075, 28.13476),(24.96095, 0.075, 28.09461),(25.15794, 0.075, 28.05445),(24.90007, 0.075, 28.80254),(25.09706, 0.075, 28.76239),(25.29406, 0.075, 28.72223)]

IndexedFaceSet112.coord = Coordinate113

Shape109.geometry = IndexedFaceSet112

Scene12.children.append(Shape109)
Shape114 = x3d.Shape()
Appearance115 = x3d.Appearance()
Material116 = x3d.Material()
Material116.ambientIntensity = 0
Material116.diffuseColor = [0.5,0.5,0.5]
Material116.shininess = 0

Appearance115.material = Material116

Shape114.appearance = Appearance115
IndexedFaceSet117 = x3d.IndexedFaceSet()
IndexedFaceSet117.solid = False
IndexedFaceSet117.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet117.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate118 = x3d.Coordinate()
Coordinate118.point = [(24.62384, 0.075, 27.44739),(24.55679, 0.075, 27.1184),(24.48973, 0.075, 26.78941),(25.43142, 0.075, 27.28278),(25.36436, 0.075, 26.95379),(25.2973, 0.075, 26.6248)]

IndexedFaceSet117.coord = Coordinate118

Shape114.geometry = IndexedFaceSet117

Scene12.children.append(Shape114)
Shape119 = x3d.Shape()
Appearance120 = x3d.Appearance()
Material121 = x3d.Material()
Material121.ambientIntensity = 0
Material121.diffuseColor = [0.5,0.5,0.5]
Material121.shininess = 0

Appearance120.material = Material121

Shape119.appearance = Appearance120
IndexedFaceSet122 = x3d.IndexedFaceSet()
IndexedFaceSet122.solid = False
IndexedFaceSet122.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet122.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate123 = x3d.Coordinate()
Coordinate123.point = [(24.48573, 0.075, 26.76981),(24.35161, 0.075, 26.11183),(25.2933, 0.075, 26.6052),(25.15918, 0.075, 25.94722)]

IndexedFaceSet122.coord = Coordinate123

Shape119.geometry = IndexedFaceSet122

Scene12.children.append(Shape119)
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()
Material126.ambientIntensity = 0
Material126.diffuseColor = [0.5,0.5,0.5]
Material126.shininess = 0

Appearance125.material = Material126

Shape124.appearance = Appearance125
IndexedFaceSet127 = x3d.IndexedFaceSet()
IndexedFaceSet127.solid = False
IndexedFaceSet127.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet127.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate128 = x3d.Coordinate()
Coordinate128.point = [(25.15519, 0.075, 25.92762),(24.7612, 0.075, 26.00793),(24.88295, 0.075, 24.59207),(24.48897, 0.075, 24.67238)]

IndexedFaceSet127.coord = Coordinate128

Shape124.geometry = IndexedFaceSet127

Scene12.children.append(Shape124)
Shape129 = x3d.Shape()
Appearance130 = x3d.Appearance()
Material131 = x3d.Material()
Material131.ambientIntensity = 0
Material131.diffuseColor = [0.5,0.5,0.5]
Material131.shininess = 0

Appearance130.material = Material131

Shape129.appearance = Appearance130
IndexedFaceSet132 = x3d.IndexedFaceSet()
IndexedFaceSet132.solid = False
IndexedFaceSet132.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet132.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate133 = x3d.Coordinate()
Coordinate133.point = [(24.07538, 0.075, 24.75668),(24.46937, 0.075, 24.67637),(24.34762, 0.075, 26.09224),(24.7416, 0.075, 26.01193)]

IndexedFaceSet132.coord = Coordinate133

Shape129.geometry = IndexedFaceSet132

Scene12.children.append(Shape129)
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.ambientIntensity = 0
Material136.diffuseColor = [0.5,0.5,0.5]
Material136.shininess = 0

Appearance135.material = Material136

Shape134.appearance = Appearance135
IndexedFaceSet137 = x3d.IndexedFaceSet()
IndexedFaceSet137.solid = False
IndexedFaceSet137.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet137.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate138 = x3d.Coordinate()
Coordinate138.point = [(24.07139, 0.075, 24.73708),(23.93727, 0.075, 24.0791),(24.87896, 0.075, 24.57247),(24.74484, 0.075, 23.91449)]

IndexedFaceSet137.coord = Coordinate138

Shape134.geometry = IndexedFaceSet137

Scene12.children.append(Shape134)
Shape139 = x3d.Shape()
Appearance140 = x3d.Appearance()
Material141 = x3d.Material()
Material141.ambientIntensity = 0
Material141.diffuseColor = [0.5,0.5,0.5]
Material141.shininess = 0

Appearance140.material = Material141

Shape139.appearance = Appearance140
IndexedFaceSet142 = x3d.IndexedFaceSet()
IndexedFaceSet142.solid = False
IndexedFaceSet142.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet142.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate143 = x3d.Coordinate()
Coordinate143.point = [(24.60673, 0.075, 23.23692),(24.74084, 0.075, 23.89489),(24.20294, 0.075, 23.31922),(24.33706, 0.075, 23.9772),(23.79915, 0.075, 23.40153),(23.93328, 0.075, 24.05951)]

IndexedFaceSet142.coord = Coordinate143

Shape139.geometry = IndexedFaceSet142

Scene12.children.append(Shape139)
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.ambientIntensity = 0
Material146.diffuseColor = [0.5,0.5,0.5]
Material146.shininess = 0

Appearance145.material = Material146

Shape144.appearance = Appearance145
IndexedFaceSet147 = x3d.IndexedFaceSet()
IndexedFaceSet147.solid = False
IndexedFaceSet147.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet147.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate148 = x3d.Coordinate()
Coordinate148.point = [(24.60273, 0.075, 23.21732),(24.40574, 0.075, 23.25747),(24.20874, 0.075, 23.29763),(24.46661, 0.075, 22.54954),(24.26962, 0.075, 22.58969),(24.07263, 0.075, 22.62985),(24.3305, 0.075, 21.88176),(24.1335, 0.075, 21.92192),(23.93651, 0.075, 21.96207)]

IndexedFaceSet147.coord = Coordinate148

Shape144.geometry = IndexedFaceSet147

Scene12.children.append(Shape144)
Shape149 = x3d.Shape()
Appearance150 = x3d.Appearance()
Material151 = x3d.Material()
Material151.ambientIntensity = 0
Material151.diffuseColor = [0.5,0.5,0.5]
Material151.shininess = 0

Appearance150.material = Material151

Shape149.appearance = Appearance150
IndexedFaceSet152 = x3d.IndexedFaceSet()
IndexedFaceSet152.solid = False
IndexedFaceSet152.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet152.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate153 = x3d.Coordinate()
Coordinate153.point = [(23.52293, 0.075, 22.04637),(23.91691, 0.075, 21.96606),(23.65904, 0.075, 22.71415),(24.05303, 0.075, 22.63384),(23.79516, 0.075, 23.38193),(24.18915, 0.075, 23.30162)]

IndexedFaceSet152.coord = Coordinate153

Shape149.geometry = IndexedFaceSet152

Scene12.children.append(Shape149)
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.ambientIntensity = 0
Material156.diffuseColor = [0.5,0.5,0.5]
Material156.shininess = 0

Appearance155.material = Material156

Shape154.appearance = Appearance155
IndexedFaceSet157 = x3d.IndexedFaceSet()
IndexedFaceSet157.solid = False
IndexedFaceSet157.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet157.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate158 = x3d.Coordinate()
Coordinate158.point = [(23.51893, 0.075, 22.02678),(23.38481, 0.075, 21.3688),(24.3265, 0.075, 21.86217),(24.19238, 0.075, 21.20419)]

IndexedFaceSet157.coord = Coordinate158

Shape154.geometry = IndexedFaceSet157

Scene12.children.append(Shape154)
Shape159 = x3d.Shape()
Appearance160 = x3d.Appearance()
Material161 = x3d.Material()
Material161.ambientIntensity = 0
Material161.diffuseColor = [0.5,0.5,0.5]
Material161.shininess = 0

Appearance160.material = Material161

Shape159.appearance = Appearance160
IndexedFaceSet162 = x3d.IndexedFaceSet()
IndexedFaceSet162.solid = False
IndexedFaceSet162.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet162.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate163 = x3d.Coordinate()
Coordinate163.point = [(24.05427, 0.075, 20.52661),(24.18839, 0.075, 21.18459),(23.2467, 0.075, 20.69122),(23.38082, 0.075, 21.3492)]

IndexedFaceSet162.coord = Coordinate163

Shape159.geometry = IndexedFaceSet162

Scene12.children.append(Shape159)
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.ambientIntensity = 0
Material166.diffuseColor = [0.5,0.5,0.5]
Material166.shininess = 0

Appearance165.material = Material166

Shape164.appearance = Appearance165
IndexedFaceSet167 = x3d.IndexedFaceSet()
IndexedFaceSet167.solid = False
IndexedFaceSet167.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet167.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate168 = x3d.Coordinate()
Coordinate168.point = [(24.05028, 0.075, 20.50701),(23.65629, 0.075, 20.58732),(23.91416, 0.075, 19.83923),(23.52017, 0.075, 19.91954),(23.77804, 0.075, 19.17146),(23.38405, 0.075, 19.25176)]

IndexedFaceSet167.coord = Coordinate168

Shape164.geometry = IndexedFaceSet167

Scene12.children.append(Shape164)
Shape169 = x3d.Shape()
Appearance170 = x3d.Appearance()
Material171 = x3d.Material()
Material171.ambientIntensity = 0
Material171.diffuseColor = [0.5,0.5,0.5]
Material171.shininess = 0

Appearance170.material = Material171

Shape169.appearance = Appearance170
IndexedFaceSet172 = x3d.IndexedFaceSet()
IndexedFaceSet172.solid = False
IndexedFaceSet172.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet172.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate173 = x3d.Coordinate()
Coordinate173.point = [(22.97047, 0.075, 19.33607),(23.36446, 0.075, 19.25576),(23.2427, 0.075, 20.67162),(23.63669, 0.075, 20.59131)]

IndexedFaceSet172.coord = Coordinate173

Shape169.geometry = IndexedFaceSet172

Scene12.children.append(Shape169)
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.ambientIntensity = 0
Material176.diffuseColor = [0.5,0.5,0.5]
Material176.shininess = 0

Appearance175.material = Material176

Shape174.appearance = Appearance175
IndexedFaceSet177 = x3d.IndexedFaceSet()
IndexedFaceSet177.solid = False
IndexedFaceSet177.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet177.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate178 = x3d.Coordinate()
Coordinate178.point = [(24.49048, 0.075, 28.90644),(24.88447, 0.075, 28.82613),(24.76272, 0.075, 30.242),(25.1567, 0.075, 30.16169)]

IndexedFaceSet177.coord = Coordinate178

Shape174.geometry = IndexedFaceSet177

Scene12.children.append(Shape174)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.ambientIntensity = 0
Material181.diffuseColor = [0.5,0.5,0.5]
Material181.shininess = 0

Appearance180.material = Material181

Shape179.appearance = Appearance180
IndexedFaceSet182 = x3d.IndexedFaceSet()
IndexedFaceSet182.solid = False
IndexedFaceSet182.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet182.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate183 = x3d.Coordinate()
Coordinate183.point = [(24.0769, 0.075, 28.99074),(24.47089, 0.075, 28.91043),(24.34913, 0.075, 30.3263),(24.74312, 0.075, 30.24599)]

IndexedFaceSet182.coord = Coordinate183

Shape179.geometry = IndexedFaceSet182

Scene12.children.append(Shape179)
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.ambientIntensity = 0
Material186.diffuseColor = [0.5,0.5,0.5]
Material186.shininess = 0

Appearance185.material = Material186

Shape184.appearance = Appearance185
IndexedFaceSet187 = x3d.IndexedFaceSet()
IndexedFaceSet187.solid = False
IndexedFaceSet187.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet187.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate188 = x3d.Coordinate()
Coordinate188.point = [(24.0729, 0.075, 28.97115),(24.00584, 0.075, 28.64216),(23.93879, 0.075, 28.31317),(24.47669, 0.075, 28.88884),(24.40963, 0.075, 28.55985),(24.34257, 0.075, 28.23086),(24.88048, 0.075, 28.80654),(24.81342, 0.075, 28.47754),(24.74636, 0.075, 28.14856)]

IndexedFaceSet187.coord = Coordinate188

Shape184.geometry = IndexedFaceSet187

Scene12.children.append(Shape184)
Shape189 = x3d.Shape()
Appearance190 = x3d.Appearance()
Material191 = x3d.Material()
Material191.ambientIntensity = 0
Material191.diffuseColor = [0.5,0.5,0.5]
Material191.shininess = 0

Appearance190.material = Material191

Shape189.appearance = Appearance190
IndexedFaceSet192 = x3d.IndexedFaceSet()
IndexedFaceSet192.solid = False
IndexedFaceSet192.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet192.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate193 = x3d.Coordinate()
Coordinate193.point = [(23.93479, 0.075, 28.29357),(23.80067, 0.075, 27.63559),(24.33858, 0.075, 28.21126),(24.20446, 0.075, 27.55329),(24.74236, 0.075, 28.12896),(24.60824, 0.075, 27.47098)]

IndexedFaceSet192.coord = Coordinate193

Shape189.geometry = IndexedFaceSet192

Scene12.children.append(Shape189)
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
Material196 = x3d.Material()
Material196.ambientIntensity = 0
Material196.diffuseColor = [0.5,0.5,0.5]
Material196.shininess = 0

Appearance195.material = Material196

Shape194.appearance = Appearance195
IndexedFaceSet197 = x3d.IndexedFaceSet()
IndexedFaceSet197.solid = False
IndexedFaceSet197.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet197.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate198 = x3d.Coordinate()
Coordinate198.point = [(23.93803, 0.075, 26.19613),(24.13502, 0.075, 26.15598),(24.33201, 0.075, 26.11583),(24.07414, 0.075, 26.86391),(24.27114, 0.075, 26.82376),(24.46813, 0.075, 26.7836),(24.21026, 0.075, 27.53169),(24.40725, 0.075, 27.49154),(24.60425, 0.075, 27.45138)]

IndexedFaceSet197.coord = Coordinate198

Shape194.geometry = IndexedFaceSet197

Scene12.children.append(Shape194)
Shape199 = x3d.Shape()
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.ambientIntensity = 0
Material201.diffuseColor = [0.5,0.5,0.5]
Material201.shininess = 0

Appearance200.material = Material201

Shape199.appearance = Appearance200
IndexedFaceSet202 = x3d.IndexedFaceSet()
IndexedFaceSet202.solid = False
IndexedFaceSet202.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet202.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate203 = x3d.Coordinate()
Coordinate203.point = [(23.52444, 0.075, 26.28044),(23.72144, 0.075, 26.24028),(23.91843, 0.075, 26.20013),(23.66056, 0.075, 26.94822),(23.85755, 0.075, 26.90806),(24.05455, 0.075, 26.86791),(23.79668, 0.075, 27.61599),(23.99367, 0.075, 27.57584),(24.19066, 0.075, 27.53568)]

IndexedFaceSet202.coord = Coordinate203

Shape199.geometry = IndexedFaceSet202

Scene12.children.append(Shape199)
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.ambientIntensity = 0
Material206.diffuseColor = [0.5,0.5,0.5]
Material206.shininess = 0

Appearance205.material = Material206

Shape204.appearance = Appearance205
IndexedFaceSet207 = x3d.IndexedFaceSet()
IndexedFaceSet207.solid = False
IndexedFaceSet207.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet207.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate208 = x3d.Coordinate()
Coordinate208.point = [(23.52045, 0.075, 26.26084),(23.38633, 0.075, 25.60286),(24.32802, 0.075, 26.09623),(24.1939, 0.075, 25.43825)]

IndexedFaceSet207.coord = Coordinate208

Shape204.geometry = IndexedFaceSet207

Scene12.children.append(Shape204)
Shape209 = x3d.Shape()
Appearance210 = x3d.Appearance()
Material211 = x3d.Material()
Material211.ambientIntensity = 0
Material211.diffuseColor = [0.5,0.5,0.5]
Material211.shininess = 0

Appearance210.material = Material211

Shape209.appearance = Appearance210
IndexedFaceSet212 = x3d.IndexedFaceSet()
IndexedFaceSet212.solid = False
IndexedFaceSet212.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet212.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate213 = x3d.Coordinate()
Coordinate213.point = [(23.38233, 0.075, 25.58327),(23.24821, 0.075, 24.92529),(24.18991, 0.075, 25.41865),(24.05579, 0.075, 24.76067)]

IndexedFaceSet212.coord = Coordinate213

Shape209.geometry = IndexedFaceSet212

Scene12.children.append(Shape209)
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Material216 = x3d.Material()
Material216.ambientIntensity = 0
Material216.diffuseColor = [0.5,0.5,0.5]
Material216.shininess = 0

Appearance215.material = Material216

Shape214.appearance = Appearance215
IndexedFaceSet217 = x3d.IndexedFaceSet()
IndexedFaceSet217.solid = False
IndexedFaceSet217.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet217.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate218 = x3d.Coordinate()
Coordinate218.point = [(23.38557, 0.075, 23.48583),(23.77956, 0.075, 23.40552),(23.52169, 0.075, 24.15361),(23.91567, 0.075, 24.0733),(23.6578, 0.075, 24.82138),(24.05179, 0.075, 24.74108)]

IndexedFaceSet217.coord = Coordinate218

Shape214.geometry = IndexedFaceSet217

Scene12.children.append(Shape214)
Shape219 = x3d.Shape()
Appearance220 = x3d.Appearance()
Material221 = x3d.Material()
Material221.ambientIntensity = 0
Material221.diffuseColor = [0.5,0.5,0.5]
Material221.shininess = 0

Appearance220.material = Material221

Shape219.appearance = Appearance220
IndexedFaceSet222 = x3d.IndexedFaceSet()
IndexedFaceSet222.solid = False
IndexedFaceSet222.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet222.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate223 = x3d.Coordinate()
Coordinate223.point = [(22.97199, 0.075, 23.57013),(23.36597, 0.075, 23.48982),(23.1081, 0.075, 24.23791),(23.50209, 0.075, 24.1576),(23.24422, 0.075, 24.90569),(23.63821, 0.075, 24.82538)]

IndexedFaceSet222.coord = Coordinate223

Shape219.geometry = IndexedFaceSet222

Scene12.children.append(Shape219)
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.ambientIntensity = 0
Material226.diffuseColor = [0.5,0.5,0.5]
Material226.shininess = 0

Appearance225.material = Material226

Shape224.appearance = Appearance225
IndexedFaceSet227 = x3d.IndexedFaceSet()
IndexedFaceSet227.solid = False
IndexedFaceSet227.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet227.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate228 = x3d.Coordinate()
Coordinate228.point = [(22.96799, 0.075, 23.55054),(22.83387, 0.075, 22.89256),(23.77556, 0.075, 23.38592),(23.64144, 0.075, 22.72794)]

IndexedFaceSet227.coord = Coordinate228

Shape224.geometry = IndexedFaceSet227

Scene12.children.append(Shape224)
Shape229 = x3d.Shape()
Appearance230 = x3d.Appearance()
Material231 = x3d.Material()
Material231.ambientIntensity = 0
Material231.diffuseColor = [0.5,0.5,0.5]
Material231.shininess = 0

Appearance230.material = Material231

Shape229.appearance = Appearance230
IndexedFaceSet232 = x3d.IndexedFaceSet()
IndexedFaceSet232.solid = False
IndexedFaceSet232.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet232.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate233 = x3d.Coordinate()
Coordinate233.point = [(22.82988, 0.075, 22.87296),(22.69576, 0.075, 22.21498),(23.63745, 0.075, 22.70835),(23.50333, 0.075, 22.05037)]

IndexedFaceSet232.coord = Coordinate233

Shape229.geometry = IndexedFaceSet232

Scene12.children.append(Shape229)
Shape234 = x3d.Shape()
Appearance235 = x3d.Appearance()
Material236 = x3d.Material()
Material236.ambientIntensity = 0
Material236.diffuseColor = [0.5,0.5,0.5]
Material236.shininess = 0

Appearance235.material = Material236

Shape234.appearance = Appearance235
IndexedFaceSet237 = x3d.IndexedFaceSet()
IndexedFaceSet237.solid = False
IndexedFaceSet237.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet237.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate238 = x3d.Coordinate()
Coordinate238.point = [(22.83311, 0.075, 20.77552),(23.2271, 0.075, 20.69522),(23.10535, 0.075, 22.11108),(23.49934, 0.075, 22.03077)]

IndexedFaceSet237.coord = Coordinate238

Shape234.geometry = IndexedFaceSet237

Scene12.children.append(Shape234)
Shape239 = x3d.Shape()
Appearance240 = x3d.Appearance()
Material241 = x3d.Material()
Material241.ambientIntensity = 0
Material241.diffuseColor = [0.5,0.5,0.5]
Material241.shininess = 0

Appearance240.material = Material241

Shape239.appearance = Appearance240
IndexedFaceSet242 = x3d.IndexedFaceSet()
IndexedFaceSet242.solid = False
IndexedFaceSet242.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet242.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate243 = x3d.Coordinate()
Coordinate243.point = [(22.41953, 0.075, 20.85983),(22.81352, 0.075, 20.77952),(22.69176, 0.075, 22.19538),(23.08575, 0.075, 22.11507)]

IndexedFaceSet242.coord = Coordinate243

Shape239.geometry = IndexedFaceSet242

Scene12.children.append(Shape239)
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.ambientIntensity = 0
Material246.diffuseColor = [0.5,0.5,0.5]
Material246.shininess = 0

Appearance245.material = Material246

Shape244.appearance = Appearance245
IndexedFaceSet247 = x3d.IndexedFaceSet()
IndexedFaceSet247.solid = False
IndexedFaceSet247.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet247.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate248 = x3d.Coordinate()
Coordinate248.point = [(22.41554, 0.075, 20.84023),(22.28142, 0.075, 20.18225),(23.22311, 0.075, 20.67562),(23.08899, 0.075, 20.01764)]

IndexedFaceSet247.coord = Coordinate248

Shape244.geometry = IndexedFaceSet247

Scene12.children.append(Shape244)
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Material251 = x3d.Material()
Material251.ambientIntensity = 0
Material251.diffuseColor = [0.5,0.5,0.5]
Material251.shininess = 0

Appearance250.material = Material251

Shape249.appearance = Appearance250
IndexedFaceSet252 = x3d.IndexedFaceSet()
IndexedFaceSet252.solid = False
IndexedFaceSet252.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet252.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate253 = x3d.Coordinate()
Coordinate253.point = [(22.27742, 0.075, 20.16265),(22.1433, 0.075, 19.50467),(23.08499, 0.075, 19.99804),(22.95087, 0.075, 19.34006)]

IndexedFaceSet252.coord = Coordinate253

Shape249.geometry = IndexedFaceSet252

Scene12.children.append(Shape249)
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.ambientIntensity = 0
Material256.diffuseColor = [0.5,0.5,0.5]
Material256.shininess = 0

Appearance255.material = Material256

Shape254.appearance = Appearance255
IndexedFaceSet257 = x3d.IndexedFaceSet()
IndexedFaceSet257.solid = False
IndexedFaceSet257.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet257.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate258 = x3d.Coordinate()
Coordinate258.point = [(22.28066, 0.075, 18.06522),(22.67465, 0.075, 17.98491),(22.41678, 0.075, 18.733),(22.81076, 0.075, 18.65269),(22.55289, 0.075, 19.40077),(22.94688, 0.075, 19.32047)]

IndexedFaceSet257.coord = Coordinate258

Shape254.geometry = IndexedFaceSet257

Scene12.children.append(Shape254)
Shape259 = x3d.Shape()
Appearance260 = x3d.Appearance()
Material261 = x3d.Material()
Material261.ambientIntensity = 0
Material261.diffuseColor = [0.5,0.5,0.5]
Material261.shininess = 0

Appearance260.material = Material261

Shape259.appearance = Appearance260
IndexedFaceSet262 = x3d.IndexedFaceSet()
IndexedFaceSet262.solid = False
IndexedFaceSet262.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet262.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate263 = x3d.Coordinate()
Coordinate263.point = [(21.86707, 0.075, 18.14952),(22.26106, 0.075, 18.06921),(22.13931, 0.075, 19.48508),(22.53329, 0.075, 19.40477)]

IndexedFaceSet262.coord = Coordinate263

Shape259.geometry = IndexedFaceSet262

Scene12.children.append(Shape259)
Shape264 = x3d.Shape()
Appearance265 = x3d.Appearance()
Material266 = x3d.Material()
Material266.ambientIntensity = 0
Material266.diffuseColor = [0.5,0.5,0.5]
Material266.shininess = 0

Appearance265.material = Material266

Shape264.appearance = Appearance265
IndexedFaceSet267 = x3d.IndexedFaceSet()
IndexedFaceSet267.solid = False
IndexedFaceSet267.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet267.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate268 = x3d.Coordinate()
Coordinate268.point = [(24.0573, 0.075, 28.99474),(24.19142, 0.075, 29.65272),(23.24973, 0.075, 29.15935),(23.38385, 0.075, 29.81733)]

IndexedFaceSet267.coord = Coordinate268

Shape264.geometry = IndexedFaceSet267

Scene12.children.append(Shape264)
Shape269 = x3d.Shape()
Appearance270 = x3d.Appearance()
Material271 = x3d.Material()
Material271.ambientIntensity = 0
Material271.diffuseColor = [0.5,0.5,0.5]
Material271.shininess = 0

Appearance270.material = Material271

Shape269.appearance = Appearance270
IndexedFaceSet272 = x3d.IndexedFaceSet()
IndexedFaceSet272.solid = False
IndexedFaceSet272.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet272.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate273 = x3d.Coordinate()
Coordinate273.point = [(24.05331, 0.075, 28.97514),(23.85631, 0.075, 29.0153),(23.65932, 0.075, 29.05545),(23.91719, 0.075, 28.30736),(23.7202, 0.075, 28.34752),(23.5232, 0.075, 28.38767),(23.78107, 0.075, 27.63959),(23.58408, 0.075, 27.67974),(23.38709, 0.075, 27.71989)]

IndexedFaceSet272.coord = Coordinate273

Shape269.geometry = IndexedFaceSet272

Scene12.children.append(Shape269)
Shape274 = x3d.Shape()
Appearance275 = x3d.Appearance()
Material276 = x3d.Material()
Material276.ambientIntensity = 0
Material276.diffuseColor = [0.5,0.5,0.5]
Material276.shininess = 0

Appearance275.material = Material276

Shape274.appearance = Appearance275
IndexedFaceSet277 = x3d.IndexedFaceSet()
IndexedFaceSet277.solid = False
IndexedFaceSet277.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet277.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate278 = x3d.Coordinate()
Coordinate278.point = [(23.63972, 0.075, 29.05944),(23.24574, 0.075, 29.13975),(23.50361, 0.075, 28.39167),(23.10962, 0.075, 28.47198),(23.36749, 0.075, 27.72389),(22.9735, 0.075, 27.8042)]

IndexedFaceSet277.coord = Coordinate278

Shape274.geometry = IndexedFaceSet277

Scene12.children.append(Shape274)
Shape279 = x3d.Shape()
Appearance280 = x3d.Appearance()
Material281 = x3d.Material()
Material281.ambientIntensity = 0
Material281.diffuseColor = [0.5,0.5,0.5]
Material281.shininess = 0

Appearance280.material = Material281

Shape279.appearance = Appearance280
IndexedFaceSet282 = x3d.IndexedFaceSet()
IndexedFaceSet282.solid = False
IndexedFaceSet282.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet282.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate283 = x3d.Coordinate()
Coordinate283.point = [(23.64296, 0.075, 26.96201),(23.77708, 0.075, 27.61999),(22.83539, 0.075, 27.12662),(22.96951, 0.075, 27.7846)]

IndexedFaceSet282.coord = Coordinate283

Shape279.geometry = IndexedFaceSet282

Scene12.children.append(Shape279)
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.ambientIntensity = 0
Material286.diffuseColor = [0.5,0.5,0.5]
Material286.shininess = 0

Appearance285.material = Material286

Shape284.appearance = Appearance285
IndexedFaceSet287 = x3d.IndexedFaceSet()
IndexedFaceSet287.solid = False
IndexedFaceSet287.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet287.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate288 = x3d.Coordinate()
Coordinate288.point = [(22.83139, 0.075, 27.10702),(22.69728, 0.075, 26.44904),(23.23518, 0.075, 27.02472),(23.10106, 0.075, 26.36674),(23.63897, 0.075, 26.94241),(23.50485, 0.075, 26.28443)]

IndexedFaceSet287.coord = Coordinate288

Shape284.geometry = IndexedFaceSet287

Scene12.children.append(Shape284)
Shape289 = x3d.Shape()
Appearance290 = x3d.Appearance()
Material291 = x3d.Material()
Material291.ambientIntensity = 0
Material291.diffuseColor = [0.5,0.5,0.5]
Material291.shininess = 0

Appearance290.material = Material291

Shape289.appearance = Appearance290
IndexedFaceSet292 = x3d.IndexedFaceSet()
IndexedFaceSet292.solid = False
IndexedFaceSet292.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet292.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate293 = x3d.Coordinate()
Coordinate293.point = [(22.83463, 0.075, 25.00959),(23.22862, 0.075, 24.92928),(22.97075, 0.075, 25.67737),(23.36473, 0.075, 25.59706),(23.10686, 0.075, 26.34514),(23.50085, 0.075, 26.26484)]

IndexedFaceSet292.coord = Coordinate293

Shape289.geometry = IndexedFaceSet292

Scene12.children.append(Shape289)
Shape294 = x3d.Shape()
Appearance295 = x3d.Appearance()
Material296 = x3d.Material()
Material296.ambientIntensity = 0
Material296.diffuseColor = [0.5,0.5,0.5]
Material296.shininess = 0

Appearance295.material = Material296

Shape294.appearance = Appearance295
IndexedFaceSet297 = x3d.IndexedFaceSet()
IndexedFaceSet297.solid = False
IndexedFaceSet297.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet297.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate298 = x3d.Coordinate()
Coordinate298.point = [(23.08727, 0.075, 26.34914),(22.69328, 0.075, 26.42945),(22.95115, 0.075, 25.68136),(22.55716, 0.075, 25.76167),(22.81503, 0.075, 25.01358),(22.42105, 0.075, 25.09389)]

IndexedFaceSet297.coord = Coordinate298

Shape294.geometry = IndexedFaceSet297

Scene12.children.append(Shape294)
Shape299 = x3d.Shape()
Appearance300 = x3d.Appearance()
Material301 = x3d.Material()
Material301.ambientIntensity = 0
Material301.diffuseColor = [0.5,0.5,0.5]
Material301.shininess = 0

Appearance300.material = Material301

Shape299.appearance = Appearance300
IndexedFaceSet302 = x3d.IndexedFaceSet()
IndexedFaceSet302.solid = False
IndexedFaceSet302.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet302.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate303 = x3d.Coordinate()
Coordinate303.point = [(23.0905, 0.075, 24.2517),(23.22462, 0.075, 24.90968),(22.28293, 0.075, 24.41632),(22.41705, 0.075, 25.07429)]

IndexedFaceSet302.coord = Coordinate303

Shape299.geometry = IndexedFaceSet302

Scene12.children.append(Shape299)
Shape304 = x3d.Shape()
Appearance305 = x3d.Appearance()
Material306 = x3d.Material()
Material306.ambientIntensity = 0
Material306.diffuseColor = [0.5,0.5,0.5]
Material306.shininess = 0

Appearance305.material = Material306

Shape304.appearance = Appearance305
IndexedFaceSet307 = x3d.IndexedFaceSet()
IndexedFaceSet307.solid = False
IndexedFaceSet307.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet307.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate308 = x3d.Coordinate()
Coordinate308.point = [(22.27894, 0.075, 24.39672),(22.14482, 0.075, 23.73874),(23.08651, 0.075, 24.23211),(22.95239, 0.075, 23.57413)]

IndexedFaceSet307.coord = Coordinate308

Shape304.geometry = IndexedFaceSet307

Scene12.children.append(Shape304)
Shape309 = x3d.Shape()
Appearance310 = x3d.Appearance()
Material311 = x3d.Material()
Material311.ambientIntensity = 0
Material311.diffuseColor = [0.5,0.5,0.5]
Material311.shininess = 0

Appearance310.material = Material311

Shape309.appearance = Appearance310
IndexedFaceSet312 = x3d.IndexedFaceSet()
IndexedFaceSet312.solid = False
IndexedFaceSet312.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet312.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate313 = x3d.Coordinate()
Coordinate313.point = [(22.28218, 0.075, 22.29928),(22.67616, 0.075, 22.21897),(22.55441, 0.075, 23.63484),(22.94839, 0.075, 23.55453)]

IndexedFaceSet312.coord = Coordinate313

Shape309.geometry = IndexedFaceSet312

Scene12.children.append(Shape309)
Shape314 = x3d.Shape()
Appearance315 = x3d.Appearance()
Material316 = x3d.Material()
Material316.ambientIntensity = 0
Material316.diffuseColor = [0.5,0.5,0.5]
Material316.shininess = 0

Appearance315.material = Material316

Shape314.appearance = Appearance315
IndexedFaceSet317 = x3d.IndexedFaceSet()
IndexedFaceSet317.solid = False
IndexedFaceSet317.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet317.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate318 = x3d.Coordinate()
Coordinate318.point = [(22.53481, 0.075, 23.63883),(22.33782, 0.075, 23.67899),(22.14083, 0.075, 23.71914),(22.39869, 0.075, 22.97105),(22.2017, 0.075, 23.01121),(22.00471, 0.075, 23.05136),(22.26258, 0.075, 22.30328),(22.06558, 0.075, 22.34343),(21.86859, 0.075, 22.38358)]

IndexedFaceSet317.coord = Coordinate318

Shape314.geometry = IndexedFaceSet317

Scene12.children.append(Shape314)
Shape319 = x3d.Shape()
Appearance320 = x3d.Appearance()
Material321 = x3d.Material()
Material321.ambientIntensity = 0
Material321.diffuseColor = [0.5,0.5,0.5]
Material321.shininess = 0

Appearance320.material = Material321

Shape319.appearance = Appearance320
IndexedFaceSet322 = x3d.IndexedFaceSet()
IndexedFaceSet322.solid = False
IndexedFaceSet322.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet322.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate323 = x3d.Coordinate()
Coordinate323.point = [(22.53805, 0.075, 21.5414),(22.67217, 0.075, 22.19938),(21.73048, 0.075, 21.70601),(21.8646, 0.075, 22.36399)]

IndexedFaceSet322.coord = Coordinate323

Shape319.geometry = IndexedFaceSet322

Scene12.children.append(Shape319)
Shape324 = x3d.Shape()
Appearance325 = x3d.Appearance()
Material326 = x3d.Material()
Material326.ambientIntensity = 0
Material326.diffuseColor = [0.5,0.5,0.5]
Material326.shininess = 0

Appearance325.material = Material326

Shape324.appearance = Appearance325
IndexedFaceSet327 = x3d.IndexedFaceSet()
IndexedFaceSet327.solid = False
IndexedFaceSet327.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet327.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate328 = x3d.Coordinate()
Coordinate328.point = [(21.72648, 0.075, 21.68641),(21.59236, 0.075, 21.02843),(22.53405, 0.075, 21.5218),(22.39993, 0.075, 20.86382)]

IndexedFaceSet327.coord = Coordinate328

Shape324.geometry = IndexedFaceSet327

Scene12.children.append(Shape324)
Shape329 = x3d.Shape()
Appearance330 = x3d.Appearance()
Material331 = x3d.Material()
Material331.ambientIntensity = 0
Material331.diffuseColor = [0.5,0.5,0.5]
Material331.shininess = 0

Appearance330.material = Material331

Shape329.appearance = Appearance330
IndexedFaceSet332 = x3d.IndexedFaceSet()
IndexedFaceSet332.solid = False
IndexedFaceSet332.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet332.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate333 = x3d.Coordinate()
Coordinate333.point = [(21.72972, 0.075, 19.58898),(22.12371, 0.075, 19.50867),(22.00195, 0.075, 20.92453),(22.39594, 0.075, 20.84422)]

IndexedFaceSet332.coord = Coordinate333

Shape329.geometry = IndexedFaceSet332

Scene12.children.append(Shape329)
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance()
Material336 = x3d.Material()
Material336.ambientIntensity = 0
Material336.diffuseColor = [0.5,0.5,0.5]
Material336.shininess = 0

Appearance335.material = Material336

Shape334.appearance = Appearance335
IndexedFaceSet337 = x3d.IndexedFaceSet()
IndexedFaceSet337.solid = False
IndexedFaceSet337.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet337.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate338 = x3d.Coordinate()
Coordinate338.point = [(21.98236, 0.075, 20.92853),(21.58837, 0.075, 21.00883),(21.71012, 0.075, 19.59297),(21.31614, 0.075, 19.67328)]

IndexedFaceSet337.coord = Coordinate338

Shape334.geometry = IndexedFaceSet337

Scene12.children.append(Shape334)
Shape339 = x3d.Shape()
Appearance340 = x3d.Appearance()
Material341 = x3d.Material()
Material341.ambientIntensity = 0
Material341.diffuseColor = [0.5,0.5,0.5]
Material341.shininess = 0

Appearance340.material = Material341

Shape339.appearance = Appearance340
IndexedFaceSet342 = x3d.IndexedFaceSet()
IndexedFaceSet342.solid = False
IndexedFaceSet342.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet342.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate343 = x3d.Coordinate()
Coordinate343.point = [(21.31214, 0.075, 19.65368),(21.17802, 0.075, 18.9957),(22.11971, 0.075, 19.48907),(21.98559, 0.075, 18.83109)]

IndexedFaceSet342.coord = Coordinate343

Shape339.geometry = IndexedFaceSet342

Scene12.children.append(Shape339)
Shape344 = x3d.Shape()
Appearance345 = x3d.Appearance()
Material346 = x3d.Material()
Material346.ambientIntensity = 0
Material346.diffuseColor = [0.5,0.5,0.5]
Material346.shininess = 0

Appearance345.material = Material346

Shape344.appearance = Appearance345
IndexedFaceSet347 = x3d.IndexedFaceSet()
IndexedFaceSet347.solid = False
IndexedFaceSet347.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet347.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate348 = x3d.Coordinate()
Coordinate348.point = [(21.17403, 0.075, 18.97611),(21.03991, 0.075, 18.31813),(21.9816, 0.075, 18.81149),(21.84748, 0.075, 18.15351)]

IndexedFaceSet347.coord = Coordinate348

Shape344.geometry = IndexedFaceSet347

Scene12.children.append(Shape344)
Shape349 = x3d.Shape()
Appearance350 = x3d.Appearance()
Material351 = x3d.Material()
Material351.ambientIntensity = 0
Material351.diffuseColor = [0.5,0.5,0.5]
Material351.shininess = 0

Appearance350.material = Material351

Shape349.appearance = Appearance350
IndexedFaceSet352 = x3d.IndexedFaceSet()
IndexedFaceSet352.solid = False
IndexedFaceSet352.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet352.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate353 = x3d.Coordinate()
Coordinate353.point = [(21.17726, 0.075, 16.87867),(21.57125, 0.075, 16.79836),(21.4495, 0.075, 18.21423),(21.84348, 0.075, 18.13392)]

IndexedFaceSet352.coord = Coordinate353

Shape349.geometry = IndexedFaceSet352

Scene12.children.append(Shape349)
Shape354 = x3d.Shape()
Appearance355 = x3d.Appearance()
Material356 = x3d.Material()
Material356.ambientIntensity = 0
Material356.diffuseColor = [0.5,0.5,0.5]
Material356.shininess = 0

Appearance355.material = Material356

Shape354.appearance = Appearance355
IndexedFaceSet357 = x3d.IndexedFaceSet()
IndexedFaceSet357.solid = False
IndexedFaceSet357.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet357.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate358 = x3d.Coordinate()
Coordinate358.point = [(20.76368, 0.075, 16.96297),(20.96067, 0.075, 16.92282),(21.15767, 0.075, 16.88267),(20.8998, 0.075, 17.63075),(21.09679, 0.075, 17.5906),(21.29378, 0.075, 17.55044),(21.03591, 0.075, 18.29853),(21.23291, 0.075, 18.25838),(21.4299, 0.075, 18.21822)]

IndexedFaceSet357.coord = Coordinate358

Shape354.geometry = IndexedFaceSet357

Scene12.children.append(Shape354)
Shape359 = x3d.Shape()
Appearance360 = x3d.Appearance()
Material361 = x3d.Material()
Material361.ambientIntensity = 0
Material361.diffuseColor = [0.5,0.5,0.5]
Material361.shininess = 0

Appearance360.material = Material361

Shape359.appearance = Appearance360
IndexedFaceSet362 = x3d.IndexedFaceSet()
IndexedFaceSet362.solid = False
IndexedFaceSet362.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet362.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate363 = x3d.Coordinate()
Coordinate363.point = [(19.65877, 0.075, 11.54236),(20.05275, 0.075, 11.46205),(19.79488, 0.075, 12.21014),(20.18887, 0.075, 12.12983),(19.931, 0.075, 12.87792),(20.32499, 0.075, 12.79761)]

IndexedFaceSet362.coord = Coordinate363

Shape359.geometry = IndexedFaceSet362

Scene12.children.append(Shape359)
Shape364 = x3d.Shape()
Appearance365 = x3d.Appearance()
Material366 = x3d.Material()
Material366.ambientIntensity = 0
Material366.diffuseColor = [0.5,0.5,0.5]
Material366.shininess = 0

Appearance365.material = Material366

Shape364.appearance = Appearance365
IndexedFaceSet367 = x3d.IndexedFaceSet()
IndexedFaceSet367.solid = False
IndexedFaceSet367.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet367.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate368 = x3d.Coordinate()
Coordinate368.point = [(19.65477, 0.075, 11.52277),(19.52065, 0.075, 10.86479),(20.05856, 0.075, 11.44046),(19.92444, 0.075, 10.78248),(20.46234, 0.075, 11.35815),(20.32822, 0.075, 10.70017)]

IndexedFaceSet367.coord = Coordinate368

Shape364.geometry = IndexedFaceSet367

Scene12.children.append(Shape364)
Shape369 = x3d.Shape()
Appearance370 = x3d.Appearance()
Material371 = x3d.Material()
Material371.ambientIntensity = 0
Material371.diffuseColor = [0.5,0.5,0.5]
Material371.shininess = 0

Appearance370.material = Material371

Shape369.appearance = Appearance370
IndexedFaceSet372 = x3d.IndexedFaceSet()
IndexedFaceSet372.solid = False
IndexedFaceSet372.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet372.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate373 = x3d.Coordinate()
Coordinate373.point = [(20.19011, 0.075, 10.0226),(20.32423, 0.075, 10.68058),(19.38254, 0.075, 10.18721),(19.51666, 0.075, 10.84519)]

IndexedFaceSet372.coord = Coordinate373

Shape369.geometry = IndexedFaceSet372

Scene12.children.append(Shape369)
Shape374 = x3d.Shape()
Appearance375 = x3d.Appearance()
Material376 = x3d.Material()
Material376.ambientIntensity = 0
Material376.diffuseColor = [0.5,0.5,0.5]
Material376.shininess = 0

Appearance375.material = Material376

Shape374.appearance = Appearance375
IndexedFaceSet377 = x3d.IndexedFaceSet()
IndexedFaceSet377.solid = False
IndexedFaceSet377.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet377.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate378 = x3d.Coordinate()
Coordinate378.point = [(19.5199, 0.075, 8.747754),(19.91388, 0.075, 8.667445),(19.65601, 0.075, 9.415531),(20.05, 0.075, 9.335223),(19.79213, 0.075, 10.08331),(20.18612, 0.075, 10.003)]

IndexedFaceSet377.coord = Coordinate378

Shape374.geometry = IndexedFaceSet377

Scene12.children.append(Shape374)
Shape379 = x3d.Shape()
Appearance380 = x3d.Appearance()
Material381 = x3d.Material()
Material381.ambientIntensity = 0
Material381.diffuseColor = [0.5,0.5,0.5]
Material381.shininess = 0

Appearance380.material = Material381

Shape379.appearance = Appearance380
IndexedFaceSet382 = x3d.IndexedFaceSet()
IndexedFaceSet382.solid = False
IndexedFaceSet382.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet382.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate383 = x3d.Coordinate()
Coordinate383.point = [(19.77253, 0.075, 10.0873),(19.57554, 0.075, 10.12746),(19.37854, 0.075, 10.16761),(19.63642, 0.075, 9.419526),(19.43942, 0.075, 9.459681),(19.24243, 0.075, 9.499835),(19.5003, 0.075, 8.751748),(19.3033, 0.075, 8.791903),(19.10631, 0.075, 8.832057)]

IndexedFaceSet382.coord = Coordinate383

Shape379.geometry = IndexedFaceSet382

Scene12.children.append(Shape379)
Shape384 = x3d.Shape()
Appearance385 = x3d.Appearance()
Material386 = x3d.Material()
Material386.ambientIntensity = 0
Material386.diffuseColor = [0.5,0.5,0.5]
Material386.shininess = 0

Appearance385.material = Material386

Shape384.appearance = Appearance385
IndexedFaceSet387 = x3d.IndexedFaceSet()
IndexedFaceSet387.solid = False
IndexedFaceSet387.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet387.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate388 = x3d.Coordinate()
Coordinate388.point = [(19.77577, 0.075, 7.989869),(19.84283, 0.075, 8.318858),(19.90989, 0.075, 8.647848),(18.9682, 0.075, 8.15448),(19.03526, 0.075, 8.48347),(19.10232, 0.075, 8.81246)]

IndexedFaceSet387.coord = Coordinate388

Shape384.geometry = IndexedFaceSet387

Scene12.children.append(Shape384)
Shape389 = x3d.Shape()
Appearance390 = x3d.Appearance()
Material391 = x3d.Material()
Material391.ambientIntensity = 0
Material391.diffuseColor = [0.5,0.5,0.5]
Material391.shininess = 0

Appearance390.material = Material391

Shape389.appearance = Appearance390
IndexedFaceSet392 = x3d.IndexedFaceSet()
IndexedFaceSet392.solid = False
IndexedFaceSet392.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet392.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate393 = x3d.Coordinate()
Coordinate393.point = [(18.9642, 0.075, 8.134883),(18.83008, 0.075, 7.476904),(19.36799, 0.075, 8.052578),(19.23387, 0.075, 7.394598),(19.77177, 0.075, 7.970272),(19.63765, 0.075, 7.312293)]

IndexedFaceSet392.coord = Coordinate393

Shape389.geometry = IndexedFaceSet392

Scene12.children.append(Shape389)
Shape394 = x3d.Shape()
Appearance395 = x3d.Appearance()
Material396 = x3d.Material()
Material396.ambientIntensity = 0
Material396.diffuseColor = [0.5,0.5,0.5]
Material396.shininess = 0

Appearance395.material = Material396

Shape394.appearance = Appearance395
IndexedFaceSet397 = x3d.IndexedFaceSet()
IndexedFaceSet397.solid = False
IndexedFaceSet397.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet397.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate398 = x3d.Coordinate()
Coordinate398.point = [(18.96744, 0.075, 6.037448),(19.16443, 0.075, 5.997294),(19.36143, 0.075, 5.957139),(19.10356, 0.075, 6.705226),(19.30055, 0.075, 6.665071),(19.49754, 0.075, 6.624918),(19.23967, 0.075, 7.373004),(19.43667, 0.075, 7.33285),(19.63366, 0.075, 7.292696)]

IndexedFaceSet397.coord = Coordinate398

Shape394.geometry = IndexedFaceSet397

Scene12.children.append(Shape394)
Shape399 = x3d.Shape()
Appearance400 = x3d.Appearance()
Material401 = x3d.Material()
Material401.ambientIntensity = 0
Material401.diffuseColor = [0.5,0.5,0.5]
Material401.shininess = 0

Appearance400.material = Material401

Shape399.appearance = Appearance400
IndexedFaceSet402 = x3d.IndexedFaceSet()
IndexedFaceSet402.solid = False
IndexedFaceSet402.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet402.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate403 = x3d.Coordinate()
Coordinate403.point = [(18.55386, 0.075, 6.121751),(18.94784, 0.075, 6.041442),(18.68997, 0.075, 6.789529),(19.08396, 0.075, 6.70922),(18.82609, 0.075, 7.457307),(19.22008, 0.075, 7.376998)]

IndexedFaceSet402.coord = Coordinate403

Shape399.geometry = IndexedFaceSet402

Scene12.children.append(Shape399)
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
Material406 = x3d.Material()
Material406.ambientIntensity = 0
Material406.diffuseColor = [0.5,0.5,0.5]
Material406.shininess = 0

Appearance405.material = Material406

Shape404.appearance = Appearance405
IndexedFaceSet407 = x3d.IndexedFaceSet()
IndexedFaceSet407.solid = False
IndexedFaceSet407.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet407.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate408 = x3d.Coordinate()
Coordinate408.point = [(18.54986, 0.075, 6.102154),(18.41574, 0.075, 5.444175),(18.95365, 0.075, 6.019848),(18.81953, 0.075, 5.361869),(19.35743, 0.075, 5.937542),(19.22331, 0.075, 5.279563)]

IndexedFaceSet407.coord = Coordinate408

Shape404.geometry = IndexedFaceSet407

Scene12.children.append(Shape404)
Shape409 = x3d.Shape()
Appearance410 = x3d.Appearance()
Material411 = x3d.Material()
Material411.ambientIntensity = 0
Material411.diffuseColor = [0.5,0.5,0.5]
Material411.shininess = 0

Appearance410.material = Material411

Shape409.appearance = Appearance410
IndexedFaceSet412 = x3d.IndexedFaceSet()
IndexedFaceSet412.solid = False
IndexedFaceSet412.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet412.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate413 = x3d.Coordinate()
Coordinate413.point = [(22.83615, 0.075, 29.24365),(23.23013, 0.075, 29.16334),(23.10838, 0.075, 30.57921),(23.50237, 0.075, 30.4989)]

IndexedFaceSet412.coord = Coordinate413

Shape409.geometry = IndexedFaceSet412

Scene12.children.append(Shape409)
Shape414 = x3d.Shape()
Appearance415 = x3d.Appearance()
Material416 = x3d.Material()
Material416.ambientIntensity = 0
Material416.diffuseColor = [0.5,0.5,0.5]
Material416.shininess = 0

Appearance415.material = Material416

Shape414.appearance = Appearance415
IndexedFaceSet417 = x3d.IndexedFaceSet()
IndexedFaceSet417.solid = False
IndexedFaceSet417.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet417.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate418 = x3d.Coordinate()
Coordinate418.point = [(23.08878, 0.075, 30.5832),(22.89179, 0.075, 30.62336),(22.6948, 0.075, 30.66351),(22.95267, 0.075, 29.91542),(22.75567, 0.075, 29.95558),(22.55868, 0.075, 29.99573),(22.81655, 0.075, 29.24765),(22.61956, 0.075, 29.2878),(22.42256, 0.075, 29.32796)]

IndexedFaceSet417.coord = Coordinate418

Shape414.geometry = IndexedFaceSet417

Scene12.children.append(Shape414)
Shape419 = x3d.Shape()
Appearance420 = x3d.Appearance()
Material421 = x3d.Material()
Material421.ambientIntensity = 0
Material421.diffuseColor = [0.5,0.5,0.5]
Material421.shininess = 0

Appearance420.material = Material421

Shape419.appearance = Appearance420
IndexedFaceSet422 = x3d.IndexedFaceSet()
IndexedFaceSet422.solid = False
IndexedFaceSet422.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet422.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate423 = x3d.Coordinate()
Coordinate423.point = [(23.09202, 0.075, 28.48577),(23.22614, 0.075, 29.14375),(22.28445, 0.075, 28.65038),(22.41857, 0.075, 29.30836)]

IndexedFaceSet422.coord = Coordinate423

Shape419.geometry = IndexedFaceSet422

Scene12.children.append(Shape419)
Shape424 = x3d.Shape()
Appearance425 = x3d.Appearance()
Material426 = x3d.Material()
Material426.ambientIntensity = 0
Material426.diffuseColor = [0.5,0.5,0.5]
Material426.shininess = 0

Appearance425.material = Material426

Shape424.appearance = Appearance425
IndexedFaceSet427 = x3d.IndexedFaceSet()
IndexedFaceSet427.solid = False
IndexedFaceSet427.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet427.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate428 = x3d.Coordinate()
Coordinate428.point = [(22.28045, 0.075, 28.63078),(22.14634, 0.075, 27.9728),(23.08803, 0.075, 28.46617),(22.95391, 0.075, 27.80819)]

IndexedFaceSet427.coord = Coordinate428

Shape424.geometry = IndexedFaceSet427

Scene12.children.append(Shape424)
Shape429 = x3d.Shape()
Appearance430 = x3d.Appearance()
Material431 = x3d.Material()
Material431.ambientIntensity = 0
Material431.diffuseColor = [0.5,0.5,0.5]
Material431.shininess = 0

Appearance430.material = Material431

Shape429.appearance = Appearance430
IndexedFaceSet432 = x3d.IndexedFaceSet()
IndexedFaceSet432.solid = False
IndexedFaceSet432.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet432.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate433 = x3d.Coordinate()
Coordinate433.point = [(22.94991, 0.075, 27.7886),(22.55593, 0.075, 27.8689),(22.67768, 0.075, 26.45304),(22.28369, 0.075, 26.53335)]

IndexedFaceSet432.coord = Coordinate433

Shape429.geometry = IndexedFaceSet432

Scene12.children.append(Shape429)
Shape434 = x3d.Shape()
Appearance435 = x3d.Appearance()
Material436 = x3d.Material()
Material436.ambientIntensity = 0
Material436.diffuseColor = [0.5,0.5,0.5]
Material436.shininess = 0

Appearance435.material = Material436

Shape434.appearance = Appearance435
IndexedFaceSet437 = x3d.IndexedFaceSet()
IndexedFaceSet437.solid = False
IndexedFaceSet437.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet437.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate438 = x3d.Coordinate()
Coordinate438.point = [(21.87011, 0.075, 26.61765),(22.0671, 0.075, 26.5775),(22.26409, 0.075, 26.53734),(22.00622, 0.075, 27.28543),(22.20322, 0.075, 27.24527),(22.40021, 0.075, 27.20512),(22.14234, 0.075, 27.95321),(22.33933, 0.075, 27.91305),(22.53633, 0.075, 27.8729)]

IndexedFaceSet437.coord = Coordinate438

Shape434.geometry = IndexedFaceSet437

Scene12.children.append(Shape434)
Shape439 = x3d.Shape()
Appearance440 = x3d.Appearance()
Material441 = x3d.Material()
Material441.ambientIntensity = 0
Material441.diffuseColor = [0.5,0.5,0.5]
Material441.shininess = 0

Appearance440.material = Material441

Shape439.appearance = Appearance440
IndexedFaceSet442 = x3d.IndexedFaceSet()
IndexedFaceSet442.solid = False
IndexedFaceSet442.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet442.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate443 = x3d.Coordinate()
Coordinate443.point = [(22.53956, 0.075, 25.77546),(22.67368, 0.075, 26.43344),(21.73199, 0.075, 25.94007),(21.86611, 0.075, 26.59805)]

IndexedFaceSet442.coord = Coordinate443

Shape439.geometry = IndexedFaceSet442

Scene12.children.append(Shape439)
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance()
Material446 = x3d.Material()
Material446.ambientIntensity = 0
Material446.diffuseColor = [0.5,0.5,0.5]
Material446.shininess = 0

Appearance445.material = Material446

Shape444.appearance = Appearance445
IndexedFaceSet447 = x3d.IndexedFaceSet()
IndexedFaceSet447.solid = False
IndexedFaceSet447.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet447.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate448 = x3d.Coordinate()
Coordinate448.point = [(21.728, 0.075, 25.92048),(21.66094, 0.075, 25.59149),(21.59388, 0.075, 25.2625),(22.53557, 0.075, 25.75587),(22.46851, 0.075, 25.42688),(22.40145, 0.075, 25.09789)]

IndexedFaceSet447.coord = Coordinate448

Shape444.geometry = IndexedFaceSet447

Scene12.children.append(Shape444)
Shape449 = x3d.Shape()
Appearance450 = x3d.Appearance()
Material451 = x3d.Material()
Material451.ambientIntensity = 0
Material451.diffuseColor = [0.5,0.5,0.5]
Material451.shininess = 0

Appearance450.material = Material451

Shape449.appearance = Appearance450
IndexedFaceSet452 = x3d.IndexedFaceSet()
IndexedFaceSet452.solid = False
IndexedFaceSet452.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet452.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate453 = x3d.Coordinate()
Coordinate453.point = [(22.39746, 0.075, 25.07829),(22.20046, 0.075, 25.11844),(22.00347, 0.075, 25.1586),(22.26134, 0.075, 24.41051),(22.06435, 0.075, 24.45066),(21.86735, 0.075, 24.49082),(22.12522, 0.075, 23.74273),(21.92823, 0.075, 23.78289),(21.73124, 0.075, 23.82304)]

IndexedFaceSet452.coord = Coordinate453

Shape449.geometry = IndexedFaceSet452

Scene12.children.append(Shape449)
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance()
Material456 = x3d.Material()
Material456.ambientIntensity = 0
Material456.diffuseColor = [0.5,0.5,0.5]
Material456.shininess = 0

Appearance455.material = Material456

Shape454.appearance = Appearance455
IndexedFaceSet457 = x3d.IndexedFaceSet()
IndexedFaceSet457.solid = False
IndexedFaceSet457.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet457.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate458 = x3d.Coordinate()
Coordinate458.point = [(21.31765, 0.075, 23.90734),(21.71164, 0.075, 23.82704),(21.58988, 0.075, 25.2429),(21.98387, 0.075, 25.16259)]

IndexedFaceSet457.coord = Coordinate458

Shape454.geometry = IndexedFaceSet457

Scene12.children.append(Shape454)
Shape459 = x3d.Shape()
Appearance460 = x3d.Appearance()
Material461 = x3d.Material()
Material461.ambientIntensity = 0
Material461.diffuseColor = [0.5,0.5,0.5]
Material461.shininess = 0

Appearance460.material = Material461

Shape459.appearance = Appearance460
IndexedFaceSet462 = x3d.IndexedFaceSet()
IndexedFaceSet462.solid = False
IndexedFaceSet462.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet462.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate463 = x3d.Coordinate()
Coordinate463.point = [(21.31366, 0.075, 23.88775),(21.17954, 0.075, 23.22977),(22.12123, 0.075, 23.72313),(21.98711, 0.075, 23.06516)]

IndexedFaceSet462.coord = Coordinate463

Shape459.geometry = IndexedFaceSet462

Scene12.children.append(Shape459)
Shape464 = x3d.Shape()
Appearance465 = x3d.Appearance()
Material466 = x3d.Material()
Material466.ambientIntensity = 0
Material466.diffuseColor = [0.5,0.5,0.5]
Material466.shininess = 0

Appearance465.material = Material466

Shape464.appearance = Appearance465
IndexedFaceSet467 = x3d.IndexedFaceSet()
IndexedFaceSet467.solid = False
IndexedFaceSet467.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet467.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate468 = x3d.Coordinate()
Coordinate468.point = [(21.17554, 0.075, 23.21017),(21.04142, 0.075, 22.55219),(21.98311, 0.075, 23.04556),(21.84899, 0.075, 22.38758)]

IndexedFaceSet467.coord = Coordinate468

Shape464.geometry = IndexedFaceSet467

Scene12.children.append(Shape464)
Shape469 = x3d.Shape()
Appearance470 = x3d.Appearance()
Material471 = x3d.Material()
Material471.ambientIntensity = 0
Material471.diffuseColor = [0.5,0.5,0.5]
Material471.shininess = 0

Appearance470.material = Material471

Shape469.appearance = Appearance470
IndexedFaceSet472 = x3d.IndexedFaceSet()
IndexedFaceSet472.solid = False
IndexedFaceSet472.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet472.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate473 = x3d.Coordinate()
Coordinate473.point = [(21.845, 0.075, 22.36798),(21.45101, 0.075, 22.44829),(21.57277, 0.075, 21.03243),(21.17878, 0.075, 21.11274)]

IndexedFaceSet472.coord = Coordinate473

Shape469.geometry = IndexedFaceSet472

Scene12.children.append(Shape469)
Shape474 = x3d.Shape()
Appearance475 = x3d.Appearance()
Material476 = x3d.Material()
Material476.ambientIntensity = 0
Material476.diffuseColor = [0.5,0.5,0.5]
Material476.shininess = 0

Appearance475.material = Material476

Shape474.appearance = Appearance475
IndexedFaceSet477 = x3d.IndexedFaceSet()
IndexedFaceSet477.solid = False
IndexedFaceSet477.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet477.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate478 = x3d.Coordinate()
Coordinate478.point = [(20.7652, 0.075, 21.19704),(21.15918, 0.075, 21.11673),(21.03743, 0.075, 22.53259),(21.43142, 0.075, 22.45229)]

IndexedFaceSet477.coord = Coordinate478

Shape474.geometry = IndexedFaceSet477

Scene12.children.append(Shape474)
Shape479 = x3d.Shape()
Appearance480 = x3d.Appearance()
Material481 = x3d.Material()
Material481.ambientIntensity = 0
Material481.diffuseColor = [0.5,0.5,0.5]
Material481.shininess = 0

Appearance480.material = Material481

Shape479.appearance = Appearance480
IndexedFaceSet482 = x3d.IndexedFaceSet()
IndexedFaceSet482.solid = False
IndexedFaceSet482.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet482.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate483 = x3d.Coordinate()
Coordinate483.point = [(20.7612, 0.075, 21.17744),(20.62708, 0.075, 20.51946),(21.16499, 0.075, 21.09514),(21.03087, 0.075, 20.43716),(21.56877, 0.075, 21.01283),(21.43465, 0.075, 20.35485)]

IndexedFaceSet482.coord = Coordinate483

Shape479.geometry = IndexedFaceSet482

Scene12.children.append(Shape479)
Shape484 = x3d.Shape()
Appearance485 = x3d.Appearance()
Material486 = x3d.Material()
Material486.ambientIntensity = 0
Material486.diffuseColor = [0.5,0.5,0.5]
Material486.shininess = 0

Appearance485.material = Material486

Shape484.appearance = Appearance485
IndexedFaceSet487 = x3d.IndexedFaceSet()
IndexedFaceSet487.solid = False
IndexedFaceSet487.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet487.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate488 = x3d.Coordinate()
Coordinate488.point = [(20.62309, 0.075, 20.49986),(20.48897, 0.075, 19.84189),(21.02687, 0.075, 20.41756),(20.89275, 0.075, 19.75958),(21.43066, 0.075, 20.33525),(21.29654, 0.075, 19.67727)]

IndexedFaceSet487.coord = Coordinate488

Shape484.geometry = IndexedFaceSet487

Scene12.children.append(Shape484)
Shape489 = x3d.Shape()
Appearance490 = x3d.Appearance()
Material491 = x3d.Material()
Material491.ambientIntensity = 0
Material491.diffuseColor = [0.5,0.5,0.5]
Material491.shininess = 0

Appearance490.material = Material491

Shape489.appearance = Appearance490
IndexedFaceSet492 = x3d.IndexedFaceSet()
IndexedFaceSet492.solid = False
IndexedFaceSet492.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet492.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate493 = x3d.Coordinate()
Coordinate493.point = [(20.62632, 0.075, 18.40243),(20.82332, 0.075, 18.36228),(21.02031, 0.075, 18.32212),(20.76244, 0.075, 19.07021),(20.95943, 0.075, 19.03005),(21.15643, 0.075, 18.9899),(20.89856, 0.075, 19.73799),(21.09555, 0.075, 19.69783),(21.29254, 0.075, 19.65768)]

IndexedFaceSet492.coord = Coordinate493

Shape489.geometry = IndexedFaceSet492

Scene12.children.append(Shape489)
Shape494 = x3d.Shape()
Appearance495 = x3d.Appearance()
Material496 = x3d.Material()
Material496.ambientIntensity = 0
Material496.diffuseColor = [0.5,0.5,0.5]
Material496.shininess = 0

Appearance495.material = Material496

Shape494.appearance = Appearance495
IndexedFaceSet497 = x3d.IndexedFaceSet()
IndexedFaceSet497.solid = False
IndexedFaceSet497.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet497.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate498 = x3d.Coordinate()
Coordinate498.point = [(20.21274, 0.075, 18.48673),(20.40973, 0.075, 18.44658),(20.60673, 0.075, 18.40642),(20.34886, 0.075, 19.15451),(20.54585, 0.075, 19.11436),(20.74284, 0.075, 19.0742),(20.48497, 0.075, 19.82229),(20.68197, 0.075, 19.78214),(20.87896, 0.075, 19.74198)]

IndexedFaceSet497.coord = Coordinate498

Shape494.geometry = IndexedFaceSet497

Scene12.children.append(Shape494)
Shape499 = x3d.Shape()
Appearance500 = x3d.Appearance()
Material501 = x3d.Material()
Material501.ambientIntensity = 0
Material501.diffuseColor = [0.5,0.5,0.5]
Material501.shininess = 0

Appearance500.material = Material501

Shape499.appearance = Appearance500
IndexedFaceSet502 = x3d.IndexedFaceSet()
IndexedFaceSet502.solid = False
IndexedFaceSet502.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet502.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate503 = x3d.Coordinate()
Coordinate503.point = [(20.20874, 0.075, 18.46714),(20.07463, 0.075, 17.80916),(20.61253, 0.075, 18.38483),(20.47841, 0.075, 17.72685),(21.01632, 0.075, 18.30252),(20.8822, 0.075, 17.64454)]

IndexedFaceSet502.coord = Coordinate503

Shape499.geometry = IndexedFaceSet502

Scene12.children.append(Shape499)
Shape504 = x3d.Shape()
Appearance505 = x3d.Appearance()
Material506 = x3d.Material()
Material506.ambientIntensity = 0
Material506.diffuseColor = [0.5,0.5,0.5]
Material506.shininess = 0

Appearance505.material = Material506

Shape504.appearance = Appearance505
IndexedFaceSet507 = x3d.IndexedFaceSet()
IndexedFaceSet507.solid = False
IndexedFaceSet507.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet507.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate508 = x3d.Coordinate()
Coordinate508.point = [(20.74408, 0.075, 16.96697),(20.8782, 0.075, 17.62495),(20.3403, 0.075, 17.04927),(20.47442, 0.075, 17.70725),(19.93651, 0.075, 17.13158),(20.07063, 0.075, 17.78956)]

IndexedFaceSet507.coord = Coordinate508

Shape504.geometry = IndexedFaceSet507

Scene12.children.append(Shape504)
Shape509 = x3d.Shape()
Appearance510 = x3d.Appearance()
Material511 = x3d.Material()
Material511.ambientIntensity = 0
Material511.diffuseColor = [0.5,0.5,0.5]
Material511.shininess = 0

Appearance510.material = Material511

Shape509.appearance = Appearance510
IndexedFaceSet512 = x3d.IndexedFaceSet()
IndexedFaceSet512.solid = False
IndexedFaceSet512.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet512.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate513 = x3d.Coordinate()
Coordinate513.point = [(20.74009, 0.075, 16.94737),(20.3461, 0.075, 17.02768),(20.60397, 0.075, 16.27959),(20.20998, 0.075, 16.3599),(20.46785, 0.075, 15.61182),(20.07387, 0.075, 15.69212)]

IndexedFaceSet512.coord = Coordinate513

Shape509.geometry = IndexedFaceSet512

Scene12.children.append(Shape509)
Shape514 = x3d.Shape()
Appearance515 = x3d.Appearance()
Material516 = x3d.Material()
Material516.ambientIntensity = 0
Material516.diffuseColor = [0.5,0.5,0.5]
Material516.shininess = 0

Appearance515.material = Material516

Shape514.appearance = Appearance515
IndexedFaceSet517 = x3d.IndexedFaceSet()
IndexedFaceSet517.solid = False
IndexedFaceSet517.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet517.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate518 = x3d.Coordinate()
Coordinate518.point = [(19.66028, 0.075, 15.77643),(19.85728, 0.075, 15.73627),(20.05427, 0.075, 15.69612),(19.7964, 0.075, 16.4442),(19.99339, 0.075, 16.40405),(20.19039, 0.075, 16.3639),(19.93252, 0.075, 17.11198),(20.12951, 0.075, 17.07183),(20.3265, 0.075, 17.03168)]

IndexedFaceSet517.coord = Coordinate518

Shape514.geometry = IndexedFaceSet517

Scene12.children.append(Shape514)
Shape519 = x3d.Shape()
Appearance520 = x3d.Appearance()
Material521 = x3d.Material()
Material521.ambientIntensity = 0
Material521.diffuseColor = [0.5,0.5,0.5]
Material521.shininess = 0

Appearance520.material = Material521

Shape519.appearance = Appearance520
IndexedFaceSet522 = x3d.IndexedFaceSet()
IndexedFaceSet522.solid = False
IndexedFaceSet522.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet522.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate523 = x3d.Coordinate()
Coordinate523.point = [(19.65629, 0.075, 15.75683),(19.58923, 0.075, 15.42784),(19.52217, 0.075, 15.09885),(20.06007, 0.075, 15.67452),(19.99302, 0.075, 15.34553),(19.92595, 0.075, 15.01655),(20.46386, 0.075, 15.59222),(20.3968, 0.075, 15.26323),(20.32974, 0.075, 14.93424)]

IndexedFaceSet522.coord = Coordinate523

Shape519.geometry = IndexedFaceSet522

Scene12.children.append(Shape519)
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Material526 = x3d.Material()
Material526.ambientIntensity = 0
Material526.diffuseColor = [0.5,0.5,0.5]
Material526.shininess = 0

Appearance525.material = Material526

Shape524.appearance = Appearance525
IndexedFaceSet527 = x3d.IndexedFaceSet()
IndexedFaceSet527.solid = False
IndexedFaceSet527.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet527.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate528 = x3d.Coordinate()
Coordinate528.point = [(20.19163, 0.075, 14.25666),(20.32575, 0.075, 14.91464),(19.38406, 0.075, 14.42127),(19.51818, 0.075, 15.07925)]

IndexedFaceSet527.coord = Coordinate528

Shape524.geometry = IndexedFaceSet527

Scene12.children.append(Shape524)
Shape529 = x3d.Shape()
Appearance530 = x3d.Appearance()
Material531 = x3d.Material()
Material531.ambientIntensity = 0
Material531.diffuseColor = [0.5,0.5,0.5]
Material531.shininess = 0

Appearance530.material = Material531

Shape529.appearance = Appearance530
IndexedFaceSet532 = x3d.IndexedFaceSet()
IndexedFaceSet532.solid = False
IndexedFaceSet532.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet532.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate533 = x3d.Coordinate()
Coordinate533.point = [(19.52141, 0.075, 12.98182),(19.9154, 0.075, 12.90151),(19.65753, 0.075, 13.6496),(20.05152, 0.075, 13.56929),(19.79364, 0.075, 14.31737),(20.18763, 0.075, 14.23707)]

IndexedFaceSet532.coord = Coordinate533

Shape529.geometry = IndexedFaceSet532

Scene12.children.append(Shape529)
Shape534 = x3d.Shape()
Appearance535 = x3d.Appearance()
Material536 = x3d.Material()
Material536.ambientIntensity = 0
Material536.diffuseColor = [0.5,0.5,0.5]
Material536.shininess = 0

Appearance535.material = Material536

Shape534.appearance = Appearance535
IndexedFaceSet537 = x3d.IndexedFaceSet()
IndexedFaceSet537.solid = False
IndexedFaceSet537.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet537.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate538 = x3d.Coordinate()
Coordinate538.point = [(19.10783, 0.075, 13.06612),(19.50181, 0.075, 12.98581),(19.38006, 0.075, 14.40168),(19.77405, 0.075, 14.32137)]

IndexedFaceSet537.coord = Coordinate538

Shape534.geometry = IndexedFaceSet537

Scene12.children.append(Shape534)
Shape539 = x3d.Shape()
Appearance540 = x3d.Appearance()
Material541 = x3d.Material()
Material541.ambientIntensity = 0
Material541.diffuseColor = [0.5,0.5,0.5]
Material541.shininess = 0

Appearance540.material = Material541

Shape539.appearance = Appearance540
IndexedFaceSet542 = x3d.IndexedFaceSet()
IndexedFaceSet542.solid = False
IndexedFaceSet542.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet542.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate543 = x3d.Coordinate()
Coordinate543.point = [(19.10383, 0.075, 13.04652),(18.96971, 0.075, 12.38855),(19.50762, 0.075, 12.96422),(19.3735, 0.075, 12.30624),(19.9114, 0.075, 12.88191),(19.77728, 0.075, 12.22393)]

IndexedFaceSet542.coord = Coordinate543

Shape539.geometry = IndexedFaceSet542

Scene12.children.append(Shape539)
Shape544 = x3d.Shape()
Appearance545 = x3d.Appearance()
Material546 = x3d.Material()
Material546.ambientIntensity = 0
Material546.diffuseColor = [0.5,0.5,0.5]
Material546.shininess = 0

Appearance545.material = Material546

Shape544.appearance = Appearance545
IndexedFaceSet547 = x3d.IndexedFaceSet()
IndexedFaceSet547.solid = False
IndexedFaceSet547.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet547.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate548 = x3d.Coordinate()
Coordinate548.point = [(18.96572, 0.075, 12.36895),(18.8316, 0.075, 11.71097),(19.3695, 0.075, 12.28664),(19.23538, 0.075, 11.62866),(19.77329, 0.075, 12.20434),(19.63917, 0.075, 11.54636)]

IndexedFaceSet547.coord = Coordinate548

Shape544.geometry = IndexedFaceSet547

Scene12.children.append(Shape544)
Shape549 = x3d.Shape()
Appearance550 = x3d.Appearance()
Material551 = x3d.Material()
Material551.ambientIntensity = 0
Material551.diffuseColor = [0.5,0.5,0.5]
Material551.shininess = 0

Appearance550.material = Material551

Shape549.appearance = Appearance550
IndexedFaceSet552 = x3d.IndexedFaceSet()
IndexedFaceSet552.solid = False
IndexedFaceSet552.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet552.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate553 = x3d.Coordinate()
Coordinate553.point = [(18.96896, 0.075, 10.27151),(19.36294, 0.075, 10.1912),(19.10507, 0.075, 10.93929),(19.49906, 0.075, 10.85898),(19.24119, 0.075, 11.60707),(19.63518, 0.075, 11.52676)]

IndexedFaceSet552.coord = Coordinate553

Shape549.geometry = IndexedFaceSet552

Scene12.children.append(Shape549)
Shape554 = x3d.Shape()
Appearance555 = x3d.Appearance()
Material556 = x3d.Material()
Material556.ambientIntensity = 0
Material556.diffuseColor = [0.5,0.5,0.5]
Material556.shininess = 0

Appearance555.material = Material556

Shape554.appearance = Appearance555
IndexedFaceSet557 = x3d.IndexedFaceSet()
IndexedFaceSet557.solid = False
IndexedFaceSet557.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet557.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate558 = x3d.Coordinate()
Coordinate558.point = [(18.55537, 0.075, 10.35582),(18.75237, 0.075, 10.31566),(18.94936, 0.075, 10.27551),(18.69149, 0.075, 11.02359),(18.88848, 0.075, 10.98344),(19.08548, 0.075, 10.94328),(18.8276, 0.075, 11.69137),(19.0246, 0.075, 11.65122),(19.22159, 0.075, 11.61106)]

IndexedFaceSet557.coord = Coordinate558

Shape554.geometry = IndexedFaceSet557

Scene12.children.append(Shape554)
Shape559 = x3d.Shape()
Appearance560 = x3d.Appearance()
Material561 = x3d.Material()
Material561.ambientIntensity = 0
Material561.diffuseColor = [0.5,0.5,0.5]
Material561.shininess = 0

Appearance560.material = Material561

Shape559.appearance = Appearance560
IndexedFaceSet562 = x3d.IndexedFaceSet()
IndexedFaceSet562.solid = False
IndexedFaceSet562.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet562.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate563 = x3d.Coordinate()
Coordinate563.point = [(19.22483, 0.075, 9.513628),(19.29189, 0.075, 9.842617),(19.35895, 0.075, 10.17161),(18.82104, 0.075, 9.595933),(18.8881, 0.075, 9.924923),(18.95516, 0.075, 10.25391),(18.41726, 0.075, 9.678239),(18.48432, 0.075, 10.00723),(18.55138, 0.075, 10.33622)]

IndexedFaceSet562.coord = Coordinate563

Shape559.geometry = IndexedFaceSet562

Scene12.children.append(Shape559)
Shape564 = x3d.Shape()
Appearance565 = x3d.Appearance()
Material566 = x3d.Material()
Material566.ambientIntensity = 0
Material566.diffuseColor = [0.5,0.5,0.5]
Material566.shininess = 0

Appearance565.material = Material566

Shape564.appearance = Appearance565
IndexedFaceSet567 = x3d.IndexedFaceSet()
IndexedFaceSet567.solid = False
IndexedFaceSet567.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet567.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate568 = x3d.Coordinate()
Coordinate568.point = [(18.41326, 0.075, 9.658642),(18.27914, 0.075, 9.000663),(19.22083, 0.075, 9.494031),(19.08671, 0.075, 8.836051)]

IndexedFaceSet567.coord = Coordinate568

Shape564.geometry = IndexedFaceSet567

Scene12.children.append(Shape564)
Shape569 = x3d.Shape()
Appearance570 = x3d.Appearance()
Material571 = x3d.Material()
Material571.ambientIntensity = 0
Material571.diffuseColor = [0.5,0.5,0.5]
Material571.shininess = 0

Appearance570.material = Material571

Shape569.appearance = Appearance570
IndexedFaceSet572 = x3d.IndexedFaceSet()
IndexedFaceSet572.solid = False
IndexedFaceSet572.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet572.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate573 = x3d.Coordinate()
Coordinate573.point = [(19.08272, 0.075, 8.816454),(18.68873, 0.075, 8.896763),(18.9466, 0.075, 8.148676),(18.55262, 0.075, 8.228985),(18.81049, 0.075, 7.480898),(18.4165, 0.075, 7.561207)]

IndexedFaceSet572.coord = Coordinate573

Shape569.geometry = IndexedFaceSet572

Scene12.children.append(Shape569)
Shape574 = x3d.Shape()
Appearance575 = x3d.Appearance()
Material576 = x3d.Material()
Material576.ambientIntensity = 0
Material576.diffuseColor = [0.5,0.5,0.5]
Material576.shininess = 0

Appearance575.material = Material576

Shape574.appearance = Appearance575
IndexedFaceSet577 = x3d.IndexedFaceSet()
IndexedFaceSet577.solid = False
IndexedFaceSet577.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet577.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate578 = x3d.Coordinate()
Coordinate578.point = [(18.00292, 0.075, 7.64551),(18.19991, 0.075, 7.605356),(18.3969, 0.075, 7.565201),(18.13903, 0.075, 8.313288),(18.33603, 0.075, 8.273133),(18.53302, 0.075, 8.23298),(18.27515, 0.075, 8.981066),(18.47214, 0.075, 8.940911),(18.66914, 0.075, 8.900757)]

IndexedFaceSet577.coord = Coordinate578

Shape574.geometry = IndexedFaceSet577

Scene12.children.append(Shape574)
Shape579 = x3d.Shape()
Appearance580 = x3d.Appearance()
Material581 = x3d.Material()
Material581.ambientIntensity = 0
Material581.diffuseColor = [0.5,0.5,0.5]
Material581.shininess = 0

Appearance580.material = Material581

Shape579.appearance = Appearance580
IndexedFaceSet582 = x3d.IndexedFaceSet()
IndexedFaceSet582.solid = False
IndexedFaceSet582.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet582.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate583 = x3d.Coordinate()
Coordinate583.point = [(17.99892, 0.075, 7.625913),(17.8648, 0.075, 6.967933),(18.40271, 0.075, 7.543607),(18.26859, 0.075, 6.885628),(18.80649, 0.075, 7.461301),(18.67237, 0.075, 6.803322)]

IndexedFaceSet582.coord = Coordinate583

Shape579.geometry = IndexedFaceSet582

Scene12.children.append(Shape579)
Shape584 = x3d.Shape()
Appearance585 = x3d.Appearance()
Material586 = x3d.Material()
Material586.ambientIntensity = 0
Material586.diffuseColor = [0.5,0.5,0.5]
Material586.shininess = 0

Appearance585.material = Material586

Shape584.appearance = Appearance585
IndexedFaceSet587 = x3d.IndexedFaceSet()
IndexedFaceSet587.solid = False
IndexedFaceSet587.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet587.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate588 = x3d.Coordinate()
Coordinate588.point = [(17.86081, 0.075, 6.948337),(17.72669, 0.075, 6.290357),(18.26459, 0.075, 6.866031),(18.13047, 0.075, 6.208051),(18.66838, 0.075, 6.783725),(18.53426, 0.075, 6.125745)]

IndexedFaceSet587.coord = Coordinate588

Shape584.geometry = IndexedFaceSet587

Scene12.children.append(Shape584)
Shape589 = x3d.Shape()
Appearance590 = x3d.Appearance()
Material591 = x3d.Material()
Material591.ambientIntensity = 0
Material591.diffuseColor = [0.5,0.5,0.5]
Material591.shininess = 0

Appearance590.material = Material591

Shape589.appearance = Appearance590
IndexedFaceSet592 = x3d.IndexedFaceSet()
IndexedFaceSet592.solid = False
IndexedFaceSet592.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet592.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate593 = x3d.Coordinate()
Coordinate593.point = [(17.86404, 0.075, 4.850901),(18.25803, 0.075, 4.770593),(18.13628, 0.075, 6.186457),(18.53026, 0.075, 6.106149)]

IndexedFaceSet592.coord = Coordinate593

Shape589.geometry = IndexedFaceSet592

Scene12.children.append(Shape589)
Shape594 = x3d.Shape()
Appearance595 = x3d.Appearance()
Material596 = x3d.Material()
Material596.ambientIntensity = 0
Material596.diffuseColor = [0.5,0.5,0.5]
Material596.shininess = 0

Appearance595.material = Material596

Shape594.appearance = Appearance595
IndexedFaceSet597 = x3d.IndexedFaceSet()
IndexedFaceSet597.solid = False
IndexedFaceSet597.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet597.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate598 = x3d.Coordinate()
Coordinate598.point = [(17.45046, 0.075, 4.935204),(17.84445, 0.075, 4.854896),(17.72269, 0.075, 6.27076),(18.11668, 0.075, 6.190452)]

IndexedFaceSet597.coord = Coordinate598

Shape594.geometry = IndexedFaceSet597

Scene12.children.append(Shape594)
Shape599 = x3d.Shape()
Appearance600 = x3d.Appearance()
Material601 = x3d.Material()
Material601.ambientIntensity = 0
Material601.diffuseColor = [0.5,0.5,0.5]
Material601.shininess = 0

Appearance600.material = Material601

Shape599.appearance = Appearance600
IndexedFaceSet602 = x3d.IndexedFaceSet()
IndexedFaceSet602.solid = False
IndexedFaceSet602.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet602.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate603 = x3d.Coordinate()
Coordinate603.point = [(17.44646, 0.075, 4.915607),(17.31235, 0.075, 4.257627),(17.85025, 0.075, 4.833302),(17.71613, 0.075, 4.175322),(18.25404, 0.075, 4.750996),(18.11992, 0.075, 4.093016)]

IndexedFaceSet602.coord = Coordinate603

Shape599.geometry = IndexedFaceSet602

Scene12.children.append(Shape599)
Shape604 = x3d.Shape()
Appearance605 = x3d.Appearance()
Material606 = x3d.Material()
Material606.ambientIntensity = 0
Material606.diffuseColor = [0.5,0.5,0.5]
Material606.shininess = 0

Appearance605.material = Material606

Shape604.appearance = Appearance605
IndexedFaceSet607 = x3d.IndexedFaceSet()
IndexedFaceSet607.solid = False
IndexedFaceSet607.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet607.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate608 = x3d.Coordinate()
Coordinate608.point = [(17.9818, 0.075, 3.41544),(18.11592, 0.075, 4.073419),(17.57802, 0.075, 3.497746),(17.71214, 0.075, 4.155725),(17.17423, 0.075, 3.580051),(17.30835, 0.075, 4.23803)]

IndexedFaceSet607.coord = Coordinate608

Shape604.geometry = IndexedFaceSet607

Scene12.children.append(Shape604)
Shape609 = x3d.Shape()
Appearance610 = x3d.Appearance()
Material611 = x3d.Material()
Material611.ambientIntensity = 0
Material611.diffuseColor = [0.5,0.5,0.5]
Material611.shininess = 0

Appearance610.material = Material611

Shape609.appearance = Appearance610
IndexedFaceSet612 = x3d.IndexedFaceSet()
IndexedFaceSet612.solid = False
IndexedFaceSet612.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet612.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate613 = x3d.Coordinate()
Coordinate613.point = [(22.40297, 0.075, 29.33195),(22.53709, 0.075, 29.98993),(21.5954, 0.075, 29.49656),(21.72952, 0.075, 30.15454)]

IndexedFaceSet612.coord = Coordinate613

Shape609.geometry = IndexedFaceSet612

Scene12.children.append(Shape609)
Shape614 = x3d.Shape()
Appearance615 = x3d.Appearance()
Material616 = x3d.Material()
Material616.ambientIntensity = 0
Material616.diffuseColor = [0.5,0.5,0.5]
Material616.shininess = 0

Appearance615.material = Material616

Shape614.appearance = Appearance615
IndexedFaceSet617 = x3d.IndexedFaceSet()
IndexedFaceSet617.solid = False
IndexedFaceSet617.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet617.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate618 = x3d.Coordinate()
Coordinate618.point = [(21.73275, 0.075, 28.05711),(22.12674, 0.075, 27.9768),(21.86887, 0.075, 28.72488),(22.26286, 0.075, 28.64458),(22.00498, 0.075, 29.39266),(22.39897, 0.075, 29.31235)]

IndexedFaceSet617.coord = Coordinate618

Shape614.geometry = IndexedFaceSet617

Scene12.children.append(Shape614)
Shape619 = x3d.Shape()
Appearance620 = x3d.Appearance()
Material621 = x3d.Material()
Material621.ambientIntensity = 0
Material621.diffuseColor = [0.5,0.5,0.5]
Material621.shininess = 0

Appearance620.material = Material621

Shape619.appearance = Appearance620
IndexedFaceSet622 = x3d.IndexedFaceSet()
IndexedFaceSet622.solid = False
IndexedFaceSet622.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet622.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate623 = x3d.Coordinate()
Coordinate623.point = [(21.98539, 0.075, 29.39666),(21.5914, 0.075, 29.47696),(21.84927, 0.075, 28.72888),(21.45528, 0.075, 28.80919),(21.71315, 0.075, 28.0611),(21.31917, 0.075, 28.14141)]

IndexedFaceSet622.coord = Coordinate623

Shape619.geometry = IndexedFaceSet622

Scene12.children.append(Shape619)
Shape624 = x3d.Shape()
Appearance625 = x3d.Appearance()
Material626 = x3d.Material()
Material626.ambientIntensity = 0
Material626.diffuseColor = [0.5,0.5,0.5]
Material626.shininess = 0

Appearance625.material = Material626

Shape624.appearance = Appearance625
IndexedFaceSet627 = x3d.IndexedFaceSet()
IndexedFaceSet627.solid = False
IndexedFaceSet627.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet627.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate628 = x3d.Coordinate()
Coordinate628.point = [(21.98862, 0.075, 27.29922),(22.12274, 0.075, 27.9572),(21.18105, 0.075, 27.46383),(21.31517, 0.075, 28.12181)]

IndexedFaceSet627.coord = Coordinate628

Shape624.geometry = IndexedFaceSet627

Scene12.children.append(Shape624)
Shape629 = x3d.Shape()
Appearance630 = x3d.Appearance()
Material631 = x3d.Material()
Material631.ambientIntensity = 0
Material631.diffuseColor = [0.5,0.5,0.5]
Material631.shininess = 0

Appearance630.material = Material631

Shape629.appearance = Appearance630
IndexedFaceSet632 = x3d.IndexedFaceSet()
IndexedFaceSet632.solid = False
IndexedFaceSet632.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet632.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate633 = x3d.Coordinate()
Coordinate633.point = [(21.17706, 0.075, 27.44423),(21.04294, 0.075, 26.78626),(21.58084, 0.075, 27.36193),(21.44672, 0.075, 26.70395),(21.98463, 0.075, 27.27962),(21.85051, 0.075, 26.62164)]

IndexedFaceSet632.coord = Coordinate633

Shape629.geometry = IndexedFaceSet632

Scene12.children.append(Shape629)
Shape634 = x3d.Shape()
Appearance635 = x3d.Appearance()
Material636 = x3d.Material()
Material636.ambientIntensity = 0
Material636.diffuseColor = [0.5,0.5,0.5]
Material636.shininess = 0

Appearance635.material = Material636

Shape634.appearance = Appearance635
IndexedFaceSet637 = x3d.IndexedFaceSet()
IndexedFaceSet637.solid = False
IndexedFaceSet637.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet637.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate638 = x3d.Coordinate()
Coordinate638.point = [(21.1803, 0.075, 25.3468),(21.57428, 0.075, 25.26649),(21.45253, 0.075, 26.68236),(21.84652, 0.075, 26.60205)]

IndexedFaceSet637.coord = Coordinate638

Shape634.geometry = IndexedFaceSet637

Scene12.children.append(Shape634)
Shape639 = x3d.Shape()
Appearance640 = x3d.Appearance()
Material641 = x3d.Material()
Material641.ambientIntensity = 0
Material641.diffuseColor = [0.5,0.5,0.5]
Material641.shininess = 0

Appearance640.material = Material641

Shape639.appearance = Appearance640
IndexedFaceSet642 = x3d.IndexedFaceSet()
IndexedFaceSet642.solid = False
IndexedFaceSet642.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet642.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate643 = x3d.Coordinate()
Coordinate643.point = [(21.43293, 0.075, 26.68635),(21.23594, 0.075, 26.72651),(21.03894, 0.075, 26.76666),(21.29682, 0.075, 26.01857),(21.09982, 0.075, 26.05873),(20.90283, 0.075, 26.09888),(21.1607, 0.075, 25.35079),(20.96371, 0.075, 25.39095),(20.76671, 0.075, 25.4311)]

IndexedFaceSet642.coord = Coordinate643

Shape639.geometry = IndexedFaceSet642

Scene12.children.append(Shape639)
Shape644 = x3d.Shape()
Appearance645 = x3d.Appearance()
Material646 = x3d.Material()
Material646.ambientIntensity = 0
Material646.diffuseColor = [0.5,0.5,0.5]
Material646.shininess = 0

Appearance645.material = Material646

Shape644.appearance = Appearance645
IndexedFaceSet647 = x3d.IndexedFaceSet()
IndexedFaceSet647.solid = False
IndexedFaceSet647.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet647.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate648 = x3d.Coordinate()
Coordinate648.point = [(21.43617, 0.075, 24.58891),(21.57029, 0.075, 25.24689),(20.6286, 0.075, 24.75353),(20.76272, 0.075, 25.41151)]

IndexedFaceSet647.coord = Coordinate648

Shape644.geometry = IndexedFaceSet647

Scene12.children.append(Shape644)
Shape649 = x3d.Shape()
Appearance650 = x3d.Appearance()
Material651 = x3d.Material()
Material651.ambientIntensity = 0
Material651.diffuseColor = [0.5,0.5,0.5]
Material651.shininess = 0

Appearance650.material = Material651

Shape649.appearance = Appearance650
IndexedFaceSet652 = x3d.IndexedFaceSet()
IndexedFaceSet652.solid = False
IndexedFaceSet652.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet652.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate653 = x3d.Coordinate()
Coordinate653.point = [(20.6246, 0.075, 24.73393),(20.49048, 0.075, 24.07595),(21.43217, 0.075, 24.56932),(21.29805, 0.075, 23.91134)]

IndexedFaceSet652.coord = Coordinate653

Shape649.geometry = IndexedFaceSet652

Scene12.children.append(Shape649)
Shape654 = x3d.Shape()
Appearance655 = x3d.Appearance()
Material656 = x3d.Material()
Material656.ambientIntensity = 0
Material656.diffuseColor = [0.5,0.5,0.5]
Material656.shininess = 0

Appearance655.material = Material656

Shape654.appearance = Appearance655
IndexedFaceSet657 = x3d.IndexedFaceSet()
IndexedFaceSet657.solid = False
IndexedFaceSet657.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet657.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate658 = x3d.Coordinate()
Coordinate658.point = [(20.62784, 0.075, 22.63649),(21.02183, 0.075, 22.55619),(20.76396, 0.075, 23.30427),(21.15794, 0.075, 23.22396),(20.90007, 0.075, 23.97205),(21.29406, 0.075, 23.89174)]

IndexedFaceSet657.coord = Coordinate658

Shape654.geometry = IndexedFaceSet657

Scene12.children.append(Shape654)
Shape659 = x3d.Shape()
Appearance660 = x3d.Appearance()
Material661 = x3d.Material()
Material661.ambientIntensity = 0
Material661.diffuseColor = [0.5,0.5,0.5]
Material661.shininess = 0

Appearance660.material = Material661

Shape659.appearance = Appearance660
IndexedFaceSet662 = x3d.IndexedFaceSet()
IndexedFaceSet662.solid = False
IndexedFaceSet662.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet662.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate663 = x3d.Coordinate()
Coordinate663.point = [(20.21426, 0.075, 22.7208),(20.41125, 0.075, 22.68064),(20.60824, 0.075, 22.64049),(20.35037, 0.075, 23.38857),(20.54737, 0.075, 23.34842),(20.74436, 0.075, 23.30827),(20.48649, 0.075, 24.05635),(20.68348, 0.075, 24.0162),(20.88048, 0.075, 23.97605)]

IndexedFaceSet662.coord = Coordinate663

Shape659.geometry = IndexedFaceSet662

Scene12.children.append(Shape659)
Shape664 = x3d.Shape()
Appearance665 = x3d.Appearance()
Material666 = x3d.Material()
Material666.ambientIntensity = 0
Material666.diffuseColor = [0.5,0.5,0.5]
Material666.shininess = 0

Appearance665.material = Material666

Shape664.appearance = Appearance665
IndexedFaceSet667 = x3d.IndexedFaceSet()
IndexedFaceSet667.solid = False
IndexedFaceSet667.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet667.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate668 = x3d.Coordinate()
Coordinate668.point = [(20.21026, 0.075, 22.7012),(20.07614, 0.075, 22.04322),(21.01783, 0.075, 22.53659),(20.88371, 0.075, 21.87861)]

IndexedFaceSet667.coord = Coordinate668

Shape664.geometry = IndexedFaceSet667

Scene12.children.append(Shape664)
Shape669 = x3d.Shape()
Appearance670 = x3d.Appearance()
Material671 = x3d.Material()
Material671.ambientIntensity = 0
Material671.diffuseColor = [0.5,0.5,0.5]
Material671.shininess = 0

Appearance670.material = Material671

Shape669.appearance = Appearance670
IndexedFaceSet672 = x3d.IndexedFaceSet()
IndexedFaceSet672.solid = False
IndexedFaceSet672.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet672.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate673 = x3d.Coordinate()
Coordinate673.point = [(20.07215, 0.075, 22.02362),(19.93803, 0.075, 21.36564),(20.87972, 0.075, 21.85901),(20.7456, 0.075, 21.20103)]

IndexedFaceSet672.coord = Coordinate673

Shape669.geometry = IndexedFaceSet672

Scene12.children.append(Shape669)
Shape674 = x3d.Shape()
Appearance675 = x3d.Appearance()
Material676 = x3d.Material()
Material676.ambientIntensity = 0
Material676.diffuseColor = [0.5,0.5,0.5]
Material676.shininess = 0

Appearance675.material = Material676

Shape674.appearance = Appearance675
IndexedFaceSet677 = x3d.IndexedFaceSet()
IndexedFaceSet677.solid = False
IndexedFaceSet677.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet677.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate678 = x3d.Coordinate()
Coordinate678.point = [(20.07538, 0.075, 19.92619),(20.27238, 0.075, 19.88603),(20.46937, 0.075, 19.84588),(20.2115, 0.075, 20.59397),(20.40849, 0.075, 20.55381),(20.60549, 0.075, 20.51366),(20.34762, 0.075, 21.26174),(20.54461, 0.075, 21.22159),(20.7416, 0.075, 21.18144)]

IndexedFaceSet677.coord = Coordinate678

Shape674.geometry = IndexedFaceSet677

Scene12.children.append(Shape674)
Shape679 = x3d.Shape()
Appearance680 = x3d.Appearance()
Material681 = x3d.Material()
Material681.ambientIntensity = 0
Material681.diffuseColor = [0.5,0.5,0.5]
Material681.shininess = 0

Appearance680.material = Material681

Shape679.appearance = Appearance680
IndexedFaceSet682 = x3d.IndexedFaceSet()
IndexedFaceSet682.solid = False
IndexedFaceSet682.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet682.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate683 = x3d.Coordinate()
Coordinate683.point = [(19.6618, 0.075, 20.01049),(19.85879, 0.075, 19.97034),(20.05579, 0.075, 19.93018),(19.79792, 0.075, 20.67827),(19.99491, 0.075, 20.63811),(20.1919, 0.075, 20.59796),(19.93403, 0.075, 21.34605),(20.13103, 0.075, 21.30589),(20.32802, 0.075, 21.26574)]

IndexedFaceSet682.coord = Coordinate683

Shape679.geometry = IndexedFaceSet682

Scene12.children.append(Shape679)
Shape684 = x3d.Shape()
Appearance685 = x3d.Appearance()
Material686 = x3d.Material()
Material686.ambientIntensity = 0
Material686.diffuseColor = [0.5,0.5,0.5]
Material686.shininess = 0

Appearance685.material = Material686

Shape684.appearance = Appearance685
IndexedFaceSet687 = x3d.IndexedFaceSet()
IndexedFaceSet687.solid = False
IndexedFaceSet687.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet687.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate688 = x3d.Coordinate()
Coordinate688.point = [(19.6578, 0.075, 19.99089),(19.52369, 0.075, 19.33291),(20.46538, 0.075, 19.82628),(20.33126, 0.075, 19.1683)]

IndexedFaceSet687.coord = Coordinate688

Shape684.geometry = IndexedFaceSet687

Scene12.children.append(Shape684)
Shape689 = x3d.Shape()
Appearance690 = x3d.Appearance()
Material691 = x3d.Material()
Material691.ambientIntensity = 0
Material691.diffuseColor = [0.5,0.5,0.5]
Material691.shininess = 0

Appearance690.material = Material691

Shape689.appearance = Appearance690
IndexedFaceSet692 = x3d.IndexedFaceSet()
IndexedFaceSet692.solid = False
IndexedFaceSet692.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet692.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate693 = x3d.Coordinate()
Coordinate693.point = [(19.51969, 0.075, 19.31332),(19.38557, 0.075, 18.65534),(19.92348, 0.075, 19.23101),(19.78936, 0.075, 18.57303),(20.32726, 0.075, 19.14871),(20.19314, 0.075, 18.49073)]

IndexedFaceSet692.coord = Coordinate693

Shape689.geometry = IndexedFaceSet692

Scene12.children.append(Shape689)
Shape694 = x3d.Shape()
Appearance695 = x3d.Appearance()
Material696 = x3d.Material()
Material696.ambientIntensity = 0
Material696.diffuseColor = [0.5,0.5,0.5]
Material696.shininess = 0

Appearance695.material = Material696

Shape694.appearance = Appearance695
IndexedFaceSet697 = x3d.IndexedFaceSet()
IndexedFaceSet697.solid = False
IndexedFaceSet697.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet697.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate698 = x3d.Coordinate()
Coordinate698.point = [(19.52293, 0.075, 17.21588),(19.91691, 0.075, 17.13557),(19.79516, 0.075, 18.55144),(20.18915, 0.075, 18.47113)]

IndexedFaceSet697.coord = Coordinate698

Shape694.geometry = IndexedFaceSet697

Scene12.children.append(Shape694)
Shape699 = x3d.Shape()
Appearance700 = x3d.Appearance()
Material701 = x3d.Material()
Material701.ambientIntensity = 0
Material701.diffuseColor = [0.5,0.5,0.5]
Material701.shininess = 0

Appearance700.material = Material701

Shape699.appearance = Appearance700
IndexedFaceSet702 = x3d.IndexedFaceSet()
IndexedFaceSet702.solid = False
IndexedFaceSet702.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet702.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate703 = x3d.Coordinate()
Coordinate703.point = [(19.10934, 0.075, 17.30019),(19.30634, 0.075, 17.26003),(19.50333, 0.075, 17.21988),(19.24546, 0.075, 17.96796),(19.44245, 0.075, 17.92781),(19.63945, 0.075, 17.88766),(19.38158, 0.075, 18.63574),(19.57857, 0.075, 18.59559),(19.77556, 0.075, 18.55543)]

IndexedFaceSet702.coord = Coordinate703

Shape699.geometry = IndexedFaceSet702

Scene12.children.append(Shape699)
Shape704 = x3d.Shape()
Appearance705 = x3d.Appearance()
Material706 = x3d.Material()
Material706.ambientIntensity = 0
Material706.diffuseColor = [0.5,0.5,0.5]
Material706.shininess = 0

Appearance705.material = Material706

Shape704.appearance = Appearance705
IndexedFaceSet707 = x3d.IndexedFaceSet()
IndexedFaceSet707.solid = False
IndexedFaceSet707.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet707.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate708 = x3d.Coordinate()
Coordinate708.point = [(19.10535, 0.075, 17.28059),(18.97123, 0.075, 16.62261),(19.91292, 0.075, 17.11598),(19.7788, 0.075, 16.458)]

IndexedFaceSet707.coord = Coordinate708

Shape704.geometry = IndexedFaceSet707

Scene12.children.append(Shape704)
Shape709 = x3d.Shape()
Appearance710 = x3d.Appearance()
Material711 = x3d.Material()
Material711.ambientIntensity = 0
Material711.diffuseColor = [0.5,0.5,0.5]
Material711.shininess = 0

Appearance710.material = Material711

Shape709.appearance = Appearance710
IndexedFaceSet712 = x3d.IndexedFaceSet()
IndexedFaceSet712.solid = False
IndexedFaceSet712.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet712.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate713 = x3d.Coordinate()
Coordinate713.point = [(19.64069, 0.075, 15.78042),(19.77481, 0.075, 16.4384),(19.2369, 0.075, 15.86273),(19.37102, 0.075, 16.52071),(18.83311, 0.075, 15.94503),(18.96724, 0.075, 16.60301)]

IndexedFaceSet712.coord = Coordinate713

Shape709.geometry = IndexedFaceSet712

Scene12.children.append(Shape709)
Shape714 = x3d.Shape()
Appearance715 = x3d.Appearance()
Material716 = x3d.Material()
Material716.ambientIntensity = 0
Material716.diffuseColor = [0.5,0.5,0.5]
Material716.shininess = 0

Appearance715.material = Material716

Shape714.appearance = Appearance715
IndexedFaceSet717 = x3d.IndexedFaceSet()
IndexedFaceSet717.solid = False
IndexedFaceSet717.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet717.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate718 = x3d.Coordinate()
Coordinate718.point = [(19.63669, 0.075, 15.76082),(19.2427, 0.075, 15.84113),(19.36446, 0.075, 14.42527),(18.97047, 0.075, 14.50558)]

IndexedFaceSet717.coord = Coordinate718

Shape714.geometry = IndexedFaceSet717

Scene12.children.append(Shape714)
Shape719 = x3d.Shape()
Appearance720 = x3d.Appearance()
Material721 = x3d.Material()
Material721.ambientIntensity = 0
Material721.diffuseColor = [0.5,0.5,0.5]
Material721.shininess = 0

Appearance720.material = Material721

Shape719.appearance = Appearance720
IndexedFaceSet722 = x3d.IndexedFaceSet()
IndexedFaceSet722.solid = False
IndexedFaceSet722.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet722.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate723 = x3d.Coordinate()
Coordinate723.point = [(18.55689, 0.075, 14.58988),(18.75388, 0.075, 14.54973),(18.95087, 0.075, 14.50957),(18.693, 0.075, 15.25766),(18.89, 0.075, 15.2175),(19.08699, 0.075, 15.17735),(18.82912, 0.075, 15.92544),(19.02611, 0.075, 15.88528),(19.22311, 0.075, 15.84513)]

IndexedFaceSet722.coord = Coordinate723

Shape719.geometry = IndexedFaceSet722

Scene12.children.append(Shape719)
Shape724 = x3d.Shape()
Appearance725 = x3d.Appearance()
Material726 = x3d.Material()
Material726.ambientIntensity = 0
Material726.diffuseColor = [0.5,0.5,0.5]
Material726.shininess = 0

Appearance725.material = Material726

Shape724.appearance = Appearance725
IndexedFaceSet727 = x3d.IndexedFaceSet()
IndexedFaceSet727.solid = False
IndexedFaceSet727.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet727.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate728 = x3d.Coordinate()
Coordinate728.point = [(18.55289, 0.075, 14.57028),(18.41877, 0.075, 13.9123),(18.95668, 0.075, 14.48798),(18.82256, 0.075, 13.83),(19.36046, 0.075, 14.40567),(19.22635, 0.075, 13.74769)]

IndexedFaceSet727.coord = Coordinate728

Shape724.geometry = IndexedFaceSet727

Scene12.children.append(Shape724)
Shape729 = x3d.Shape()
Appearance730 = x3d.Appearance()
Material731 = x3d.Material()
Material731.ambientIntensity = 0
Material731.diffuseColor = [0.5,0.5,0.5]
Material731.shininess = 0

Appearance730.material = Material731

Shape729.appearance = Appearance730
IndexedFaceSet732 = x3d.IndexedFaceSet()
IndexedFaceSet732.solid = False
IndexedFaceSet732.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet732.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate733 = x3d.Coordinate()
Coordinate733.point = [(19.08823, 0.075, 13.07012),(19.22235, 0.075, 13.7281),(18.68444, 0.075, 13.15242),(18.81856, 0.075, 13.8104),(18.28066, 0.075, 13.23473),(18.41478, 0.075, 13.89271)]

IndexedFaceSet732.coord = Coordinate733

Shape729.geometry = IndexedFaceSet732

Scene12.children.append(Shape729)
Shape734 = x3d.Shape()
Appearance735 = x3d.Appearance()
Material736 = x3d.Material()
Material736.ambientIntensity = 0
Material736.diffuseColor = [0.5,0.5,0.5]
Material736.shininess = 0

Appearance735.material = Material736

Shape734.appearance = Appearance735
IndexedFaceSet737 = x3d.IndexedFaceSet()
IndexedFaceSet737.solid = False
IndexedFaceSet737.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet737.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate738 = x3d.Coordinate()
Coordinate738.point = [(19.08424, 0.075, 13.05052),(18.69025, 0.075, 13.13083),(18.812, 0.075, 11.71496),(18.41801, 0.075, 11.79527)]

IndexedFaceSet737.coord = Coordinate738

Shape734.geometry = IndexedFaceSet737

Scene12.children.append(Shape734)
Shape739 = x3d.Shape()
Appearance740 = x3d.Appearance()
Material741 = x3d.Material()
Material741.ambientIntensity = 0
Material741.diffuseColor = [0.5,0.5,0.5]
Material741.shininess = 0

Appearance740.material = Material741

Shape739.appearance = Appearance740
IndexedFaceSet742 = x3d.IndexedFaceSet()
IndexedFaceSet742.solid = False
IndexedFaceSet742.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet742.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate743 = x3d.Coordinate()
Coordinate743.point = [(18.00443, 0.075, 11.87957),(18.20143, 0.075, 11.83942),(18.39842, 0.075, 11.79927),(18.14055, 0.075, 12.54735),(18.33754, 0.075, 12.5072),(18.53453, 0.075, 12.46704),(18.27666, 0.075, 13.21513),(18.47366, 0.075, 13.17498),(18.67065, 0.075, 13.13482)]

IndexedFaceSet742.coord = Coordinate743

Shape739.geometry = IndexedFaceSet742

Scene12.children.append(Shape739)
Shape744 = x3d.Shape()
Appearance745 = x3d.Appearance()
Material746 = x3d.Material()
Material746.ambientIntensity = 0
Material746.diffuseColor = [0.5,0.5,0.5]
Material746.shininess = 0

Appearance745.material = Material746

Shape744.appearance = Appearance745
IndexedFaceSet747 = x3d.IndexedFaceSet()
IndexedFaceSet747.solid = False
IndexedFaceSet747.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet747.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate748 = x3d.Coordinate()
Coordinate748.point = [(18.00044, 0.075, 11.85998),(17.86632, 0.075, 11.202),(18.80801, 0.075, 11.69537),(18.67389, 0.075, 11.03739)]

IndexedFaceSet747.coord = Coordinate748

Shape744.geometry = IndexedFaceSet747

Scene12.children.append(Shape744)
Shape749 = x3d.Shape()
Appearance750 = x3d.Appearance()
Material751 = x3d.Material()
Material751.ambientIntensity = 0
Material751.diffuseColor = [0.5,0.5,0.5]
Material751.shininess = 0

Appearance750.material = Material751

Shape749.appearance = Appearance750
IndexedFaceSet752 = x3d.IndexedFaceSet()
IndexedFaceSet752.solid = False
IndexedFaceSet752.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet752.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate753 = x3d.Coordinate()
Coordinate753.point = [(17.86232, 0.075, 11.1824),(17.79526, 0.075, 10.85341),(17.7282, 0.075, 10.52442),(18.66989, 0.075, 11.01779),(18.60283, 0.075, 10.6888),(18.53577, 0.075, 10.35981)]

IndexedFaceSet752.coord = Coordinate753

Shape749.geometry = IndexedFaceSet752

Scene12.children.append(Shape749)
Shape754 = x3d.Shape()
Appearance755 = x3d.Appearance()
Material756 = x3d.Material()
Material756.ambientIntensity = 0
Material756.diffuseColor = [0.5,0.5,0.5]
Material756.shininess = 0

Appearance755.material = Material756

Shape754.appearance = Appearance755
IndexedFaceSet757 = x3d.IndexedFaceSet()
IndexedFaceSet757.solid = False
IndexedFaceSet757.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet757.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate758 = x3d.Coordinate()
Coordinate758.point = [(17.86556, 0.075, 9.084966),(18.25955, 0.075, 9.004658),(18.13779, 0.075, 10.42052),(18.53178, 0.075, 10.34021)]

IndexedFaceSet757.coord = Coordinate758

Shape754.geometry = IndexedFaceSet757

Scene12.children.append(Shape754)
Shape759 = x3d.Shape()
Appearance760 = x3d.Appearance()
Material761 = x3d.Material()
Material761.ambientIntensity = 0
Material761.diffuseColor = [0.5,0.5,0.5]
Material761.shininess = 0

Appearance760.material = Material761

Shape759.appearance = Appearance760
IndexedFaceSet762 = x3d.IndexedFaceSet()
IndexedFaceSet762.solid = False
IndexedFaceSet762.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet762.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate763 = x3d.Coordinate()
Coordinate763.point = [(18.1182, 0.075, 10.42452),(17.9212, 0.075, 10.46467),(17.72421, 0.075, 10.50482),(17.98208, 0.075, 9.756739),(17.78509, 0.075, 9.796892),(17.58809, 0.075, 9.837047),(17.84596, 0.075, 9.088961),(17.64897, 0.075, 9.129114),(17.45197, 0.075, 9.169269)]

IndexedFaceSet762.coord = Coordinate763

Shape759.geometry = IndexedFaceSet762

Scene12.children.append(Shape759)
Shape764 = x3d.Shape()
Appearance765 = x3d.Appearance()
Material766 = x3d.Material()
Material766.ambientIntensity = 0
Material766.diffuseColor = [0.5,0.5,0.5]
Material766.shininess = 0

Appearance765.material = Material766

Shape764.appearance = Appearance765
IndexedFaceSet767 = x3d.IndexedFaceSet()
IndexedFaceSet767.solid = False
IndexedFaceSet767.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet767.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate768 = x3d.Coordinate()
Coordinate768.point = [(18.12143, 0.075, 8.327081),(18.25555, 0.075, 8.985061),(17.31386, 0.075, 8.491693),(17.44798, 0.075, 9.149672)]

IndexedFaceSet767.coord = Coordinate768

Shape764.geometry = IndexedFaceSet767

Scene12.children.append(Shape764)
Shape769 = x3d.Shape()
Appearance770 = x3d.Appearance()
Material771 = x3d.Material()
Material771.ambientIntensity = 0
Material771.diffuseColor = [0.5,0.5,0.5]
Material771.shininess = 0

Appearance770.material = Material771

Shape769.appearance = Appearance770
IndexedFaceSet772 = x3d.IndexedFaceSet()
IndexedFaceSet772.solid = False
IndexedFaceSet772.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet772.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate773 = x3d.Coordinate()
Coordinate773.point = [(17.30987, 0.075, 8.472095),(17.24281, 0.075, 8.143106),(17.17575, 0.075, 7.814116),(17.71365, 0.075, 8.38979),(17.64659, 0.075, 8.0608),(17.57953, 0.075, 7.73181),(18.11744, 0.075, 8.307484),(18.05038, 0.075, 7.978494),(17.98332, 0.075, 7.649504)]

IndexedFaceSet772.coord = Coordinate773

Shape769.geometry = IndexedFaceSet772

Scene12.children.append(Shape769)
Shape774 = x3d.Shape()
Appearance775 = x3d.Appearance()
Material776 = x3d.Material()
Material776.ambientIntensity = 0
Material776.diffuseColor = [0.5,0.5,0.5]
Material776.shininess = 0

Appearance775.material = Material776

Shape774.appearance = Appearance775
IndexedFaceSet777 = x3d.IndexedFaceSet()
IndexedFaceSet777.solid = False
IndexedFaceSet777.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet777.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate778 = x3d.Coordinate()
Coordinate778.point = [(17.3131, 0.075, 6.37466),(17.5101, 0.075, 6.334506),(17.70709, 0.075, 6.294352),(17.44922, 0.075, 7.042438),(17.64621, 0.075, 7.002284),(17.84321, 0.075, 6.96213),(17.58534, 0.075, 7.710216),(17.78233, 0.075, 7.670062),(17.97932, 0.075, 7.629908)]

IndexedFaceSet777.coord = Coordinate778

Shape774.geometry = IndexedFaceSet777

Scene12.children.append(Shape774)
Shape779 = x3d.Shape()
Appearance780 = x3d.Appearance()
Material781 = x3d.Material()
Material781.ambientIntensity = 0
Material781.diffuseColor = [0.5,0.5,0.5]
Material781.shininess = 0

Appearance780.material = Material781

Shape779.appearance = Appearance780
IndexedFaceSet782 = x3d.IndexedFaceSet()
IndexedFaceSet782.solid = False
IndexedFaceSet782.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet782.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate783 = x3d.Coordinate()
Coordinate783.point = [(16.89952, 0.075, 6.458963),(17.29351, 0.075, 6.378654),(17.17175, 0.075, 7.794519),(17.56574, 0.075, 7.714211)]

IndexedFaceSet782.coord = Coordinate783

Shape779.geometry = IndexedFaceSet782

Scene12.children.append(Shape779)
Shape784 = x3d.Shape()
Appearance785 = x3d.Appearance()
Material786 = x3d.Material()
Material786.ambientIntensity = 0
Material786.diffuseColor = [0.5,0.5,0.5]
Material786.shininess = 0

Appearance785.material = Material786

Shape784.appearance = Appearance785
IndexedFaceSet787 = x3d.IndexedFaceSet()
IndexedFaceSet787.solid = False
IndexedFaceSet787.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet787.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate788 = x3d.Coordinate()
Coordinate788.point = [(16.89552, 0.075, 6.439366),(16.76141, 0.075, 5.781386),(17.29931, 0.075, 6.35706),(17.16519, 0.075, 5.699081),(17.7031, 0.075, 6.274755),(17.56898, 0.075, 5.616775)]

IndexedFaceSet787.coord = Coordinate788

Shape784.geometry = IndexedFaceSet787

Scene12.children.append(Shape784)
Shape789 = x3d.Shape()
Appearance790 = x3d.Appearance()
Material791 = x3d.Material()
Material791.ambientIntensity = 0
Material791.diffuseColor = [0.5,0.5,0.5]
Material791.shininess = 0

Appearance790.material = Material791

Shape789.appearance = Appearance790
IndexedFaceSet792 = x3d.IndexedFaceSet()
IndexedFaceSet792.solid = False
IndexedFaceSet792.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet792.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate793 = x3d.Coordinate()
Coordinate793.point = [(16.75741, 0.075, 5.761789),(16.62329, 0.075, 5.10381),(17.1612, 0.075, 5.679484),(17.02708, 0.075, 5.021504),(17.56498, 0.075, 5.597178),(17.43086, 0.075, 4.939198)]

IndexedFaceSet792.coord = Coordinate793

Shape789.geometry = IndexedFaceSet792

Scene12.children.append(Shape789)
Shape794 = x3d.Shape()
Appearance795 = x3d.Appearance()
Material796 = x3d.Material()
Material796.ambientIntensity = 0
Material796.diffuseColor = [0.5,0.5,0.5]
Material796.shininess = 0

Appearance795.material = Material796

Shape794.appearance = Appearance795
IndexedFaceSet797 = x3d.IndexedFaceSet()
IndexedFaceSet797.solid = False
IndexedFaceSet797.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet797.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate798 = x3d.Coordinate()
Coordinate798.point = [(17.42687, 0.075, 4.919601),(17.03288, 0.075, 4.99991),(17.29075, 0.075, 4.251824),(16.89676, 0.075, 4.332132),(17.15463, 0.075, 3.584046),(16.76065, 0.075, 3.664354)]

IndexedFaceSet797.coord = Coordinate798

Shape794.geometry = IndexedFaceSet797

Scene12.children.append(Shape794)
Shape799 = x3d.Shape()
Appearance800 = x3d.Appearance()
Material801 = x3d.Material()
Material801.ambientIntensity = 0
Material801.diffuseColor = [0.5,0.5,0.5]
Material801.shininess = 0

Appearance800.material = Material801

Shape799.appearance = Appearance800
IndexedFaceSet802 = x3d.IndexedFaceSet()
IndexedFaceSet802.solid = False
IndexedFaceSet802.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet802.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate803 = x3d.Coordinate()
Coordinate803.point = [(16.34706, 0.075, 3.748657),(16.74105, 0.075, 3.668349),(16.6193, 0.075, 5.084213),(17.01328, 0.075, 5.003905)]

IndexedFaceSet802.coord = Coordinate803

Shape799.geometry = IndexedFaceSet802

Scene12.children.append(Shape799)
Shape804 = x3d.Shape()
Appearance805 = x3d.Appearance()
Material806 = x3d.Material()
Material806.ambientIntensity = 0
Material806.diffuseColor = [0.5,0.5,0.5]
Material806.shininess = 0

Appearance805.material = Material806

Shape804.appearance = Appearance805
IndexedFaceSet807 = x3d.IndexedFaceSet()
IndexedFaceSet807.solid = False
IndexedFaceSet807.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet807.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate808 = x3d.Coordinate()
Coordinate808.point = [(16.34307, 0.075, 3.72906),(16.20895, 0.075, 3.071081),(16.74685, 0.075, 3.646755),(16.61274, 0.075, 2.988775),(17.15064, 0.075, 3.564449),(17.01652, 0.075, 2.906469)]

IndexedFaceSet807.coord = Coordinate808

Shape804.geometry = IndexedFaceSet807

Scene12.children.append(Shape804)
Shape809 = x3d.Shape()
Appearance810 = x3d.Appearance()
Material811 = x3d.Material()
Material811.ambientIntensity = 0
Material811.diffuseColor = [0.5,0.5,0.5]
Material811.shininess = 0

Appearance810.material = Material811

Shape809.appearance = Appearance810
IndexedFaceSet812 = x3d.IndexedFaceSet()
IndexedFaceSet812.solid = False
IndexedFaceSet812.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet812.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate813 = x3d.Coordinate()
Coordinate813.point = [(20.76423, 0.075, 29.64557),(20.63011, 0.075, 28.98759),(21.5718, 0.075, 29.48096),(21.43769, 0.075, 28.82298)]

IndexedFaceSet812.coord = Coordinate813

Shape809.geometry = IndexedFaceSet812

Scene12.children.append(Shape809)
Shape814 = x3d.Shape()
Appearance815 = x3d.Appearance()
Material816 = x3d.Material()
Material816.ambientIntensity = 0
Material816.diffuseColor = [0.5,0.5,0.5]
Material816.shininess = 0

Appearance815.material = Material816

Shape814.appearance = Appearance815
IndexedFaceSet817 = x3d.IndexedFaceSet()
IndexedFaceSet817.solid = False
IndexedFaceSet817.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet817.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate818 = x3d.Coordinate()
Coordinate818.point = [(21.29957, 0.075, 28.1454),(21.43369, 0.075, 28.80338),(20.492, 0.075, 28.31001),(20.62612, 0.075, 28.96799)]

IndexedFaceSet817.coord = Coordinate818

Shape814.geometry = IndexedFaceSet817

Scene12.children.append(Shape814)
Shape819 = x3d.Shape()
Appearance820 = x3d.Appearance()
Material821 = x3d.Material()
Material821.ambientIntensity = 0
Material821.diffuseColor = [0.5,0.5,0.5]
Material821.shininess = 0

Appearance820.material = Material821

Shape819.appearance = Appearance820
IndexedFaceSet822 = x3d.IndexedFaceSet()
IndexedFaceSet822.solid = False
IndexedFaceSet822.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet822.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate823 = x3d.Coordinate()
Coordinate823.point = [(20.62935, 0.075, 26.87056),(21.02334, 0.075, 26.79025),(20.76547, 0.075, 27.53834),(21.15946, 0.075, 27.45803),(20.90159, 0.075, 28.20612),(21.29558, 0.075, 28.12581)]

IndexedFaceSet822.coord = Coordinate823

Shape819.geometry = IndexedFaceSet822

Scene12.children.append(Shape819)
Shape824 = x3d.Shape()
Appearance825 = x3d.Appearance()
Material826 = x3d.Material()
Material826.ambientIntensity = 0
Material826.diffuseColor = [0.5,0.5,0.5]
Material826.shininess = 0

Appearance825.material = Material826

Shape824.appearance = Appearance825
IndexedFaceSet827 = x3d.IndexedFaceSet()
IndexedFaceSet827.solid = False
IndexedFaceSet827.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet827.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate828 = x3d.Coordinate()
Coordinate828.point = [(20.21577, 0.075, 26.95486),(20.41277, 0.075, 26.91471),(20.60976, 0.075, 26.87455),(20.35189, 0.075, 27.62264),(20.54888, 0.075, 27.58249),(20.74587, 0.075, 27.54233),(20.488, 0.075, 28.29042),(20.685, 0.075, 28.25026),(20.88199, 0.075, 28.21011)]

IndexedFaceSet827.coord = Coordinate828

Shape824.geometry = IndexedFaceSet827

Scene12.children.append(Shape824)
Shape829 = x3d.Shape()
Appearance830 = x3d.Appearance()
Material831 = x3d.Material()
Material831.ambientIntensity = 0
Material831.diffuseColor = [0.5,0.5,0.5]
Material831.shininess = 0

Appearance830.material = Material831

Shape829.appearance = Appearance830
IndexedFaceSet832 = x3d.IndexedFaceSet()
IndexedFaceSet832.solid = False
IndexedFaceSet832.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet832.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate833 = x3d.Coordinate()
Coordinate833.point = [(20.21178, 0.075, 26.93526),(20.07766, 0.075, 26.27728),(21.01935, 0.075, 26.77065),(20.88523, 0.075, 26.11267)]

IndexedFaceSet832.coord = Coordinate833

Shape829.geometry = IndexedFaceSet832

Scene12.children.append(Shape829)
Shape834 = x3d.Shape()
Appearance835 = x3d.Appearance()
Material836 = x3d.Material()
Material836.ambientIntensity = 0
Material836.diffuseColor = [0.5,0.5,0.5]
Material836.shininess = 0

Appearance835.material = Material836

Shape834.appearance = Appearance835
IndexedFaceSet837 = x3d.IndexedFaceSet()
IndexedFaceSet837.solid = False
IndexedFaceSet837.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet837.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate838 = x3d.Coordinate()
Coordinate838.point = [(20.07366, 0.075, 26.25769),(19.93954, 0.075, 25.59971),(20.88123, 0.075, 26.09308),(20.74711, 0.075, 25.4351)]

IndexedFaceSet837.coord = Coordinate838

Shape834.geometry = IndexedFaceSet837

Scene12.children.append(Shape834)
Shape839 = x3d.Shape()
Appearance840 = x3d.Appearance()
Material841 = x3d.Material()
Material841.ambientIntensity = 0
Material841.diffuseColor = [0.5,0.5,0.5]
Material841.shininess = 0

Appearance840.material = Material841

Shape839.appearance = Appearance840
IndexedFaceSet842 = x3d.IndexedFaceSet()
IndexedFaceSet842.solid = False
IndexedFaceSet842.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet842.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate843 = x3d.Coordinate()
Coordinate843.point = [(20.0769, 0.075, 24.16025),(20.47089, 0.075, 24.07994),(20.21302, 0.075, 24.82803),(20.607, 0.075, 24.74772),(20.34913, 0.075, 25.49581),(20.74312, 0.075, 25.4155)]

IndexedFaceSet842.coord = Coordinate843

Shape839.geometry = IndexedFaceSet842

Scene12.children.append(Shape839)
Shape844 = x3d.Shape()
Appearance845 = x3d.Appearance()
Material846 = x3d.Material()
Material846.ambientIntensity = 0
Material846.diffuseColor = [0.5,0.5,0.5]
Material846.shininess = 0

Appearance845.material = Material846

Shape844.appearance = Appearance845
IndexedFaceSet847 = x3d.IndexedFaceSet()
IndexedFaceSet847.solid = False
IndexedFaceSet847.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet847.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate848 = x3d.Coordinate()
Coordinate848.point = [(20.32954, 0.075, 25.4998),(20.13254, 0.075, 25.53996),(19.93555, 0.075, 25.58011),(20.19342, 0.075, 24.83203),(19.99643, 0.075, 24.87218),(19.79943, 0.075, 24.91233),(20.0573, 0.075, 24.16425),(19.86031, 0.075, 24.2044),(19.66331, 0.075, 24.24456)]

IndexedFaceSet847.coord = Coordinate848

Shape844.geometry = IndexedFaceSet847

Scene12.children.append(Shape844)
Shape849 = x3d.Shape()
Appearance850 = x3d.Appearance()
Material851 = x3d.Material()
Material851.ambientIntensity = 0
Material851.diffuseColor = [0.5,0.5,0.5]
Material851.shininess = 0

Appearance850.material = Material851

Shape849.appearance = Appearance850
IndexedFaceSet852 = x3d.IndexedFaceSet()
IndexedFaceSet852.solid = False
IndexedFaceSet852.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet852.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate853 = x3d.Coordinate()
Coordinate853.point = [(20.33277, 0.075, 23.40237),(20.46689, 0.075, 24.06035),(19.5252, 0.075, 23.56698),(19.65932, 0.075, 24.22496)]

IndexedFaceSet852.coord = Coordinate853

Shape849.geometry = IndexedFaceSet852

Scene12.children.append(Shape849)
Shape854 = x3d.Shape()
Appearance855 = x3d.Appearance()
Material856 = x3d.Material()
Material856.ambientIntensity = 0
Material856.diffuseColor = [0.5,0.5,0.5]
Material856.shininess = 0

Appearance855.material = Material856

Shape854.appearance = Appearance855
IndexedFaceSet857 = x3d.IndexedFaceSet()
IndexedFaceSet857.solid = False
IndexedFaceSet857.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet857.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate858 = x3d.Coordinate()
Coordinate858.point = [(19.52121, 0.075, 23.54738),(19.38709, 0.075, 22.8894),(20.32878, 0.075, 23.38277),(20.19466, 0.075, 22.72479)]

IndexedFaceSet857.coord = Coordinate858

Shape854.geometry = IndexedFaceSet857

Scene12.children.append(Shape854)
Shape859 = x3d.Shape()
Appearance860 = x3d.Appearance()
Material861 = x3d.Material()
Material861.ambientIntensity = 0
Material861.diffuseColor = [0.5,0.5,0.5]
Material861.shininess = 0

Appearance860.material = Material861

Shape859.appearance = Appearance860
IndexedFaceSet862 = x3d.IndexedFaceSet()
IndexedFaceSet862.solid = False
IndexedFaceSet862.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet862.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate863 = x3d.Coordinate()
Coordinate863.point = [(19.52444, 0.075, 21.44995),(19.72144, 0.075, 21.40979),(19.91843, 0.075, 21.36964),(19.66056, 0.075, 22.11773),(19.85755, 0.075, 22.07757),(20.05455, 0.075, 22.03742),(19.79668, 0.075, 22.7855),(19.99367, 0.075, 22.74535),(20.19066, 0.075, 22.70519)]

IndexedFaceSet862.coord = Coordinate863

Shape859.geometry = IndexedFaceSet862

Scene12.children.append(Shape859)
Shape864 = x3d.Shape()
Appearance865 = x3d.Appearance()
Material866 = x3d.Material()
Material866.ambientIntensity = 0
Material866.diffuseColor = [0.5,0.5,0.5]
Material866.shininess = 0

Appearance865.material = Material866

Shape864.appearance = Appearance865
IndexedFaceSet867 = x3d.IndexedFaceSet()
IndexedFaceSet867.solid = False
IndexedFaceSet867.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet867.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate868 = x3d.Coordinate()
Coordinate868.point = [(19.77708, 0.075, 22.7895),(19.38309, 0.075, 22.86981),(19.50485, 0.075, 21.45394),(19.11086, 0.075, 21.53425)]

IndexedFaceSet867.coord = Coordinate868

Shape864.geometry = IndexedFaceSet867

Scene12.children.append(Shape864)
Shape869 = x3d.Shape()
Appearance870 = x3d.Appearance()
Material871 = x3d.Material()
Material871.ambientIntensity = 0
Material871.diffuseColor = [0.5,0.5,0.5]
Material871.shininess = 0

Appearance870.material = Material871

Shape869.appearance = Appearance870
IndexedFaceSet872 = x3d.IndexedFaceSet()
IndexedFaceSet872.solid = False
IndexedFaceSet872.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet872.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate873 = x3d.Coordinate()
Coordinate873.point = [(19.78032, 0.075, 20.69206),(19.91444, 0.075, 21.35004),(18.97275, 0.075, 20.85667),(19.10686, 0.075, 21.51465)]

IndexedFaceSet872.coord = Coordinate873

Shape869.geometry = IndexedFaceSet872

Scene12.children.append(Shape869)
Shape874 = x3d.Shape()
Appearance875 = x3d.Appearance()
Material876 = x3d.Material()
Material876.ambientIntensity = 0
Material876.diffuseColor = [0.5,0.5,0.5]
Material876.shininess = 0

Appearance875.material = Material876

Shape874.appearance = Appearance875
IndexedFaceSet877 = x3d.IndexedFaceSet()
IndexedFaceSet877.solid = False
IndexedFaceSet877.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet877.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate878 = x3d.Coordinate()
Coordinate878.point = [(18.96875, 0.075, 20.83708),(18.83463, 0.075, 20.1791),(19.77632, 0.075, 20.67247),(19.6422, 0.075, 20.01449)]

IndexedFaceSet877.coord = Coordinate878

Shape874.geometry = IndexedFaceSet877

Scene12.children.append(Shape874)
Shape879 = x3d.Shape()
Appearance880 = x3d.Appearance()
Material881 = x3d.Material()
Material881.ambientIntensity = 0
Material881.diffuseColor = [0.5,0.5,0.5]
Material881.shininess = 0

Appearance880.material = Material881

Shape879.appearance = Appearance880
IndexedFaceSet882 = x3d.IndexedFaceSet()
IndexedFaceSet882.solid = False
IndexedFaceSet882.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet882.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate883 = x3d.Coordinate()
Coordinate883.point = [(18.97199, 0.075, 18.73964),(19.16898, 0.075, 18.69949),(19.36597, 0.075, 18.65933),(19.1081, 0.075, 19.40742),(19.3051, 0.075, 19.36727),(19.50209, 0.075, 19.32711),(19.24422, 0.075, 20.0752),(19.44121, 0.075, 20.03504),(19.63821, 0.075, 19.99489)]

IndexedFaceSet882.coord = Coordinate883

Shape879.geometry = IndexedFaceSet882

Scene12.children.append(Shape879)
Shape884 = x3d.Shape()
Appearance885 = x3d.Appearance()
Material886 = x3d.Material()
Material886.ambientIntensity = 0
Material886.diffuseColor = [0.5,0.5,0.5]
Material886.shininess = 0

Appearance885.material = Material886

Shape884.appearance = Appearance885
IndexedFaceSet887 = x3d.IndexedFaceSet()
IndexedFaceSet887.solid = False
IndexedFaceSet887.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet887.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate888 = x3d.Coordinate()
Coordinate888.point = [(18.5584, 0.075, 18.82394),(18.7554, 0.075, 18.78379),(18.95239, 0.075, 18.74364),(18.69452, 0.075, 19.49172),(18.89151, 0.075, 19.45157),(19.08851, 0.075, 19.41142),(18.83064, 0.075, 20.1595),(19.02763, 0.075, 20.11935),(19.22462, 0.075, 20.07919)]

IndexedFaceSet887.coord = Coordinate888

Shape884.geometry = IndexedFaceSet887

Scene12.children.append(Shape884)
Shape889 = x3d.Shape()
Appearance890 = x3d.Appearance()
Material891 = x3d.Material()
Material891.ambientIntensity = 0
Material891.diffuseColor = [0.5,0.5,0.5]
Material891.shininess = 0

Appearance890.material = Material891

Shape889.appearance = Appearance890
IndexedFaceSet892 = x3d.IndexedFaceSet()
IndexedFaceSet892.solid = False
IndexedFaceSet892.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet892.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate893 = x3d.Coordinate()
Coordinate893.point = [(18.55441, 0.075, 18.80435),(18.42029, 0.075, 18.14637),(19.36198, 0.075, 18.63974),(19.22786, 0.075, 17.98176)]

IndexedFaceSet892.coord = Coordinate893

Shape889.geometry = IndexedFaceSet892

Scene12.children.append(Shape889)
Shape894 = x3d.Shape()
Appearance895 = x3d.Appearance()
Material896 = x3d.Material()
Material896.ambientIntensity = 0
Material896.diffuseColor = [0.5,0.5,0.5]
Material896.shininess = 0

Appearance895.material = Material896

Shape894.appearance = Appearance895
IndexedFaceSet897 = x3d.IndexedFaceSet()
IndexedFaceSet897.solid = False
IndexedFaceSet897.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet897.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate898 = x3d.Coordinate()
Coordinate898.point = [(18.41629, 0.075, 18.12677),(18.28218, 0.075, 17.46879),(19.22387, 0.075, 17.96216),(19.08975, 0.075, 17.30418)]

IndexedFaceSet897.coord = Coordinate898

Shape894.geometry = IndexedFaceSet897

Scene12.children.append(Shape894)
Shape899 = x3d.Shape()
Appearance900 = x3d.Appearance()
Material901 = x3d.Material()
Material901.ambientIntensity = 0
Material901.diffuseColor = [0.5,0.5,0.5]
Material901.shininess = 0

Appearance900.material = Material901

Shape899.appearance = Appearance900
IndexedFaceSet902 = x3d.IndexedFaceSet()
IndexedFaceSet902.solid = False
IndexedFaceSet902.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet902.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate903 = x3d.Coordinate()
Coordinate903.point = [(19.08575, 0.075, 17.28458),(18.69176, 0.075, 17.36489),(18.81352, 0.075, 15.94903),(18.41953, 0.075, 16.02934)]

IndexedFaceSet902.coord = Coordinate903

Shape899.geometry = IndexedFaceSet902

Scene12.children.append(Shape899)
Shape904 = x3d.Shape()
Appearance905 = x3d.Appearance()
Material906 = x3d.Material()
Material906.ambientIntensity = 0
Material906.diffuseColor = [0.5,0.5,0.5]
Material906.shininess = 0

Appearance905.material = Material906

Shape904.appearance = Appearance905
IndexedFaceSet907 = x3d.IndexedFaceSet()
IndexedFaceSet907.solid = False
IndexedFaceSet907.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet907.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate908 = x3d.Coordinate()
Coordinate908.point = [(18.00595, 0.075, 16.11364),(18.39993, 0.075, 16.03333),(18.27818, 0.075, 17.44919),(18.67217, 0.075, 17.36889)]

IndexedFaceSet907.coord = Coordinate908

Shape904.geometry = IndexedFaceSet907

Scene12.children.append(Shape904)
Shape909 = x3d.Shape()
Appearance910 = x3d.Appearance()
Material911 = x3d.Material()
Material911.ambientIntensity = 0
Material911.diffuseColor = [0.5,0.5,0.5]
Material911.shininess = 0

Appearance910.material = Material911

Shape909.appearance = Appearance910
IndexedFaceSet912 = x3d.IndexedFaceSet()
IndexedFaceSet912.solid = False
IndexedFaceSet912.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet912.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate913 = x3d.Coordinate()
Coordinate913.point = [(18.00195, 0.075, 16.09404),(17.86783, 0.075, 15.43606),(18.80952, 0.075, 15.92943),(18.6754, 0.075, 15.27145)]

IndexedFaceSet912.coord = Coordinate913

Shape909.geometry = IndexedFaceSet912

Scene12.children.append(Shape909)
Shape914 = x3d.Shape()
Appearance915 = x3d.Appearance()
Material916 = x3d.Material()
Material916.ambientIntensity = 0
Material916.diffuseColor = [0.5,0.5,0.5]
Material916.shininess = 0

Appearance915.material = Material916

Shape914.appearance = Appearance915
IndexedFaceSet917 = x3d.IndexedFaceSet()
IndexedFaceSet917.solid = False
IndexedFaceSet917.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet917.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate918 = x3d.Coordinate()
Coordinate918.point = [(17.86384, 0.075, 15.41647),(17.72972, 0.075, 14.75849),(18.67141, 0.075, 15.25185),(18.53729, 0.075, 14.59387)]

IndexedFaceSet917.coord = Coordinate918

Shape914.geometry = IndexedFaceSet917

Scene12.children.append(Shape914)
Shape919 = x3d.Shape()
Appearance920 = x3d.Appearance()
Material921 = x3d.Material()
Material921.ambientIntensity = 0
Material921.diffuseColor = [0.5,0.5,0.5]
Material921.shininess = 0

Appearance920.material = Material921

Shape919.appearance = Appearance920
IndexedFaceSet922 = x3d.IndexedFaceSet()
IndexedFaceSet922.solid = False
IndexedFaceSet922.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet922.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate923 = x3d.Coordinate()
Coordinate923.point = [(18.5333, 0.075, 14.57428),(18.13931, 0.075, 14.65459),(18.39718, 0.075, 13.9065),(18.00319, 0.075, 13.98681),(18.26106, 0.075, 13.23872),(17.86707, 0.075, 13.31903)]

IndexedFaceSet922.coord = Coordinate923

Shape919.geometry = IndexedFaceSet922

Scene12.children.append(Shape919)
Shape924 = x3d.Shape()
Appearance925 = x3d.Appearance()
Material926 = x3d.Material()
Material926.ambientIntensity = 0
Material926.diffuseColor = [0.5,0.5,0.5]
Material926.shininess = 0

Appearance925.material = Material926

Shape924.appearance = Appearance925
IndexedFaceSet927 = x3d.IndexedFaceSet()
IndexedFaceSet927.solid = False
IndexedFaceSet927.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet927.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate928 = x3d.Coordinate()
Coordinate928.point = [(17.45349, 0.075, 13.40333),(17.84748, 0.075, 13.32302),(17.72573, 0.075, 14.73889),(18.11971, 0.075, 14.65858)]

IndexedFaceSet927.coord = Coordinate928

Shape924.geometry = IndexedFaceSet927

Scene12.children.append(Shape924)
Shape929 = x3d.Shape()
Appearance930 = x3d.Appearance()
Material931 = x3d.Material()
Material931.ambientIntensity = 0
Material931.diffuseColor = [0.5,0.5,0.5]
Material931.shininess = 0

Appearance930.material = Material931

Shape929.appearance = Appearance930
IndexedFaceSet932 = x3d.IndexedFaceSet()
IndexedFaceSet932.solid = False
IndexedFaceSet932.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet932.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate933 = x3d.Coordinate()
Coordinate933.point = [(17.4495, 0.075, 13.38374),(17.31538, 0.075, 12.72576),(17.85328, 0.075, 13.30143),(17.71916, 0.075, 12.64345),(18.25707, 0.075, 13.21912),(18.12295, 0.075, 12.56115)]

IndexedFaceSet932.coord = Coordinate933

Shape929.geometry = IndexedFaceSet932

Scene12.children.append(Shape929)
Shape934 = x3d.Shape()
Appearance935 = x3d.Appearance()
Material936 = x3d.Material()
Material936.ambientIntensity = 0
Material936.diffuseColor = [0.5,0.5,0.5]
Material936.shininess = 0

Appearance935.material = Material936

Shape934.appearance = Appearance935
IndexedFaceSet937 = x3d.IndexedFaceSet()
IndexedFaceSet937.solid = False
IndexedFaceSet937.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet937.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate938 = x3d.Coordinate()
Coordinate938.point = [(17.98483, 0.075, 11.88357),(18.11895, 0.075, 12.54155),(17.17726, 0.075, 12.04818),(17.31138, 0.075, 12.70616)]

IndexedFaceSet937.coord = Coordinate938

Shape934.geometry = IndexedFaceSet937

Scene12.children.append(Shape934)
Shape939 = x3d.Shape()
Appearance940 = x3d.Appearance()
Material941 = x3d.Material()
Material941.ambientIntensity = 0
Material941.diffuseColor = [0.5,0.5,0.5]
Material941.shininess = 0

Appearance940.material = Material941

Shape939.appearance = Appearance940
IndexedFaceSet942 = x3d.IndexedFaceSet()
IndexedFaceSet942.solid = False
IndexedFaceSet942.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet942.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate943 = x3d.Coordinate()
Coordinate943.point = [(17.98084, 0.075, 11.86397),(17.58685, 0.075, 11.94428),(17.70861, 0.075, 10.52842),(17.31462, 0.075, 10.60872)]

IndexedFaceSet942.coord = Coordinate943

Shape939.geometry = IndexedFaceSet942

Scene12.children.append(Shape939)
Shape944 = x3d.Shape()
Appearance945 = x3d.Appearance()
Material946 = x3d.Material()
Material946.ambientIntensity = 0
Material946.diffuseColor = [0.5,0.5,0.5]
Material946.shininess = 0

Appearance945.material = Material946

Shape944.appearance = Appearance945
IndexedFaceSet947 = x3d.IndexedFaceSet()
IndexedFaceSet947.solid = False
IndexedFaceSet947.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet947.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate948 = x3d.Coordinate()
Coordinate948.point = [(16.90104, 0.075, 10.69303),(17.09803, 0.075, 10.65287),(17.29502, 0.075, 10.61272),(17.03715, 0.075, 11.36081),(17.23415, 0.075, 11.32065),(17.43114, 0.075, 11.2805),(17.17327, 0.075, 12.02858),(17.37026, 0.075, 11.98843),(17.56726, 0.075, 11.94827)]

IndexedFaceSet947.coord = Coordinate948

Shape944.geometry = IndexedFaceSet947

Scene12.children.append(Shape944)
Shape949 = x3d.Shape()
Appearance950 = x3d.Appearance()
Material951 = x3d.Material()
Material951.ambientIntensity = 0
Material951.diffuseColor = [0.5,0.5,0.5]
Material951.shininess = 0

Appearance950.material = Material951

Shape949.appearance = Appearance950
IndexedFaceSet952 = x3d.IndexedFaceSet()
IndexedFaceSet952.solid = False
IndexedFaceSet952.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet952.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate953 = x3d.Coordinate()
Coordinate953.point = [(16.89704, 0.075, 10.67343),(16.76292, 0.075, 10.01545),(17.30083, 0.075, 10.59112),(17.16671, 0.075, 9.933146),(17.70461, 0.075, 10.50882),(17.57049, 0.075, 9.85084)]

IndexedFaceSet952.coord = Coordinate953

Shape949.geometry = IndexedFaceSet952

Scene12.children.append(Shape949)
Shape954 = x3d.Shape()
Appearance955 = x3d.Appearance()
Material956 = x3d.Material()
Material956.ambientIntensity = 0
Material956.diffuseColor = [0.5,0.5,0.5]
Material956.shininess = 0

Appearance955.material = Material956

Shape954.appearance = Appearance955
IndexedFaceSet957 = x3d.IndexedFaceSet()
IndexedFaceSet957.solid = False
IndexedFaceSet957.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet957.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate958 = x3d.Coordinate()
Coordinate958.point = [(17.43238, 0.075, 9.173264),(17.5665, 0.075, 9.831243),(16.62481, 0.075, 9.337874),(16.75893, 0.075, 9.995854)]

IndexedFaceSet957.coord = Coordinate958

Shape954.geometry = IndexedFaceSet957

Scene12.children.append(Shape954)
Shape959 = x3d.Shape()
Appearance960 = x3d.Appearance()
Material961 = x3d.Material()
Material961.ambientIntensity = 0
Material961.diffuseColor = [0.5,0.5,0.5]
Material961.shininess = 0

Appearance960.material = Material961

Shape959.appearance = Appearance960
IndexedFaceSet962 = x3d.IndexedFaceSet()
IndexedFaceSet962.solid = False
IndexedFaceSet962.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet962.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate963 = x3d.Coordinate()
Coordinate963.point = [(16.76216, 0.075, 7.898419),(17.15615, 0.075, 7.81811),(16.89828, 0.075, 8.566196),(17.29227, 0.075, 8.485888),(17.0344, 0.075, 9.233974),(17.42838, 0.075, 9.153666)]

IndexedFaceSet962.coord = Coordinate963

Shape959.geometry = IndexedFaceSet962

Scene12.children.append(Shape959)
Shape964 = x3d.Shape()
Appearance965 = x3d.Appearance()
Material966 = x3d.Material()
Material966.ambientIntensity = 0
Material966.diffuseColor = [0.5,0.5,0.5]
Material966.shininess = 0

Appearance965.material = Material966

Shape964.appearance = Appearance965
IndexedFaceSet967 = x3d.IndexedFaceSet()
IndexedFaceSet967.solid = False
IndexedFaceSet967.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet967.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate968 = x3d.Coordinate()
Coordinate968.point = [(16.34858, 0.075, 7.982722),(16.74257, 0.075, 7.902413),(16.62081, 0.075, 9.318277),(17.0148, 0.075, 9.237969)]

IndexedFaceSet967.coord = Coordinate968

Shape964.geometry = IndexedFaceSet967

Scene12.children.append(Shape964)
Shape969 = x3d.Shape()
Appearance970 = x3d.Appearance()
Material971 = x3d.Material()
Material971.ambientIntensity = 0
Material971.diffuseColor = [0.5,0.5,0.5]
Material971.shininess = 0

Appearance970.material = Material971

Shape969.appearance = Appearance970
IndexedFaceSet972 = x3d.IndexedFaceSet()
IndexedFaceSet972.solid = False
IndexedFaceSet972.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet972.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate973 = x3d.Coordinate()
Coordinate973.point = [(17.01804, 0.075, 7.140534),(17.15216, 0.075, 7.798513),(16.21047, 0.075, 7.305145),(16.34459, 0.075, 7.963125)]

IndexedFaceSet972.coord = Coordinate973

Shape969.geometry = IndexedFaceSet972

Scene12.children.append(Shape969)
Shape974 = x3d.Shape()
Appearance975 = x3d.Appearance()
Material976 = x3d.Material()
Material976.ambientIntensity = 0
Material976.diffuseColor = [0.5,0.5,0.5]
Material976.shininess = 0

Appearance975.material = Material976

Shape974.appearance = Appearance975
IndexedFaceSet977 = x3d.IndexedFaceSet()
IndexedFaceSet977.solid = False
IndexedFaceSet977.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet977.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate978 = x3d.Coordinate()
Coordinate978.point = [(16.20647, 0.075, 7.285548),(16.07235, 0.075, 6.627569),(17.01404, 0.075, 7.120937),(16.87992, 0.075, 6.462957)]

IndexedFaceSet977.coord = Coordinate978

Shape974.geometry = IndexedFaceSet977

Scene12.children.append(Shape974)
Shape979 = x3d.Shape()
Appearance980 = x3d.Appearance()
Material981 = x3d.Material()
Material981.ambientIntensity = 0
Material981.diffuseColor = [0.5,0.5,0.5]
Material981.shininess = 0

Appearance980.material = Material981

Shape979.appearance = Appearance980
IndexedFaceSet982 = x3d.IndexedFaceSet()
IndexedFaceSet982.solid = False
IndexedFaceSet982.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet982.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate983 = x3d.Coordinate()
Coordinate983.point = [(16.20971, 0.075, 5.188113),(16.4067, 0.075, 5.147959),(16.60369, 0.075, 5.107805),(16.34583, 0.075, 5.855891),(16.54282, 0.075, 5.815737),(16.73981, 0.075, 5.775583),(16.48194, 0.075, 6.523669),(16.67893, 0.075, 6.483515),(16.87593, 0.075, 6.44336)]

IndexedFaceSet982.coord = Coordinate983

Shape979.geometry = IndexedFaceSet982

Scene12.children.append(Shape979)
Shape984 = x3d.Shape()
Appearance985 = x3d.Appearance()
Material986 = x3d.Material()
Material986.ambientIntensity = 0
Material986.diffuseColor = [0.5,0.5,0.5]
Material986.shininess = 0

Appearance985.material = Material986

Shape984.appearance = Appearance985
IndexedFaceSet987 = x3d.IndexedFaceSet()
IndexedFaceSet987.solid = False
IndexedFaceSet987.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet987.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate988 = x3d.Coordinate()
Coordinate988.point = [(15.79612, 0.075, 5.272416),(15.99312, 0.075, 5.232262),(16.19011, 0.075, 5.192108),(15.93224, 0.075, 5.940194),(16.12923, 0.075, 5.90004),(16.32623, 0.075, 5.859886),(16.06836, 0.075, 6.607972),(16.26535, 0.075, 6.567818),(16.46234, 0.075, 6.527664)]

IndexedFaceSet987.coord = Coordinate988

Shape984.geometry = IndexedFaceSet987

Scene12.children.append(Shape984)
Shape989 = x3d.Shape()
Appearance990 = x3d.Appearance()
Material991 = x3d.Material()
Material991.ambientIntensity = 0
Material991.diffuseColor = [0.5,0.5,0.5]
Material991.shininess = 0

Appearance990.material = Material991

Shape989.appearance = Appearance990
IndexedFaceSet992 = x3d.IndexedFaceSet()
IndexedFaceSet992.solid = False
IndexedFaceSet992.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet992.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate993 = x3d.Coordinate()
Coordinate993.point = [(15.79213, 0.075, 5.252819),(15.65801, 0.075, 4.59484),(16.5997, 0.075, 5.088208),(16.46558, 0.075, 4.430228)]

IndexedFaceSet992.coord = Coordinate993

Shape989.geometry = IndexedFaceSet992

Scene12.children.append(Shape989)
Shape994 = x3d.Shape()
Appearance995 = x3d.Appearance()
Material996 = x3d.Material()
Material996.ambientIntensity = 0
Material996.diffuseColor = [0.5,0.5,0.5]
Material996.shininess = 0

Appearance995.material = Material996

Shape994.appearance = Appearance995
IndexedFaceSet997 = x3d.IndexedFaceSet()
IndexedFaceSet997.solid = False
IndexedFaceSet997.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet997.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate998 = x3d.Coordinate()
Coordinate998.point = [(16.32747, 0.075, 3.752652),(16.46159, 0.075, 4.410631),(15.5199, 0.075, 3.917263),(15.65402, 0.075, 4.575243)]

IndexedFaceSet997.coord = Coordinate998

Shape994.geometry = IndexedFaceSet997

Scene12.children.append(Shape994)
Shape999 = x3d.Shape()
Appearance1000 = x3d.Appearance()
Material1001 = x3d.Material()
Material1001.ambientIntensity = 0
Material1001.diffuseColor = [0.5,0.5,0.5]
Material1001.shininess = 0

Appearance1000.material = Material1001

Shape999.appearance = Appearance1000
IndexedFaceSet1002 = x3d.IndexedFaceSet()
IndexedFaceSet1002.solid = False
IndexedFaceSet1002.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1002.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1003 = x3d.Coordinate()
Coordinate1003.point = [(15.65725, 0.075, 2.477808),(16.05124, 0.075, 2.397499),(15.92949, 0.075, 3.813363),(16.32347, 0.075, 3.733055)]

IndexedFaceSet1002.coord = Coordinate1003

Shape999.geometry = IndexedFaceSet1002

Scene12.children.append(Shape999)
Shape1004 = x3d.Shape()
Appearance1005 = x3d.Appearance()
Material1006 = x3d.Material()
Material1006.ambientIntensity = 0
Material1006.diffuseColor = [0.5,0.5,0.5]
Material1006.shininess = 0

Appearance1005.material = Material1006

Shape1004.appearance = Appearance1005
IndexedFaceSet1007 = x3d.IndexedFaceSet()
IndexedFaceSet1007.solid = False
IndexedFaceSet1007.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1007.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1008 = x3d.Coordinate()
Coordinate1008.point = [(15.24367, 0.075, 2.56211),(15.63765, 0.075, 2.481802),(15.5159, 0.075, 3.897666),(15.90989, 0.075, 3.817358)]

IndexedFaceSet1007.coord = Coordinate1008

Shape1004.geometry = IndexedFaceSet1007

Scene12.children.append(Shape1004)
Shape1009 = x3d.Shape()
Appearance1010 = x3d.Appearance()
Material1011 = x3d.Material()
Material1011.ambientIntensity = 0
Material1011.diffuseColor = [0.5,0.5,0.5]
Material1011.shininess = 0

Appearance1010.material = Material1011

Shape1009.appearance = Appearance1010
IndexedFaceSet1012 = x3d.IndexedFaceSet()
IndexedFaceSet1012.solid = False
IndexedFaceSet1012.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1012.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1013 = x3d.Coordinate()
Coordinate1013.point = [(20.07841, 0.075, 28.39432),(20.27541, 0.075, 28.35416),(20.4724, 0.075, 28.31401),(20.21453, 0.075, 29.0621),(20.41153, 0.075, 29.02194),(20.60852, 0.075, 28.98179),(20.35065, 0.075, 29.72987),(20.54764, 0.075, 29.68972),(20.74464, 0.075, 29.64956)]

IndexedFaceSet1012.coord = Coordinate1013

Shape1009.geometry = IndexedFaceSet1012

Scene12.children.append(Shape1009)
Shape1014 = x3d.Shape()
Appearance1015 = x3d.Appearance()
Material1016 = x3d.Material()
Material1016.ambientIntensity = 0
Material1016.diffuseColor = [0.5,0.5,0.5]
Material1016.shininess = 0

Appearance1015.material = Material1016

Shape1014.appearance = Appearance1015
IndexedFaceSet1017 = x3d.IndexedFaceSet()
IndexedFaceSet1017.solid = False
IndexedFaceSet1017.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1017.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1018 = x3d.Coordinate()
Coordinate1018.point = [(20.19218, 0.075, 26.93926),(19.79819, 0.075, 27.01957),(19.91995, 0.075, 25.6037),(19.52596, 0.075, 25.68401)]

IndexedFaceSet1017.coord = Coordinate1018

Shape1014.geometry = IndexedFaceSet1017

Scene12.children.append(Shape1014)
Shape1019 = x3d.Shape()
Appearance1020 = x3d.Appearance()
Material1021 = x3d.Material()
Material1021.ambientIntensity = 0
Material1021.diffuseColor = [0.5,0.5,0.5]
Material1021.shininess = 0

Appearance1020.material = Material1021

Shape1019.appearance = Appearance1020
IndexedFaceSet1022 = x3d.IndexedFaceSet()
IndexedFaceSet1022.solid = False
IndexedFaceSet1022.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1022.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1023 = x3d.Coordinate()
Coordinate1023.point = [(19.10838, 0.075, 25.74872),(18.97426, 0.075, 25.09074),(19.91595, 0.075, 25.58411),(19.78183, 0.075, 24.92613)]

IndexedFaceSet1022.coord = Coordinate1023

Shape1019.geometry = IndexedFaceSet1022

Scene12.children.append(Shape1019)
Shape1024 = x3d.Shape()
Appearance1025 = x3d.Appearance()
Material1026 = x3d.Material()
Material1026.ambientIntensity = 0
Material1026.diffuseColor = [0.5,0.5,0.5]
Material1026.shininess = 0

Appearance1025.material = Material1026

Shape1024.appearance = Appearance1025
IndexedFaceSet1027 = x3d.IndexedFaceSet()
IndexedFaceSet1027.solid = False
IndexedFaceSet1027.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1027.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1028 = x3d.Coordinate()
Coordinate1028.point = [(19.64372, 0.075, 24.24855),(19.77784, 0.075, 24.90653),(18.83615, 0.075, 24.41316),(18.97027, 0.075, 25.07114)]

IndexedFaceSet1027.coord = Coordinate1028

Shape1024.geometry = IndexedFaceSet1027

Scene12.children.append(Shape1024)
Shape1029 = x3d.Shape()
Appearance1030 = x3d.Appearance()
Material1031 = x3d.Material()
Material1031.ambientIntensity = 0
Material1031.diffuseColor = [0.5,0.5,0.5]
Material1031.shininess = 0

Appearance1030.material = Material1031

Shape1029.appearance = Appearance1030
IndexedFaceSet1032 = x3d.IndexedFaceSet()
IndexedFaceSet1032.solid = False
IndexedFaceSet1032.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1032.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1033 = x3d.Coordinate()
Coordinate1033.point = [(19.63972, 0.075, 24.22895),(19.24574, 0.075, 24.30926),(19.36749, 0.075, 22.8934),(18.9735, 0.075, 22.97371)]

IndexedFaceSet1032.coord = Coordinate1033

Shape1029.geometry = IndexedFaceSet1032

Scene12.children.append(Shape1029)
Shape1034 = x3d.Shape()
Appearance1035 = x3d.Appearance()
Material1036 = x3d.Material()
Material1036.ambientIntensity = 0
Material1036.diffuseColor = [0.5,0.5,0.5]
Material1036.shininess = 0

Appearance1035.material = Material1036

Shape1034.appearance = Appearance1035
IndexedFaceSet1037 = x3d.IndexedFaceSet()
IndexedFaceSet1037.solid = False
IndexedFaceSet1037.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1037.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1038 = x3d.Coordinate()
Coordinate1038.point = [(18.55992, 0.075, 23.05801),(18.75691, 0.075, 23.01785),(18.95391, 0.075, 22.9777),(18.69604, 0.075, 23.72579),(18.89303, 0.075, 23.68563),(19.09002, 0.075, 23.64548),(18.83215, 0.075, 24.39357),(19.02915, 0.075, 24.35341),(19.22614, 0.075, 24.31326)]

IndexedFaceSet1037.coord = Coordinate1038

Shape1034.geometry = IndexedFaceSet1037

Scene12.children.append(Shape1034)
Shape1039 = x3d.Shape()
Appearance1040 = x3d.Appearance()
Material1041 = x3d.Material()
Material1041.ambientIntensity = 0
Material1041.diffuseColor = [0.5,0.5,0.5]
Material1041.shininess = 0

Appearance1040.material = Material1041

Shape1039.appearance = Appearance1040
IndexedFaceSet1042 = x3d.IndexedFaceSet()
IndexedFaceSet1042.solid = False
IndexedFaceSet1042.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1042.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1043 = x3d.Coordinate()
Coordinate1043.point = [(18.55593, 0.075, 23.03841),(18.42181, 0.075, 22.38043),(19.3635, 0.075, 22.8738),(19.22938, 0.075, 22.21582)]

IndexedFaceSet1042.coord = Coordinate1043

Shape1039.geometry = IndexedFaceSet1042

Scene12.children.append(Shape1039)
Shape1044 = x3d.Shape()
Appearance1045 = x3d.Appearance()
Material1046 = x3d.Material()
Material1046.ambientIntensity = 0
Material1046.diffuseColor = [0.5,0.5,0.5]
Material1046.shininess = 0

Appearance1045.material = Material1046

Shape1044.appearance = Appearance1045
IndexedFaceSet1047 = x3d.IndexedFaceSet()
IndexedFaceSet1047.solid = False
IndexedFaceSet1047.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1047.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1048 = x3d.Coordinate()
Coordinate1048.point = [(19.09126, 0.075, 21.53824),(19.22538, 0.075, 22.19622),(18.28369, 0.075, 21.70286),(18.41781, 0.075, 22.36084)]

IndexedFaceSet1047.coord = Coordinate1048

Shape1044.geometry = IndexedFaceSet1047

Scene12.children.append(Shape1044)
Shape1049 = x3d.Shape()
Appearance1050 = x3d.Appearance()
Material1051 = x3d.Material()
Material1051.ambientIntensity = 0
Material1051.diffuseColor = [0.5,0.5,0.5]
Material1051.shininess = 0

Appearance1050.material = Material1051

Shape1049.appearance = Appearance1050
IndexedFaceSet1052 = x3d.IndexedFaceSet()
IndexedFaceSet1052.solid = False
IndexedFaceSet1052.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1052.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1053 = x3d.Coordinate()
Coordinate1053.point = [(18.42105, 0.075, 20.2634),(18.81503, 0.075, 20.18309),(18.69328, 0.075, 21.59896),(19.08727, 0.075, 21.51865)]

IndexedFaceSet1052.coord = Coordinate1053

Shape1049.geometry = IndexedFaceSet1052

Scene12.children.append(Shape1049)
Shape1054 = x3d.Shape()
Appearance1055 = x3d.Appearance()
Material1056 = x3d.Material()
Material1056.ambientIntensity = 0
Material1056.diffuseColor = [0.5,0.5,0.5]
Material1056.shininess = 0

Appearance1055.material = Material1056

Shape1054.appearance = Appearance1055
IndexedFaceSet1057 = x3d.IndexedFaceSet()
IndexedFaceSet1057.solid = False
IndexedFaceSet1057.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1057.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1058 = x3d.Coordinate()
Coordinate1058.point = [(18.00746, 0.075, 20.3477),(18.40145, 0.075, 20.2674),(18.14358, 0.075, 21.01548),(18.53757, 0.075, 20.93517),(18.2797, 0.075, 21.68326),(18.67368, 0.075, 21.60295)]

IndexedFaceSet1057.coord = Coordinate1058

Shape1054.geometry = IndexedFaceSet1057

Scene12.children.append(Shape1054)
Shape1059 = x3d.Shape()
Appearance1060 = x3d.Appearance()
Material1061 = x3d.Material()
Material1061.ambientIntensity = 0
Material1061.diffuseColor = [0.5,0.5,0.5]
Material1061.shininess = 0

Appearance1060.material = Material1061

Shape1059.appearance = Appearance1060
IndexedFaceSet1062 = x3d.IndexedFaceSet()
IndexedFaceSet1062.solid = False
IndexedFaceSet1062.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1062.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1063 = x3d.Coordinate()
Coordinate1063.point = [(18.00347, 0.075, 20.32811),(17.86935, 0.075, 19.67013),(18.81104, 0.075, 20.1635),(18.67692, 0.075, 19.50552)]

IndexedFaceSet1062.coord = Coordinate1063

Shape1059.geometry = IndexedFaceSet1062

Scene12.children.append(Shape1059)
Shape1064 = x3d.Shape()
Appearance1065 = x3d.Appearance()
Material1066 = x3d.Material()
Material1066.ambientIntensity = 0
Material1066.diffuseColor = [0.5,0.5,0.5]
Material1066.shininess = 0

Appearance1065.material = Material1066

Shape1064.appearance = Appearance1065
IndexedFaceSet1067 = x3d.IndexedFaceSet()
IndexedFaceSet1067.solid = False
IndexedFaceSet1067.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1067.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1068 = x3d.Coordinate()
Coordinate1068.point = [(17.86535, 0.075, 19.65053),(17.73124, 0.075, 18.99255),(18.67293, 0.075, 19.48592),(18.53881, 0.075, 18.82794)]

IndexedFaceSet1067.coord = Coordinate1068

Shape1064.geometry = IndexedFaceSet1067

Scene12.children.append(Shape1064)
Shape1069 = x3d.Shape()
Appearance1070 = x3d.Appearance()
Material1071 = x3d.Material()
Material1071.ambientIntensity = 0
Material1071.diffuseColor = [0.5,0.5,0.5]
Material1071.shininess = 0

Appearance1070.material = Material1071

Shape1069.appearance = Appearance1070
IndexedFaceSet1072 = x3d.IndexedFaceSet()
IndexedFaceSet1072.solid = False
IndexedFaceSet1072.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1072.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1073 = x3d.Coordinate()
Coordinate1073.point = [(17.86859, 0.075, 17.55309),(18.06558, 0.075, 17.51294),(18.26258, 0.075, 17.47279),(18.00471, 0.075, 18.22087),(18.2017, 0.075, 18.18072),(18.39869, 0.075, 18.14056),(18.14083, 0.075, 18.88865),(18.33782, 0.075, 18.8485),(18.53481, 0.075, 18.80834)]

IndexedFaceSet1072.coord = Coordinate1073

Shape1069.geometry = IndexedFaceSet1072

Scene12.children.append(Shape1069)
Shape1074 = x3d.Shape()
Appearance1075 = x3d.Appearance()
Material1076 = x3d.Material()
Material1076.ambientIntensity = 0
Material1076.diffuseColor = [0.5,0.5,0.5]
Material1076.shininess = 0

Appearance1075.material = Material1076

Shape1074.appearance = Appearance1075
IndexedFaceSet1077 = x3d.IndexedFaceSet()
IndexedFaceSet1077.solid = False
IndexedFaceSet1077.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1077.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1078 = x3d.Coordinate()
Coordinate1078.point = [(18.12123, 0.075, 18.89264),(17.72724, 0.075, 18.97295),(17.849, 0.075, 17.55709),(17.45501, 0.075, 17.6374)]

IndexedFaceSet1077.coord = Coordinate1078

Shape1074.geometry = IndexedFaceSet1077

Scene12.children.append(Shape1074)
Shape1079 = x3d.Shape()
Appearance1080 = x3d.Appearance()
Material1081 = x3d.Material()
Material1081.ambientIntensity = 0
Material1081.diffuseColor = [0.5,0.5,0.5]
Material1081.shininess = 0

Appearance1080.material = Material1081

Shape1079.appearance = Appearance1080
IndexedFaceSet1082 = x3d.IndexedFaceSet()
IndexedFaceSet1082.solid = False
IndexedFaceSet1082.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1082.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1083 = x3d.Coordinate()
Coordinate1083.point = [(18.12446, 0.075, 16.79521),(18.25858, 0.075, 17.45319),(17.31689, 0.075, 16.95982),(17.45101, 0.075, 17.6178)]

IndexedFaceSet1082.coord = Coordinate1083

Shape1079.geometry = IndexedFaceSet1082

Scene12.children.append(Shape1079)
Shape1084 = x3d.Shape()
Appearance1085 = x3d.Appearance()
Material1086 = x3d.Material()
Material1086.ambientIntensity = 0
Material1086.diffuseColor = [0.5,0.5,0.5]
Material1086.shininess = 0

Appearance1085.material = Material1086

Shape1084.appearance = Appearance1085
IndexedFaceSet1087 = x3d.IndexedFaceSet()
IndexedFaceSet1087.solid = False
IndexedFaceSet1087.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1087.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1088 = x3d.Coordinate()
Coordinate1088.point = [(17.3129, 0.075, 16.94022),(17.17878, 0.075, 16.28225),(18.12047, 0.075, 16.77561),(17.98635, 0.075, 16.11763)]

IndexedFaceSet1087.coord = Coordinate1088

Shape1084.geometry = IndexedFaceSet1087

Scene12.children.append(Shape1084)
Shape1089 = x3d.Shape()
Appearance1090 = x3d.Appearance()
Material1091 = x3d.Material()
Material1091.ambientIntensity = 0
Material1091.diffuseColor = [0.5,0.5,0.5]
Material1091.shininess = 0

Appearance1090.material = Material1091

Shape1089.appearance = Appearance1090
IndexedFaceSet1092 = x3d.IndexedFaceSet()
IndexedFaceSet1092.solid = False
IndexedFaceSet1092.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1092.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1093 = x3d.Coordinate()
Coordinate1093.point = [(17.98236, 0.075, 16.09804),(17.58837, 0.075, 16.17834),(17.84624, 0.075, 15.43026),(17.45225, 0.075, 15.51057),(17.71012, 0.075, 14.76248),(17.31614, 0.075, 14.84279)]

IndexedFaceSet1092.coord = Coordinate1093

Shape1089.geometry = IndexedFaceSet1092

Scene12.children.append(Shape1089)
Shape1094 = x3d.Shape()
Appearance1095 = x3d.Appearance()
Material1096 = x3d.Material()
Material1096.ambientIntensity = 0
Material1096.diffuseColor = [0.5,0.5,0.5]
Material1096.shininess = 0

Appearance1095.material = Material1096

Shape1094.appearance = Appearance1095
IndexedFaceSet1097 = x3d.IndexedFaceSet()
IndexedFaceSet1097.solid = False
IndexedFaceSet1097.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1097.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1098 = x3d.Coordinate()
Coordinate1098.point = [(17.56877, 0.075, 16.18234),(17.37178, 0.075, 16.22249),(17.17479, 0.075, 16.26265),(17.43266, 0.075, 15.51456),(17.23566, 0.075, 15.55472),(17.03867, 0.075, 15.59487),(17.29654, 0.075, 14.84678),(17.09954, 0.075, 14.88694),(16.90255, 0.075, 14.92709)]

IndexedFaceSet1097.coord = Coordinate1098

Shape1094.geometry = IndexedFaceSet1097

Scene12.children.append(Shape1094)
Shape1099 = x3d.Shape()
Appearance1100 = x3d.Appearance()
Material1101 = x3d.Material()
Material1101.ambientIntensity = 0
Material1101.diffuseColor = [0.5,0.5,0.5]
Material1101.shininess = 0

Appearance1100.material = Material1101

Shape1099.appearance = Appearance1100
IndexedFaceSet1102 = x3d.IndexedFaceSet()
IndexedFaceSet1102.solid = False
IndexedFaceSet1102.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1102.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1103 = x3d.Coordinate()
Coordinate1103.point = [(17.57201, 0.075, 14.0849),(17.70613, 0.075, 14.74288),(16.76444, 0.075, 14.24952),(16.89856, 0.075, 14.9075)]

IndexedFaceSet1102.coord = Coordinate1103

Shape1099.geometry = IndexedFaceSet1102

Scene12.children.append(Shape1099)
Shape1104 = x3d.Shape()
Appearance1105 = x3d.Appearance()
Material1106 = x3d.Material()
Material1106.ambientIntensity = 0
Material1106.diffuseColor = [0.5,0.5,0.5]
Material1106.shininess = 0

Appearance1105.material = Material1106

Shape1104.appearance = Appearance1105
IndexedFaceSet1107 = x3d.IndexedFaceSet()
IndexedFaceSet1107.solid = False
IndexedFaceSet1107.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1107.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1108 = x3d.Coordinate()
Coordinate1108.point = [(16.76044, 0.075, 14.22992),(16.62632, 0.075, 13.57194),(17.16423, 0.075, 14.14761),(17.03011, 0.075, 13.48963),(17.56801, 0.075, 14.06531),(17.4339, 0.075, 13.40733)]

IndexedFaceSet1107.coord = Coordinate1108

Shape1104.geometry = IndexedFaceSet1107

Scene12.children.append(Shape1104)
Shape1109 = x3d.Shape()
Appearance1110 = x3d.Appearance()
Material1111 = x3d.Material()
Material1111.ambientIntensity = 0
Material1111.diffuseColor = [0.5,0.5,0.5]
Material1111.shininess = 0

Appearance1110.material = Material1111

Shape1109.appearance = Appearance1110
IndexedFaceSet1112 = x3d.IndexedFaceSet()
IndexedFaceSet1112.solid = False
IndexedFaceSet1112.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1112.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1113 = x3d.Coordinate()
Coordinate1113.point = [(16.76368, 0.075, 12.13248),(17.15767, 0.075, 12.05217),(17.03591, 0.075, 13.46804),(17.4299, 0.075, 13.38773)]

IndexedFaceSet1112.coord = Coordinate1113

Shape1109.geometry = IndexedFaceSet1112

Scene12.children.append(Shape1109)
Shape1114 = x3d.Shape()
Appearance1115 = x3d.Appearance()
Material1116 = x3d.Material()
Material1116.ambientIntensity = 0
Material1116.diffuseColor = [0.5,0.5,0.5]
Material1116.shininess = 0

Appearance1115.material = Material1116

Shape1114.appearance = Appearance1115
IndexedFaceSet1117 = x3d.IndexedFaceSet()
IndexedFaceSet1117.solid = False
IndexedFaceSet1117.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1117.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1118 = x3d.Coordinate()
Coordinate1118.point = [(16.3501, 0.075, 12.21679),(16.54709, 0.075, 12.17663),(16.74408, 0.075, 12.13648),(16.48621, 0.075, 12.88456),(16.68321, 0.075, 12.84441),(16.8802, 0.075, 12.80426),(16.62233, 0.075, 13.55234),(16.81932, 0.075, 13.51219),(17.01632, 0.075, 13.47203)]

IndexedFaceSet1117.coord = Coordinate1118

Shape1114.geometry = IndexedFaceSet1117

Scene12.children.append(Shape1114)
Shape1119 = x3d.Shape()
Appearance1120 = x3d.Appearance()
Material1121 = x3d.Material()
Material1121.ambientIntensity = 0
Material1121.diffuseColor = [0.5,0.5,0.5]
Material1121.shininess = 0

Appearance1120.material = Material1121

Shape1119.appearance = Appearance1120
IndexedFaceSet1122 = x3d.IndexedFaceSet()
IndexedFaceSet1122.solid = False
IndexedFaceSet1122.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1122.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1123 = x3d.Coordinate()
Coordinate1123.point = [(16.3461, 0.075, 12.19719),(16.21198, 0.075, 11.53921),(16.74989, 0.075, 12.11488),(16.61577, 0.075, 11.4569),(17.15367, 0.075, 12.03258),(17.01955, 0.075, 11.3746)]

IndexedFaceSet1122.coord = Coordinate1123

Shape1119.geometry = IndexedFaceSet1122

Scene12.children.append(Shape1119)
Shape1124 = x3d.Shape()
Appearance1125 = x3d.Appearance()
Material1126 = x3d.Material()
Material1126.ambientIntensity = 0
Material1126.diffuseColor = [0.5,0.5,0.5]
Material1126.shininess = 0

Appearance1125.material = Material1126

Shape1124.appearance = Appearance1125
IndexedFaceSet1127 = x3d.IndexedFaceSet()
IndexedFaceSet1127.solid = False
IndexedFaceSet1127.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1127.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1128 = x3d.Coordinate()
Coordinate1128.point = [(16.20799, 0.075, 11.51961),(16.07387, 0.075, 10.86163),(16.61177, 0.075, 11.43731),(16.47765, 0.075, 10.77933),(17.01556, 0.075, 11.355),(16.88144, 0.075, 10.69702)]

IndexedFaceSet1127.coord = Coordinate1128

Shape1124.geometry = IndexedFaceSet1127

Scene12.children.append(Shape1124)
Shape1129 = x3d.Shape()
Appearance1130 = x3d.Appearance()
Material1131 = x3d.Material()
Material1131.ambientIntensity = 0
Material1131.diffuseColor = [0.5,0.5,0.5]
Material1131.shininess = 0

Appearance1130.material = Material1131

Shape1129.appearance = Appearance1130
IndexedFaceSet1132 = x3d.IndexedFaceSet()
IndexedFaceSet1132.solid = False
IndexedFaceSet1132.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1132.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1133 = x3d.Coordinate()
Coordinate1133.point = [(16.87744, 0.075, 10.67743),(16.48346, 0.075, 10.75773),(16.74133, 0.075, 10.00965),(16.34734, 0.075, 10.08996),(16.60521, 0.075, 9.341869),(16.21122, 0.075, 9.422177)]

IndexedFaceSet1132.coord = Coordinate1133

Shape1129.geometry = IndexedFaceSet1132

Scene12.children.append(Shape1129)
Shape1134 = x3d.Shape()
Appearance1135 = x3d.Appearance()
Material1136 = x3d.Material()
Material1136.ambientIntensity = 0
Material1136.diffuseColor = [0.5,0.5,0.5]
Material1136.shininess = 0

Appearance1135.material = Material1136

Shape1134.appearance = Appearance1135
IndexedFaceSet1137 = x3d.IndexedFaceSet()
IndexedFaceSet1137.solid = False
IndexedFaceSet1137.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1137.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1138 = x3d.Coordinate()
Coordinate1138.point = [(15.79764, 0.075, 9.506481),(16.19163, 0.075, 9.426172),(15.93376, 0.075, 10.17426),(16.32774, 0.075, 10.09395),(16.06987, 0.075, 10.84204),(16.46386, 0.075, 10.76173)]

IndexedFaceSet1137.coord = Coordinate1138

Shape1134.geometry = IndexedFaceSet1137

Scene12.children.append(Shape1134)
Shape1139 = x3d.Shape()
Appearance1140 = x3d.Appearance()
Material1141 = x3d.Material()
Material1141.ambientIntensity = 0
Material1141.diffuseColor = [0.5,0.5,0.5]
Material1141.shininess = 0

Appearance1140.material = Material1141

Shape1139.appearance = Appearance1140
IndexedFaceSet1142 = x3d.IndexedFaceSet()
IndexedFaceSet1142.solid = False
IndexedFaceSet1142.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1142.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1143 = x3d.Coordinate()
Coordinate1143.point = [(16.4671, 0.075, 8.664293),(16.60122, 0.075, 9.322272),(16.06331, 0.075, 8.746598),(16.19743, 0.075, 9.404578),(15.65953, 0.075, 8.828904),(15.79364, 0.075, 9.486884)]

IndexedFaceSet1142.coord = Coordinate1143

Shape1139.geometry = IndexedFaceSet1142

Scene12.children.append(Shape1139)
Shape1144 = x3d.Shape()
Appearance1145 = x3d.Appearance()
Material1146 = x3d.Material()
Material1146.ambientIntensity = 0
Material1146.diffuseColor = [0.5,0.5,0.5]
Material1146.shininess = 0

Appearance1145.material = Material1146

Shape1144.appearance = Appearance1145
IndexedFaceSet1147 = x3d.IndexedFaceSet()
IndexedFaceSet1147.solid = False
IndexedFaceSet1147.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1147.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1148 = x3d.Coordinate()
Coordinate1148.point = [(16.32898, 0.075, 7.986716),(16.4631, 0.075, 8.644696),(15.52141, 0.075, 8.151328),(15.65553, 0.075, 8.809307)]

IndexedFaceSet1147.coord = Coordinate1148

Shape1144.geometry = IndexedFaceSet1147

Scene12.children.append(Shape1144)
Shape1149 = x3d.Shape()
Appearance1150 = x3d.Appearance()
Material1151 = x3d.Material()
Material1151.ambientIntensity = 0
Material1151.diffuseColor = [0.5,0.5,0.5]
Material1151.shininess = 0

Appearance1150.material = Material1151

Shape1149.appearance = Appearance1150
IndexedFaceSet1152 = x3d.IndexedFaceSet()
IndexedFaceSet1152.solid = False
IndexedFaceSet1152.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1152.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1153 = x3d.Coordinate()
Coordinate1153.point = [(15.65877, 0.075, 6.711872),(16.05276, 0.075, 6.631564),(15.79488, 0.075, 7.37965),(16.18887, 0.075, 7.299342),(15.931, 0.075, 8.047428),(16.32499, 0.075, 7.967119)]

IndexedFaceSet1152.coord = Coordinate1153

Shape1149.geometry = IndexedFaceSet1152

Scene12.children.append(Shape1149)
Shape1154 = x3d.Shape()
Appearance1155 = x3d.Appearance()
Material1156 = x3d.Material()
Material1156.ambientIntensity = 0
Material1156.diffuseColor = [0.5,0.5,0.5]
Material1156.shininess = 0

Appearance1155.material = Material1156

Shape1154.appearance = Appearance1155
IndexedFaceSet1157 = x3d.IndexedFaceSet()
IndexedFaceSet1157.solid = False
IndexedFaceSet1157.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1157.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1158 = x3d.Coordinate()
Coordinate1158.point = [(15.24518, 0.075, 6.796175),(15.44218, 0.075, 6.756021),(15.63917, 0.075, 6.715867),(15.3813, 0.075, 7.463953),(15.57829, 0.075, 7.423799),(15.77529, 0.075, 7.383645),(15.51742, 0.075, 8.131731),(15.71441, 0.075, 8.091577),(15.9114, 0.075, 8.051422)]

IndexedFaceSet1157.coord = Coordinate1158

Shape1154.geometry = IndexedFaceSet1157

Scene12.children.append(Shape1154)
Shape1159 = x3d.Shape()
Appearance1160 = x3d.Appearance()
Material1161 = x3d.Material()
Material1161.ambientIntensity = 0
Material1161.diffuseColor = [0.5,0.5,0.5]
Material1161.shininess = 0

Appearance1160.material = Material1161

Shape1159.appearance = Appearance1160
IndexedFaceSet1162 = x3d.IndexedFaceSet()
IndexedFaceSet1162.solid = False
IndexedFaceSet1162.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1162.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1163 = x3d.Coordinate()
Coordinate1163.point = [(15.91464, 0.075, 5.953987),(16.04876, 0.075, 6.611967),(15.10707, 0.075, 6.118598),(15.24119, 0.075, 6.776578)]

IndexedFaceSet1162.coord = Coordinate1163

Shape1159.geometry = IndexedFaceSet1162

Scene12.children.append(Shape1159)
Shape1164 = x3d.Shape()
Appearance1165 = x3d.Appearance()
Material1166 = x3d.Material()
Material1166.ambientIntensity = 0
Material1166.diffuseColor = [0.5,0.5,0.5]
Material1166.shininess = 0

Appearance1165.material = Material1166

Shape1164.appearance = Appearance1165
IndexedFaceSet1167 = x3d.IndexedFaceSet()
IndexedFaceSet1167.solid = False
IndexedFaceSet1167.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet1167.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate1168 = x3d.Coordinate()
Coordinate1168.point = [(15.10308, 0.075, 6.099001),(15.03602, 0.075, 5.770012),(14.96896, 0.075, 5.441022),(15.91065, 0.075, 5.93439),(15.84359, 0.075, 5.605401),(15.77653, 0.075, 5.276411)]

IndexedFaceSet1167.coord = Coordinate1168

Shape1164.geometry = IndexedFaceSet1167

Scene12.children.append(Shape1164)
Shape1169 = x3d.Shape()
Appearance1170 = x3d.Appearance()
Material1171 = x3d.Material()
Material1171.ambientIntensity = 0
Material1171.diffuseColor = [0.5,0.5,0.5]
Material1171.shininess = 0

Appearance1170.material = Material1171

Shape1169.appearance = Appearance1170
IndexedFaceSet1172 = x3d.IndexedFaceSet()
IndexedFaceSet1172.solid = False
IndexedFaceSet1172.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1172.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1173 = x3d.Coordinate()
Coordinate1173.point = [(15.77253, 0.075, 5.256814),(15.37854, 0.075, 5.337122),(15.63642, 0.075, 4.589036),(15.24243, 0.075, 4.669344),(15.5003, 0.075, 3.921258),(15.10631, 0.075, 4.001566)]

IndexedFaceSet1172.coord = Coordinate1173

Shape1169.geometry = IndexedFaceSet1172

Scene12.children.append(Shape1169)
Shape1174 = x3d.Shape()
Appearance1175 = x3d.Appearance()
Material1176 = x3d.Material()
Material1176.ambientIntensity = 0
Material1176.diffuseColor = [0.5,0.5,0.5]
Material1176.shininess = 0

Appearance1175.material = Material1176

Shape1174.appearance = Appearance1175
IndexedFaceSet1177 = x3d.IndexedFaceSet()
IndexedFaceSet1177.solid = False
IndexedFaceSet1177.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1177.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1178 = x3d.Coordinate()
Coordinate1178.point = [(14.69273, 0.075, 4.085869),(14.88972, 0.075, 4.045715),(15.08671, 0.075, 4.005561),(14.82884, 0.075, 4.753647),(15.02584, 0.075, 4.713493),(15.22283, 0.075, 4.673339),(14.96496, 0.075, 5.421425),(15.16195, 0.075, 5.381271),(15.35895, 0.075, 5.341117)]

IndexedFaceSet1177.coord = Coordinate1178

Shape1174.geometry = IndexedFaceSet1177

Scene12.children.append(Shape1174)
Shape1179 = x3d.Shape()
Appearance1180 = x3d.Appearance()
Material1181 = x3d.Material()
Material1181.ambientIntensity = 0
Material1181.diffuseColor = [0.5,0.5,0.5]
Material1181.shininess = 0

Appearance1180.material = Material1181

Shape1179.appearance = Appearance1180
IndexedFaceSet1182 = x3d.IndexedFaceSet()
IndexedFaceSet1182.solid = False
IndexedFaceSet1182.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1182.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1183 = x3d.Coordinate()
Coordinate1183.point = [(15.36218, 0.075, 3.243681),(15.4963, 0.075, 3.901661),(14.9584, 0.075, 3.325987),(15.09252, 0.075, 3.983967),(14.55461, 0.075, 3.408293),(14.68873, 0.075, 4.066272)]

IndexedFaceSet1182.coord = Coordinate1183

Shape1179.geometry = IndexedFaceSet1182

Scene12.children.append(Shape1179)
Shape1184 = x3d.Shape()
Appearance1185 = x3d.Appearance()
Material1186 = x3d.Material()
Material1186.ambientIntensity = 0
Material1186.diffuseColor = [0.5,0.5,0.5]
Material1186.shininess = 0

Appearance1185.material = Material1186

Shape1184.appearance = Appearance1185
IndexedFaceSet1187 = x3d.IndexedFaceSet()
IndexedFaceSet1187.solid = False
IndexedFaceSet1187.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1187.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1188 = x3d.Coordinate()
Coordinate1188.point = [(14.55062, 0.075, 3.388696),(14.4165, 0.075, 2.730716),(15.35819, 0.075, 3.224084),(15.22407, 0.075, 2.566105)]

IndexedFaceSet1187.coord = Coordinate1188

Shape1184.geometry = IndexedFaceSet1187

Scene12.children.append(Shape1184)
Shape1189 = x3d.Shape()
Appearance1190 = x3d.Appearance()
Material1191 = x3d.Material()
Material1191.ambientIntensity = 0
Material1191.diffuseColor = [0.5,0.5,0.5]
Material1191.shininess = 0

Appearance1190.material = Material1191

Shape1189.appearance = Appearance1190
IndexedFaceSet1192 = x3d.IndexedFaceSet()
IndexedFaceSet1192.solid = False
IndexedFaceSet1192.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1192.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1193 = x3d.Coordinate()
Coordinate1193.point = [(17.86687, 0.075, 23.88459),(17.73275, 0.075, 23.22662),(18.27066, 0.075, 23.80229),(18.13654, 0.075, 23.14431),(18.67444, 0.075, 23.71998),(18.54032, 0.075, 23.062)]

IndexedFaceSet1192.coord = Coordinate1193

Shape1189.geometry = IndexedFaceSet1192

Scene12.children.append(Shape1189)
Shape1194 = x3d.Shape()
Appearance1195 = x3d.Appearance()
Material1196 = x3d.Material()
Material1196.ambientIntensity = 0
Material1196.diffuseColor = [0.5,0.5,0.5]
Material1196.shininess = 0

Appearance1195.material = Material1196

Shape1194.appearance = Appearance1195
IndexedFaceSet1197 = x3d.IndexedFaceSet()
IndexedFaceSet1197.solid = False
IndexedFaceSet1197.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1197.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1198 = x3d.Coordinate()
Coordinate1198.point = [(17.87011, 0.075, 21.78716),(18.0671, 0.075, 21.74701),(18.2641, 0.075, 21.70685),(18.00622, 0.075, 22.45494),(18.20322, 0.075, 22.41478),(18.40021, 0.075, 22.37463),(18.14234, 0.075, 23.12271),(18.33933, 0.075, 23.08256),(18.53633, 0.075, 23.04241)]

IndexedFaceSet1197.coord = Coordinate1198

Shape1194.geometry = IndexedFaceSet1197

Scene12.children.append(Shape1194)
Shape1199 = x3d.Shape()
Appearance1200 = x3d.Appearance()
Material1201 = x3d.Material()
Material1201.ambientIntensity = 0
Material1201.diffuseColor = [0.5,0.5,0.5]
Material1201.shininess = 0

Appearance1200.material = Material1201

Shape1199.appearance = Appearance1200
IndexedFaceSet1202 = x3d.IndexedFaceSet()
IndexedFaceSet1202.solid = False
IndexedFaceSet1202.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1202.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1203 = x3d.Coordinate()
Coordinate1203.point = [(18.12274, 0.075, 23.12671),(17.92575, 0.075, 23.16686),(17.72876, 0.075, 23.20702),(17.98663, 0.075, 22.45893),(17.78963, 0.075, 22.49909),(17.59264, 0.075, 22.53924),(17.85051, 0.075, 21.79115),(17.65352, 0.075, 21.83131),(17.45652, 0.075, 21.87146)]

IndexedFaceSet1202.coord = Coordinate1203

Shape1199.geometry = IndexedFaceSet1202

Scene12.children.append(Shape1199)
Shape1204 = x3d.Shape()
Appearance1205 = x3d.Appearance()
Material1206 = x3d.Material()
Material1206.ambientIntensity = 0
Material1206.diffuseColor = [0.5,0.5,0.5]
Material1206.shininess = 0

Appearance1205.material = Material1206

Shape1204.appearance = Appearance1205
IndexedFaceSet1207 = x3d.IndexedFaceSet()
IndexedFaceSet1207.solid = False
IndexedFaceSet1207.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1207.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1208 = x3d.Coordinate()
Coordinate1208.point = [(17.45253, 0.075, 21.85187),(17.31841, 0.075, 21.19389),(17.85631, 0.075, 21.76956),(17.72219, 0.075, 21.11158),(18.2601, 0.075, 21.68725),(18.12598, 0.075, 21.02927)]

IndexedFaceSet1207.coord = Coordinate1208

Shape1204.geometry = IndexedFaceSet1207

Scene12.children.append(Shape1204)
Shape1209 = x3d.Shape()
Appearance1210 = x3d.Appearance()
Material1211 = x3d.Material()
Material1211.ambientIntensity = 0
Material1211.diffuseColor = [0.5,0.5,0.5]
Material1211.shininess = 0

Appearance1210.material = Material1211

Shape1209.appearance = Appearance1210
IndexedFaceSet1212 = x3d.IndexedFaceSet()
IndexedFaceSet1212.solid = False
IndexedFaceSet1212.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1212.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1213 = x3d.Coordinate()
Coordinate1213.point = [(17.98787, 0.075, 20.3517),(18.12199, 0.075, 21.00968),(17.1803, 0.075, 20.51631),(17.31441, 0.075, 21.17429)]

IndexedFaceSet1212.coord = Coordinate1213

Shape1209.geometry = IndexedFaceSet1212

Scene12.children.append(Shape1209)
Shape1214 = x3d.Shape()
Appearance1215 = x3d.Appearance()
Material1216 = x3d.Material()
Material1216.ambientIntensity = 0
Material1216.diffuseColor = [0.5,0.5,0.5]
Material1216.shininess = 0

Appearance1215.material = Material1216

Shape1214.appearance = Appearance1215
IndexedFaceSet1217 = x3d.IndexedFaceSet()
IndexedFaceSet1217.solid = False
IndexedFaceSet1217.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1217.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1218 = x3d.Coordinate()
Coordinate1218.point = [(17.98387, 0.075, 20.3321),(17.78688, 0.075, 20.37226),(17.58989, 0.075, 20.41241),(17.84776, 0.075, 19.66432),(17.65076, 0.075, 19.70448),(17.45377, 0.075, 19.74463),(17.71164, 0.075, 18.99655),(17.51464, 0.075, 19.0367),(17.31765, 0.075, 19.07685)]

IndexedFaceSet1217.coord = Coordinate1218

Shape1214.geometry = IndexedFaceSet1217

Scene12.children.append(Shape1214)
Shape1219 = x3d.Shape()
Appearance1220 = x3d.Appearance()
Material1221 = x3d.Material()
Material1221.ambientIntensity = 0
Material1221.diffuseColor = [0.5,0.5,0.5]
Material1221.shininess = 0

Appearance1220.material = Material1221

Shape1219.appearance = Appearance1220
IndexedFaceSet1222 = x3d.IndexedFaceSet()
IndexedFaceSet1222.solid = False
IndexedFaceSet1222.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1222.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1223 = x3d.Coordinate()
Coordinate1223.point = [(16.90407, 0.075, 19.16116),(17.10106, 0.075, 19.121),(17.29805, 0.075, 19.08085),(17.04018, 0.075, 19.82894),(17.23718, 0.075, 19.78878),(17.43417, 0.075, 19.74863),(17.1763, 0.075, 20.49671),(17.37329, 0.075, 20.45656),(17.57029, 0.075, 20.4164)]

IndexedFaceSet1222.coord = Coordinate1223

Shape1219.geometry = IndexedFaceSet1222

Scene12.children.append(Shape1219)
Shape1224 = x3d.Shape()
Appearance1225 = x3d.Appearance()
Material1226 = x3d.Material()
Material1226.ambientIntensity = 0
Material1226.diffuseColor = [0.5,0.5,0.5]
Material1226.shininess = 0

Appearance1225.material = Material1226

Shape1224.appearance = Appearance1225
IndexedFaceSet1227 = x3d.IndexedFaceSet()
IndexedFaceSet1227.solid = False
IndexedFaceSet1227.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1227.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1228 = x3d.Coordinate()
Coordinate1228.point = [(17.57352, 0.075, 18.31897),(17.70764, 0.075, 18.97695),(17.16974, 0.075, 18.40127),(17.30386, 0.075, 19.05925),(16.76595, 0.075, 18.48358),(16.90007, 0.075, 19.14156)]

IndexedFaceSet1227.coord = Coordinate1228

Shape1224.geometry = IndexedFaceSet1227

Scene12.children.append(Shape1224)
Shape1229 = x3d.Shape()
Appearance1230 = x3d.Appearance()
Material1231 = x3d.Material()
Material1231.ambientIntensity = 0
Material1231.diffuseColor = [0.5,0.5,0.5]
Material1231.shininess = 0

Appearance1230.material = Material1231

Shape1229.appearance = Appearance1230
IndexedFaceSet1232 = x3d.IndexedFaceSet()
IndexedFaceSet1232.solid = False
IndexedFaceSet1232.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1232.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1233 = x3d.Coordinate()
Coordinate1233.point = [(17.43541, 0.075, 17.64139),(17.56953, 0.075, 18.29937),(17.03163, 0.075, 17.7237),(17.16574, 0.075, 18.38168),(16.62784, 0.075, 17.806),(16.76196, 0.075, 18.46398)]

IndexedFaceSet1232.coord = Coordinate1233

Shape1229.geometry = IndexedFaceSet1232

Scene12.children.append(Shape1229)
Shape1234 = x3d.Shape()
Appearance1235 = x3d.Appearance()
Material1236 = x3d.Material()
Material1236.ambientIntensity = 0
Material1236.diffuseColor = [0.5,0.5,0.5]
Material1236.shininess = 0

Appearance1235.material = Material1236

Shape1234.appearance = Appearance1235
IndexedFaceSet1237 = x3d.IndexedFaceSet()
IndexedFaceSet1237.solid = False
IndexedFaceSet1237.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1237.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1238 = x3d.Coordinate()
Coordinate1238.point = [(16.7652, 0.075, 16.36655),(16.96219, 0.075, 16.32639),(17.15918, 0.075, 16.28624),(16.90131, 0.075, 17.03433),(17.09831, 0.075, 16.99417),(17.2953, 0.075, 16.95402),(17.03743, 0.075, 17.7021),(17.23442, 0.075, 17.66195),(17.43142, 0.075, 17.6218)]

IndexedFaceSet1237.coord = Coordinate1238

Shape1234.geometry = IndexedFaceSet1237

Scene12.children.append(Shape1234)
Shape1239 = x3d.Shape()
Appearance1240 = x3d.Appearance()
Material1241 = x3d.Material()
Material1241.ambientIntensity = 0
Material1241.diffuseColor = [0.5,0.5,0.5]
Material1241.shininess = 0

Appearance1240.material = Material1241

Shape1239.appearance = Appearance1240
IndexedFaceSet1242 = x3d.IndexedFaceSet()
IndexedFaceSet1242.solid = False
IndexedFaceSet1242.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1242.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1243 = x3d.Coordinate()
Coordinate1243.point = [(16.35161, 0.075, 16.45085),(16.7456, 0.075, 16.37054),(16.48773, 0.075, 17.11863),(16.88172, 0.075, 17.03832),(16.62385, 0.075, 17.78641),(17.01783, 0.075, 17.7061)]

IndexedFaceSet1242.coord = Coordinate1243

Shape1239.geometry = IndexedFaceSet1242

Scene12.children.append(Shape1239)
Shape1244 = x3d.Shape()
Appearance1245 = x3d.Appearance()
Material1246 = x3d.Material()
Material1246.ambientIntensity = 0
Material1246.diffuseColor = [0.5,0.5,0.5]
Material1246.shininess = 0

Appearance1245.material = Material1246

Shape1244.appearance = Appearance1245
IndexedFaceSet1247 = x3d.IndexedFaceSet()
IndexedFaceSet1247.solid = False
IndexedFaceSet1247.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1247.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1248 = x3d.Coordinate()
Coordinate1248.point = [(17.02107, 0.075, 15.60866),(17.15519, 0.075, 16.26664),(16.2135, 0.075, 15.77327),(16.34762, 0.075, 16.43125)]

IndexedFaceSet1247.coord = Coordinate1248

Shape1244.geometry = IndexedFaceSet1247

Scene12.children.append(Shape1244)
Shape1249 = x3d.Shape()
Appearance1250 = x3d.Appearance()
Material1251 = x3d.Material()
Material1251.ambientIntensity = 0
Material1251.diffuseColor = [0.5,0.5,0.5]
Material1251.shininess = 0

Appearance1250.material = Material1251

Shape1249.appearance = Appearance1250
IndexedFaceSet1252 = x3d.IndexedFaceSet()
IndexedFaceSet1252.solid = False
IndexedFaceSet1252.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1252.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1253 = x3d.Coordinate()
Coordinate1253.point = [(16.2095, 0.075, 15.75368),(16.07538, 0.075, 15.0957),(16.61329, 0.075, 15.67137),(16.47917, 0.075, 15.01339),(17.01707, 0.075, 15.58907),(16.88296, 0.075, 14.93109)]

IndexedFaceSet1252.coord = Coordinate1253

Shape1249.geometry = IndexedFaceSet1252

Scene12.children.append(Shape1249)
Shape1254 = x3d.Shape()
Appearance1255 = x3d.Appearance()
Material1256 = x3d.Material()
Material1256.ambientIntensity = 0
Material1256.diffuseColor = [0.5,0.5,0.5]
Material1256.shininess = 0

Appearance1255.material = Material1256

Shape1254.appearance = Appearance1255
IndexedFaceSet1257 = x3d.IndexedFaceSet()
IndexedFaceSet1257.solid = False
IndexedFaceSet1257.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1257.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1258 = x3d.Coordinate()
Coordinate1258.point = [(16.87896, 0.075, 14.91149),(16.48497, 0.075, 14.9918),(16.60673, 0.075, 13.57593),(16.21274, 0.075, 13.65624)]

IndexedFaceSet1257.coord = Coordinate1258

Shape1254.geometry = IndexedFaceSet1257

Scene12.children.append(Shape1254)
Shape1259 = x3d.Shape()
Appearance1260 = x3d.Appearance()
Material1261 = x3d.Material()
Material1261.ambientIntensity = 0
Material1261.diffuseColor = [0.5,0.5,0.5]
Material1261.shininess = 0

Appearance1260.material = Material1261

Shape1259.appearance = Appearance1260
IndexedFaceSet1262 = x3d.IndexedFaceSet()
IndexedFaceSet1262.solid = False
IndexedFaceSet1262.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1262.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1263 = x3d.Coordinate()
Coordinate1263.point = [(16.46538, 0.075, 14.99579),(16.07139, 0.075, 15.0761),(16.19314, 0.075, 13.66024),(15.79916, 0.075, 13.74055)]

IndexedFaceSet1262.coord = Coordinate1263

Shape1259.geometry = IndexedFaceSet1262

Scene12.children.append(Shape1259)
Shape1264 = x3d.Shape()
Appearance1265 = x3d.Appearance()
Material1266 = x3d.Material()
Material1266.ambientIntensity = 0
Material1266.diffuseColor = [0.5,0.5,0.5]
Material1266.shininess = 0

Appearance1265.material = Material1266

Shape1264.appearance = Appearance1265
IndexedFaceSet1267 = x3d.IndexedFaceSet()
IndexedFaceSet1267.solid = False
IndexedFaceSet1267.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1267.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1268 = x3d.Coordinate()
Coordinate1268.point = [(16.46861, 0.075, 12.89836),(16.60273, 0.075, 13.55634),(15.66104, 0.075, 13.06297),(15.79516, 0.075, 13.72095)]

IndexedFaceSet1267.coord = Coordinate1268

Shape1264.geometry = IndexedFaceSet1267

Scene12.children.append(Shape1264)
Shape1269 = x3d.Shape()
Appearance1270 = x3d.Appearance()
Material1271 = x3d.Material()
Material1271.ambientIntensity = 0
Material1271.diffuseColor = [0.5,0.5,0.5]
Material1271.shininess = 0

Appearance1270.material = Material1271

Shape1269.appearance = Appearance1270
IndexedFaceSet1272 = x3d.IndexedFaceSet()
IndexedFaceSet1272.solid = False
IndexedFaceSet1272.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1272.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1273 = x3d.Coordinate()
Coordinate1273.point = [(15.65705, 0.075, 13.04337),(15.52293, 0.075, 12.38539),(16.06083, 0.075, 12.96107),(15.92671, 0.075, 12.30309),(16.46462, 0.075, 12.87876),(16.3305, 0.075, 12.22078)]

IndexedFaceSet1272.coord = Coordinate1273

Shape1269.geometry = IndexedFaceSet1272

Scene12.children.append(Shape1269)
Shape1274 = x3d.Shape()
Appearance1275 = x3d.Appearance()
Material1276 = x3d.Material()
Material1276.ambientIntensity = 0
Material1276.diffuseColor = [0.5,0.5,0.5]
Material1276.shininess = 0

Appearance1275.material = Material1276

Shape1274.appearance = Appearance1275
IndexedFaceSet1277 = x3d.IndexedFaceSet()
IndexedFaceSet1277.solid = False
IndexedFaceSet1277.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1277.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1278 = x3d.Coordinate()
Coordinate1278.point = [(16.3265, 0.075, 12.20118),(15.93252, 0.075, 12.28149),(16.05427, 0.075, 10.86563),(15.66028, 0.075, 10.94594)]

IndexedFaceSet1277.coord = Coordinate1278

Shape1274.geometry = IndexedFaceSet1277

Scene12.children.append(Shape1274)
Shape1279 = x3d.Shape()
Appearance1280 = x3d.Appearance()
Material1281 = x3d.Material()
Material1281.ambientIntensity = 0
Material1281.diffuseColor = [0.5,0.5,0.5]
Material1281.shininess = 0

Appearance1280.material = Material1281

Shape1279.appearance = Appearance1280
IndexedFaceSet1282 = x3d.IndexedFaceSet()
IndexedFaceSet1282.solid = False
IndexedFaceSet1282.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1282.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1283 = x3d.Coordinate()
Coordinate1283.point = [(15.91292, 0.075, 12.28549),(15.51893, 0.075, 12.3658),(15.64069, 0.075, 10.94993),(15.2467, 0.075, 11.03024)]

IndexedFaceSet1282.coord = Coordinate1283

Shape1279.geometry = IndexedFaceSet1282

Scene12.children.append(Shape1279)
Shape1284 = x3d.Shape()
Appearance1285 = x3d.Appearance()
Material1286 = x3d.Material()
Material1286.ambientIntensity = 0
Material1286.diffuseColor = [0.5,0.5,0.5]
Material1286.shininess = 0

Appearance1285.material = Material1286

Shape1284.appearance = Appearance1285
IndexedFaceSet1287 = x3d.IndexedFaceSet()
IndexedFaceSet1287.solid = False
IndexedFaceSet1287.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1287.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1288 = x3d.Coordinate()
Coordinate1288.point = [(15.24271, 0.075, 11.01064),(15.10859, 0.075, 10.35266),(16.05028, 0.075, 10.84603),(15.91616, 0.075, 10.18805)]

IndexedFaceSet1287.coord = Coordinate1288

Shape1284.geometry = IndexedFaceSet1287

Scene12.children.append(Shape1284)
Shape1289 = x3d.Shape()
Appearance1290 = x3d.Appearance()
Material1291 = x3d.Material()
Material1291.ambientIntensity = 0
Material1291.diffuseColor = [0.5,0.5,0.5]
Material1291.shininess = 0

Appearance1290.material = Material1291

Shape1289.appearance = Appearance1290
IndexedFaceSet1292 = x3d.IndexedFaceSet()
IndexedFaceSet1292.solid = False
IndexedFaceSet1292.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1292.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1293 = x3d.Coordinate()
Coordinate1293.point = [(15.10459, 0.075, 10.33307),(14.97047, 0.075, 9.675087),(15.91216, 0.075, 10.16846),(15.77804, 0.075, 9.510475)]

IndexedFaceSet1292.coord = Coordinate1293

Shape1289.geometry = IndexedFaceSet1292

Scene12.children.append(Shape1289)
Shape1294 = x3d.Shape()
Appearance1295 = x3d.Appearance()
Material1296 = x3d.Material()
Material1296.ambientIntensity = 0
Material1296.diffuseColor = [0.5,0.5,0.5]
Material1296.shininess = 0

Appearance1295.material = Material1296

Shape1294.appearance = Appearance1295
IndexedFaceSet1297 = x3d.IndexedFaceSet()
IndexedFaceSet1297.solid = False
IndexedFaceSet1297.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1297.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1298 = x3d.Coordinate()
Coordinate1298.point = [(15.77405, 0.075, 9.490878),(15.38006, 0.075, 9.571187),(15.50181, 0.075, 8.155322),(15.10783, 0.075, 8.235631)]

IndexedFaceSet1297.coord = Coordinate1298

Shape1294.geometry = IndexedFaceSet1297

Scene12.children.append(Shape1294)
Shape1299 = x3d.Shape()
Appearance1300 = x3d.Appearance()
Material1301 = x3d.Material()
Material1301.ambientIntensity = 0
Material1301.diffuseColor = [0.5,0.5,0.5]
Material1301.shininess = 0

Appearance1300.material = Material1301

Shape1299.appearance = Appearance1300
IndexedFaceSet1302 = x3d.IndexedFaceSet()
IndexedFaceSet1302.solid = False
IndexedFaceSet1302.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1302.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1303 = x3d.Coordinate()
Coordinate1303.point = [(15.36046, 0.075, 9.575181),(15.16347, 0.075, 9.615335),(14.96648, 0.075, 9.65549),(15.22435, 0.075, 8.907403),(15.02735, 0.075, 8.947557),(14.83036, 0.075, 8.987712),(15.08823, 0.075, 8.239626),(14.89124, 0.075, 8.279779),(14.69424, 0.075, 8.319934)]

IndexedFaceSet1302.coord = Coordinate1303

Shape1299.geometry = IndexedFaceSet1302

Scene12.children.append(Shape1299)
Shape1304 = x3d.Shape()
Appearance1305 = x3d.Appearance()
Material1306 = x3d.Material()
Material1306.ambientIntensity = 0
Material1306.diffuseColor = [0.5,0.5,0.5]
Material1306.shininess = 0

Appearance1305.material = Material1306

Shape1304.appearance = Appearance1305
IndexedFaceSet1307 = x3d.IndexedFaceSet()
IndexedFaceSet1307.solid = False
IndexedFaceSet1307.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1307.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1308 = x3d.Coordinate()
Coordinate1308.point = [(14.69025, 0.075, 8.300337),(14.55613, 0.075, 7.642357),(15.49782, 0.075, 8.135725),(15.3637, 0.075, 7.477746)]

IndexedFaceSet1307.coord = Coordinate1308

Shape1304.geometry = IndexedFaceSet1307

Scene12.children.append(Shape1304)
Shape1309 = x3d.Shape()
Appearance1310 = x3d.Appearance()
Material1311 = x3d.Material()
Material1311.ambientIntensity = 0
Material1311.diffuseColor = [0.5,0.5,0.5]
Material1311.shininess = 0

Appearance1310.material = Material1311

Shape1309.appearance = Appearance1310
IndexedFaceSet1312 = x3d.IndexedFaceSet()
IndexedFaceSet1312.solid = False
IndexedFaceSet1312.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1312.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1313 = x3d.Coordinate()
Coordinate1313.point = [(14.55214, 0.075, 7.62276),(14.41802, 0.075, 6.964781),(15.35971, 0.075, 7.458149),(15.22559, 0.075, 6.800169)]

IndexedFaceSet1312.coord = Coordinate1313

Shape1309.geometry = IndexedFaceSet1312

Scene12.children.append(Shape1309)
Shape1314 = x3d.Shape()
Appearance1315 = x3d.Appearance()
Material1316 = x3d.Material()
Material1316.ambientIntensity = 0
Material1316.diffuseColor = [0.5,0.5,0.5]
Material1316.shininess = 0

Appearance1315.material = Material1316

Shape1314.appearance = Appearance1315
IndexedFaceSet1317 = x3d.IndexedFaceSet()
IndexedFaceSet1317.solid = False
IndexedFaceSet1317.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1317.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1318 = x3d.Coordinate()
Coordinate1318.point = [(14.55537, 0.075, 5.525325),(14.94936, 0.075, 5.445017),(14.82761, 0.075, 6.860881),(15.22159, 0.075, 6.780572)]

IndexedFaceSet1317.coord = Coordinate1318

Shape1314.geometry = IndexedFaceSet1317

Scene12.children.append(Shape1314)
Shape1319 = x3d.Shape()
Appearance1320 = x3d.Appearance()
Material1321 = x3d.Material()
Material1321.ambientIntensity = 0
Material1321.diffuseColor = [0.5,0.5,0.5]
Material1321.shininess = 0

Appearance1320.material = Material1321

Shape1319.appearance = Appearance1320
IndexedFaceSet1322 = x3d.IndexedFaceSet()
IndexedFaceSet1322.solid = False
IndexedFaceSet1322.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1322.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1323 = x3d.Coordinate()
Coordinate1323.point = [(14.14179, 0.075, 5.609628),(14.53578, 0.075, 5.52932),(14.41402, 0.075, 6.945184),(14.80801, 0.075, 6.864876)]

IndexedFaceSet1322.coord = Coordinate1323

Shape1319.geometry = IndexedFaceSet1322

Scene12.children.append(Shape1319)
Shape1324 = x3d.Shape()
Appearance1325 = x3d.Appearance()
Material1326 = x3d.Material()
Material1326.ambientIntensity = 0
Material1326.diffuseColor = [0.5,0.5,0.5]
Material1326.shininess = 0

Appearance1325.material = Material1326

Shape1324.appearance = Appearance1325
IndexedFaceSet1327 = x3d.IndexedFaceSet()
IndexedFaceSet1327.solid = False
IndexedFaceSet1327.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1327.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1328 = x3d.Coordinate()
Coordinate1328.point = [(14.13779, 0.075, 5.590031),(14.00367, 0.075, 4.932052),(14.94536, 0.075, 5.42542),(14.81124, 0.075, 4.76744)]

IndexedFaceSet1327.coord = Coordinate1328

Shape1324.geometry = IndexedFaceSet1327

Scene12.children.append(Shape1324)
Shape1329 = x3d.Shape()
Appearance1330 = x3d.Appearance()
Material1331 = x3d.Material()
Material1331.ambientIntensity = 0
Material1331.diffuseColor = [0.5,0.5,0.5]
Material1331.shininess = 0

Appearance1330.material = Material1331

Shape1329.appearance = Appearance1330
IndexedFaceSet1332 = x3d.IndexedFaceSet()
IndexedFaceSet1332.solid = False
IndexedFaceSet1332.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1332.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1333 = x3d.Coordinate()
Coordinate1333.point = [(13.99968, 0.075, 4.912455),(13.86556, 0.075, 4.254475),(14.80725, 0.075, 4.747843),(14.67313, 0.075, 4.089864)]

IndexedFaceSet1332.coord = Coordinate1333

Shape1329.geometry = IndexedFaceSet1332

Scene12.children.append(Shape1329)
Shape1334 = x3d.Shape()
Appearance1335 = x3d.Appearance()
Material1336 = x3d.Material()
Material1336.ambientIntensity = 0
Material1336.diffuseColor = [0.5,0.5,0.5]
Material1336.shininess = 0

Appearance1335.material = Material1336

Shape1334.appearance = Appearance1335
IndexedFaceSet1337 = x3d.IndexedFaceSet()
IndexedFaceSet1337.solid = False
IndexedFaceSet1337.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1337.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1338 = x3d.Coordinate()
Coordinate1338.point = [(14.00292, 0.075, 2.815019),(14.3969, 0.075, 2.734711),(14.13903, 0.075, 3.482797),(14.53302, 0.075, 3.402489),(14.27515, 0.075, 4.150575),(14.66914, 0.075, 4.070267)]

IndexedFaceSet1337.coord = Coordinate1338

Shape1334.geometry = IndexedFaceSet1337

Scene12.children.append(Shape1334)
Shape1339 = x3d.Shape()
Appearance1340 = x3d.Appearance()
Material1341 = x3d.Material()
Material1341.ambientIntensity = 0
Material1341.diffuseColor = [0.5,0.5,0.5]
Material1341.shininess = 0

Appearance1340.material = Material1341

Shape1339.appearance = Appearance1340
IndexedFaceSet1342 = x3d.IndexedFaceSet()
IndexedFaceSet1342.solid = False
IndexedFaceSet1342.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1342.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1343 = x3d.Coordinate()
Coordinate1343.point = [(13.58933, 0.075, 2.899323),(13.98332, 0.075, 2.819014),(13.86157, 0.075, 4.234878),(14.25555, 0.075, 4.15457)]

IndexedFaceSet1342.coord = Coordinate1343

Shape1339.geometry = IndexedFaceSet1342

Scene12.children.append(Shape1339)
Shape1344 = x3d.Shape()
Appearance1345 = x3d.Appearance()
Material1346 = x3d.Material()
Material1346.ambientIntensity = 0
Material1346.diffuseColor = [0.5,0.5,0.5]
Material1346.shininess = 0

Appearance1345.material = Material1346

Shape1344.appearance = Appearance1345
IndexedFaceSet1347 = x3d.IndexedFaceSet()
IndexedFaceSet1347.solid = False
IndexedFaceSet1347.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1347.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1348 = x3d.Coordinate()
Coordinate1348.point = [(16.90159, 0.075, 23.37562),(16.76747, 0.075, 22.71765),(17.70916, 0.075, 23.21101),(17.57504, 0.075, 22.55303)]

IndexedFaceSet1347.coord = Coordinate1348

Shape1344.geometry = IndexedFaceSet1347

Scene12.children.append(Shape1344)
Shape1349 = x3d.Shape()
Appearance1350 = x3d.Appearance()
Material1351 = x3d.Material()
Material1351.ambientIntensity = 0
Material1351.diffuseColor = [0.5,0.5,0.5]
Material1351.shininess = 0

Appearance1350.material = Material1351

Shape1349.appearance = Appearance1350
IndexedFaceSet1352 = x3d.IndexedFaceSet()
IndexedFaceSet1352.solid = False
IndexedFaceSet1352.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1352.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1353 = x3d.Coordinate()
Coordinate1353.point = [(16.76348, 0.075, 22.69805),(16.69641, 0.075, 22.36906),(16.62936, 0.075, 22.04007),(17.16726, 0.075, 22.61574),(17.1002, 0.075, 22.28675),(17.03314, 0.075, 21.95776),(17.57105, 0.075, 22.53344),(17.50399, 0.075, 22.20445),(17.43693, 0.075, 21.87546)]

IndexedFaceSet1352.coord = Coordinate1353

Shape1349.geometry = IndexedFaceSet1352

Scene12.children.append(Shape1349)
Shape1354 = x3d.Shape()
Appearance1355 = x3d.Appearance()
Material1356 = x3d.Material()
Material1356.ambientIntensity = 0
Material1356.diffuseColor = [0.5,0.5,0.5]
Material1356.shininess = 0

Appearance1355.material = Material1356

Shape1354.appearance = Appearance1355
IndexedFaceSet1357 = x3d.IndexedFaceSet()
IndexedFaceSet1357.solid = False
IndexedFaceSet1357.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1357.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1358 = x3d.Coordinate()
Coordinate1358.point = [(16.76671, 0.075, 20.60061),(16.96371, 0.075, 20.56046),(17.1607, 0.075, 20.5203),(16.90283, 0.075, 21.26839),(17.09982, 0.075, 21.22824),(17.29682, 0.075, 21.18808),(17.03895, 0.075, 21.93617),(17.23594, 0.075, 21.89602),(17.43293, 0.075, 21.85586)]

IndexedFaceSet1357.coord = Coordinate1358

Shape1354.geometry = IndexedFaceSet1357

Scene12.children.append(Shape1354)
Shape1359 = x3d.Shape()
Appearance1360 = x3d.Appearance()
Material1361 = x3d.Material()
Material1361.ambientIntensity = 0
Material1361.diffuseColor = [0.5,0.5,0.5]
Material1361.shininess = 0

Appearance1360.material = Material1361

Shape1359.appearance = Appearance1360
IndexedFaceSet1362 = x3d.IndexedFaceSet()
IndexedFaceSet1362.solid = False
IndexedFaceSet1362.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1362.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1363 = x3d.Coordinate()
Coordinate1363.point = [(16.35313, 0.075, 20.68492),(16.74711, 0.075, 20.60461),(16.48924, 0.075, 21.35269),(16.88323, 0.075, 21.27238),(16.62536, 0.075, 22.02047),(17.01935, 0.075, 21.94016)]

IndexedFaceSet1362.coord = Coordinate1363

Shape1359.geometry = IndexedFaceSet1362

Scene12.children.append(Shape1359)
Shape1364 = x3d.Shape()
Appearance1365 = x3d.Appearance()
Material1366 = x3d.Material()
Material1366.ambientIntensity = 0
Material1366.diffuseColor = [0.5,0.5,0.5]
Material1366.shininess = 0

Appearance1365.material = Material1366

Shape1364.appearance = Appearance1365
IndexedFaceSet1367 = x3d.IndexedFaceSet()
IndexedFaceSet1367.solid = False
IndexedFaceSet1367.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1367.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1368 = x3d.Coordinate()
Coordinate1368.point = [(16.34913, 0.075, 20.66532),(16.21501, 0.075, 20.00734),(17.1567, 0.075, 20.50071),(17.02258, 0.075, 19.84273)]

IndexedFaceSet1367.coord = Coordinate1368

Shape1364.geometry = IndexedFaceSet1367

Scene12.children.append(Shape1364)
Shape1369 = x3d.Shape()
Appearance1370 = x3d.Appearance()
Material1371 = x3d.Material()
Material1371.ambientIntensity = 0
Material1371.diffuseColor = [0.5,0.5,0.5]
Material1371.shininess = 0

Appearance1370.material = Material1371

Shape1369.appearance = Appearance1370
IndexedFaceSet1372 = x3d.IndexedFaceSet()
IndexedFaceSet1372.solid = False
IndexedFaceSet1372.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1372.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1373 = x3d.Coordinate()
Coordinate1373.point = [(16.21102, 0.075, 19.98774),(16.0769, 0.075, 19.32976),(17.01859, 0.075, 19.82313),(16.88447, 0.075, 19.16515)]

IndexedFaceSet1372.coord = Coordinate1373

Shape1369.geometry = IndexedFaceSet1372

Scene12.children.append(Shape1369)
Shape1374 = x3d.Shape()
Appearance1375 = x3d.Appearance()
Material1376 = x3d.Material()
Material1376.ambientIntensity = 0
Material1376.diffuseColor = [0.5,0.5,0.5]
Material1376.shininess = 0

Appearance1375.material = Material1376

Shape1374.appearance = Appearance1375
IndexedFaceSet1377 = x3d.IndexedFaceSet()
IndexedFaceSet1377.solid = False
IndexedFaceSet1377.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1377.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1378 = x3d.Coordinate()
Coordinate1378.point = [(16.21426, 0.075, 17.89031),(16.60824, 0.075, 17.81),(16.48649, 0.075, 19.22586),(16.88048, 0.075, 19.14555)]

IndexedFaceSet1377.coord = Coordinate1378

Shape1374.geometry = IndexedFaceSet1377

Scene12.children.append(Shape1374)
Shape1379 = x3d.Shape()
Appearance1380 = x3d.Appearance()
Material1381 = x3d.Material()
Material1381.ambientIntensity = 0
Material1381.diffuseColor = [0.5,0.5,0.5]
Material1381.shininess = 0

Appearance1380.material = Material1381

Shape1379.appearance = Appearance1380
IndexedFaceSet1382 = x3d.IndexedFaceSet()
IndexedFaceSet1382.solid = False
IndexedFaceSet1382.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1382.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1383 = x3d.Coordinate()
Coordinate1383.point = [(15.80067, 0.075, 17.97461),(16.19466, 0.075, 17.8943),(16.0729, 0.075, 19.31017),(16.46689, 0.075, 19.22986)]

IndexedFaceSet1382.coord = Coordinate1383

Shape1379.geometry = IndexedFaceSet1382

Scene12.children.append(Shape1379)
Shape1384 = x3d.Shape()
Appearance1385 = x3d.Appearance()
Material1386 = x3d.Material()
Material1386.ambientIntensity = 0
Material1386.diffuseColor = [0.5,0.5,0.5]
Material1386.shininess = 0

Appearance1385.material = Material1386

Shape1384.appearance = Appearance1385
IndexedFaceSet1387 = x3d.IndexedFaceSet()
IndexedFaceSet1387.solid = False
IndexedFaceSet1387.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1387.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1388 = x3d.Coordinate()
Coordinate1388.point = [(15.79668, 0.075, 17.95501),(15.66256, 0.075, 17.29703),(16.60425, 0.075, 17.7904),(16.47013, 0.075, 17.13242)]

IndexedFaceSet1387.coord = Coordinate1388

Shape1384.geometry = IndexedFaceSet1387

Scene12.children.append(Shape1384)
Shape1389 = x3d.Shape()
Appearance1390 = x3d.Appearance()
Material1391 = x3d.Material()
Material1391.ambientIntensity = 0
Material1391.diffuseColor = [0.5,0.5,0.5]
Material1391.shininess = 0

Appearance1390.material = Material1391

Shape1389.appearance = Appearance1390
IndexedFaceSet1392 = x3d.IndexedFaceSet()
IndexedFaceSet1392.solid = False
IndexedFaceSet1392.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1392.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1393 = x3d.Coordinate()
Coordinate1393.point = [(16.33201, 0.075, 16.45485),(16.46614, 0.075, 17.11283),(15.52444, 0.075, 16.61946),(15.65856, 0.075, 17.27744)]

IndexedFaceSet1392.coord = Coordinate1393

Shape1389.geometry = IndexedFaceSet1392

Scene12.children.append(Shape1389)
Shape1394 = x3d.Shape()
Appearance1395 = x3d.Appearance()
Material1396 = x3d.Material()
Material1396.ambientIntensity = 0
Material1396.diffuseColor = [0.5,0.5,0.5]
Material1396.shininess = 0

Appearance1395.material = Material1396

Shape1394.appearance = Appearance1395
IndexedFaceSet1397 = x3d.IndexedFaceSet()
IndexedFaceSet1397.solid = False
IndexedFaceSet1397.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1397.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1398 = x3d.Coordinate()
Coordinate1398.point = [(16.32802, 0.075, 16.43525),(16.13103, 0.075, 16.4754),(15.93403, 0.075, 16.51556),(16.1919, 0.075, 15.76747),(15.99491, 0.075, 15.80762),(15.79792, 0.075, 15.84778),(16.05579, 0.075, 15.09969),(15.85879, 0.075, 15.13985),(15.6618, 0.075, 15.18)]

IndexedFaceSet1397.coord = Coordinate1398

Shape1394.geometry = IndexedFaceSet1397

Scene12.children.append(Shape1394)
Shape1399 = x3d.Shape()
Appearance1400 = x3d.Appearance()
Material1401 = x3d.Material()
Material1401.ambientIntensity = 0
Material1401.diffuseColor = [0.5,0.5,0.5]
Material1401.shininess = 0

Appearance1400.material = Material1401

Shape1399.appearance = Appearance1400
IndexedFaceSet1402 = x3d.IndexedFaceSet()
IndexedFaceSet1402.solid = False
IndexedFaceSet1402.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1402.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1403 = x3d.Coordinate()
Coordinate1403.point = [(15.91444, 0.075, 16.51955),(15.52045, 0.075, 16.59986),(15.6422, 0.075, 15.184),(15.24822, 0.075, 15.2643)]

IndexedFaceSet1402.coord = Coordinate1403

Shape1399.geometry = IndexedFaceSet1402

Scene12.children.append(Shape1399)
Shape1404 = x3d.Shape()
Appearance1405 = x3d.Appearance()
Material1406 = x3d.Material()
Material1406.ambientIntensity = 0
Material1406.diffuseColor = [0.5,0.5,0.5]
Material1406.shininess = 0

Appearance1405.material = Material1406

Shape1404.appearance = Appearance1405
IndexedFaceSet1407 = x3d.IndexedFaceSet()
IndexedFaceSet1407.solid = False
IndexedFaceSet1407.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1407.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1408 = x3d.Coordinate()
Coordinate1408.point = [(15.91767, 0.075, 14.42212),(16.05179, 0.075, 15.0801),(15.1101, 0.075, 14.58673),(15.24422, 0.075, 15.24471)]

IndexedFaceSet1407.coord = Coordinate1408

Shape1404.geometry = IndexedFaceSet1407

Scene12.children.append(Shape1404)
Shape1409 = x3d.Shape()
Appearance1410 = x3d.Appearance()
Material1411 = x3d.Material()
Material1411.ambientIntensity = 0
Material1411.diffuseColor = [0.5,0.5,0.5]
Material1411.shininess = 0

Appearance1410.material = Material1411

Shape1409.appearance = Appearance1410
IndexedFaceSet1412 = x3d.IndexedFaceSet()
IndexedFaceSet1412.solid = False
IndexedFaceSet1412.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1412.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1413 = x3d.Coordinate()
Coordinate1413.point = [(15.77956, 0.075, 13.74454),(15.91368, 0.075, 14.40252),(14.97199, 0.075, 13.90915),(15.10611, 0.075, 14.56713)]

IndexedFaceSet1412.coord = Coordinate1413

Shape1409.geometry = IndexedFaceSet1412

Scene12.children.append(Shape1409)
Shape1414 = x3d.Shape()
Appearance1415 = x3d.Appearance()
Material1416 = x3d.Material()
Material1416.ambientIntensity = 0
Material1416.diffuseColor = [0.5,0.5,0.5]
Material1416.shininess = 0

Appearance1415.material = Material1416

Shape1414.appearance = Appearance1415
IndexedFaceSet1417 = x3d.IndexedFaceSet()
IndexedFaceSet1417.solid = False
IndexedFaceSet1417.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1417.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1418 = x3d.Coordinate()
Coordinate1418.point = [(15.77556, 0.075, 13.72494),(15.38158, 0.075, 13.80525),(15.63945, 0.075, 13.05717),(15.24546, 0.075, 13.13747),(15.50333, 0.075, 12.38939),(15.10934, 0.075, 12.4697)]

IndexedFaceSet1417.coord = Coordinate1418

Shape1414.geometry = IndexedFaceSet1417

Scene12.children.append(Shape1414)
Shape1419 = x3d.Shape()
Appearance1420 = x3d.Appearance()
Material1421 = x3d.Material()
Material1421.ambientIntensity = 0
Material1421.diffuseColor = [0.5,0.5,0.5]
Material1421.shininess = 0

Appearance1420.material = Material1421

Shape1419.appearance = Appearance1420
IndexedFaceSet1422 = x3d.IndexedFaceSet()
IndexedFaceSet1422.solid = False
IndexedFaceSet1422.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1422.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1423 = x3d.Coordinate()
Coordinate1423.point = [(14.69576, 0.075, 12.554),(15.08975, 0.075, 12.47369),(14.96799, 0.075, 13.88955),(15.36198, 0.075, 13.80925)]

IndexedFaceSet1422.coord = Coordinate1423

Shape1419.geometry = IndexedFaceSet1422

Scene12.children.append(Shape1419)
Shape1424 = x3d.Shape()
Appearance1425 = x3d.Appearance()
Material1426 = x3d.Material()
Material1426.ambientIntensity = 0
Material1426.diffuseColor = [0.5,0.5,0.5]
Material1426.shininess = 0

Appearance1425.material = Material1426

Shape1424.appearance = Appearance1425
IndexedFaceSet1427 = x3d.IndexedFaceSet()
IndexedFaceSet1427.solid = False
IndexedFaceSet1427.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet1427.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate1428 = x3d.Coordinate()
Coordinate1428.point = [(15.36522, 0.075, 11.71181),(15.43228, 0.075, 12.0408),(15.49934, 0.075, 12.36979),(14.55765, 0.075, 11.87642),(14.62471, 0.075, 12.20541),(14.69177, 0.075, 12.5344)]

IndexedFaceSet1427.coord = Coordinate1428

Shape1424.geometry = IndexedFaceSet1427

Scene12.children.append(Shape1424)
Shape1429 = x3d.Shape()
Appearance1430 = x3d.Appearance()
Material1431 = x3d.Material()
Material1431.ambientIntensity = 0
Material1431.diffuseColor = [0.5,0.5,0.5]
Material1431.shininess = 0

Appearance1430.material = Material1431

Shape1429.appearance = Appearance1430
IndexedFaceSet1432 = x3d.IndexedFaceSet()
IndexedFaceSet1432.solid = False
IndexedFaceSet1432.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1432.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1433 = x3d.Coordinate()
Coordinate1433.point = [(14.55365, 0.075, 11.85682),(14.41953, 0.075, 11.19885),(14.95744, 0.075, 11.77452),(14.82332, 0.075, 11.11654),(15.36122, 0.075, 11.69221),(15.2271, 0.075, 11.03423)]

IndexedFaceSet1432.coord = Coordinate1433

Shape1429.geometry = IndexedFaceSet1432

Scene12.children.append(Shape1429)
Shape1434 = x3d.Shape()
Appearance1435 = x3d.Appearance()
Material1436 = x3d.Material()
Material1436.ambientIntensity = 0
Material1436.diffuseColor = [0.5,0.5,0.5]
Material1436.shininess = 0

Appearance1435.material = Material1436

Shape1434.appearance = Appearance1435
IndexedFaceSet1437 = x3d.IndexedFaceSet()
IndexedFaceSet1437.solid = False
IndexedFaceSet1437.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1437.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1438 = x3d.Coordinate()
Coordinate1438.point = [(15.22311, 0.075, 11.01464),(14.82912, 0.075, 11.09495),(14.95088, 0.075, 9.679081),(14.55689, 0.075, 9.75939)]

IndexedFaceSet1437.coord = Coordinate1438

Shape1434.geometry = IndexedFaceSet1437

Scene12.children.append(Shape1434)
Shape1439 = x3d.Shape()
Appearance1440 = x3d.Appearance()
Material1441 = x3d.Material()
Material1441.ambientIntensity = 0
Material1441.diffuseColor = [0.5,0.5,0.5]
Material1441.shininess = 0

Appearance1440.material = Material1441

Shape1439.appearance = Appearance1440
IndexedFaceSet1442 = x3d.IndexedFaceSet()
IndexedFaceSet1442.solid = False
IndexedFaceSet1442.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1442.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1443 = x3d.Coordinate()
Coordinate1443.point = [(14.1433, 0.075, 9.843693),(14.53729, 0.075, 9.763384),(14.41554, 0.075, 11.17925),(14.80952, 0.075, 11.09894)]

IndexedFaceSet1442.coord = Coordinate1443

Shape1439.geometry = IndexedFaceSet1442

Scene12.children.append(Shape1439)
Shape1444 = x3d.Shape()
Appearance1445 = x3d.Appearance()
Material1446 = x3d.Material()
Material1446.ambientIntensity = 0
Material1446.diffuseColor = [0.5,0.5,0.5]
Material1446.shininess = 0

Appearance1445.material = Material1446

Shape1444.appearance = Appearance1445
IndexedFaceSet1447 = x3d.IndexedFaceSet()
IndexedFaceSet1447.solid = False
IndexedFaceSet1447.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet1447.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate1448 = x3d.Coordinate()
Coordinate1448.point = [(14.13931, 0.075, 9.824096),(14.07225, 0.075, 9.495106),(14.00519, 0.075, 9.166117),(14.94688, 0.075, 9.659484),(14.87982, 0.075, 9.330495),(14.81276, 0.075, 9.001505)]

IndexedFaceSet1447.coord = Coordinate1448

Shape1444.geometry = IndexedFaceSet1447

Scene12.children.append(Shape1444)
Shape1449 = x3d.Shape()
Appearance1450 = x3d.Appearance()
Material1451 = x3d.Material()
Material1451.ambientIntensity = 0
Material1451.diffuseColor = [0.5,0.5,0.5]
Material1451.shininess = 0

Appearance1450.material = Material1451

Shape1449.appearance = Appearance1450
IndexedFaceSet1452 = x3d.IndexedFaceSet()
IndexedFaceSet1452.solid = False
IndexedFaceSet1452.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1452.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1453 = x3d.Coordinate()
Coordinate1453.point = [(14.67465, 0.075, 8.323929),(14.74171, 0.075, 8.652918),(14.80877, 0.075, 8.981908),(14.27086, 0.075, 8.406234),(14.33792, 0.075, 8.735224),(14.40498, 0.075, 9.064214),(13.86708, 0.075, 8.48854),(13.93414, 0.075, 8.81753),(14.00119, 0.075, 9.14652)]

IndexedFaceSet1452.coord = Coordinate1453

Shape1449.geometry = IndexedFaceSet1452

Scene12.children.append(Shape1449)
Shape1454 = x3d.Shape()
Appearance1455 = x3d.Appearance()
Material1456 = x3d.Material()
Material1456.ambientIntensity = 0
Material1456.diffuseColor = [0.5,0.5,0.5]
Material1456.shininess = 0

Appearance1455.material = Material1456

Shape1454.appearance = Appearance1455
IndexedFaceSet1457 = x3d.IndexedFaceSet()
IndexedFaceSet1457.solid = False
IndexedFaceSet1457.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1457.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1458 = x3d.Coordinate()
Coordinate1458.point = [(14.67065, 0.075, 8.304332),(14.27667, 0.075, 8.38464),(14.39842, 0.075, 6.968776),(14.00443, 0.075, 7.049084)]

IndexedFaceSet1457.coord = Coordinate1458

Shape1454.geometry = IndexedFaceSet1457

Scene12.children.append(Shape1454)
Shape1459 = x3d.Shape()
Appearance1460 = x3d.Appearance()
Material1461 = x3d.Material()
Material1461.ambientIntensity = 0
Material1461.diffuseColor = [0.5,0.5,0.5]
Material1461.shininess = 0

Appearance1460.material = Material1461

Shape1459.appearance = Appearance1460
IndexedFaceSet1462 = x3d.IndexedFaceSet()
IndexedFaceSet1462.solid = False
IndexedFaceSet1462.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1462.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1463 = x3d.Coordinate()
Coordinate1463.point = [(13.59085, 0.075, 7.133387),(13.98483, 0.075, 7.053079),(13.72696, 0.075, 7.801165),(14.12095, 0.075, 7.720857),(13.86308, 0.075, 8.468943),(14.25707, 0.075, 8.388635)]

IndexedFaceSet1462.coord = Coordinate1463

Shape1459.geometry = IndexedFaceSet1462

Scene12.children.append(Shape1459)
Shape1464 = x3d.Shape()
Appearance1465 = x3d.Appearance()
Material1466 = x3d.Material()
Material1466.ambientIntensity = 0
Material1466.diffuseColor = [0.5,0.5,0.5]
Material1466.shininess = 0

Appearance1465.material = Material1466

Shape1464.appearance = Appearance1465
IndexedFaceSet1467 = x3d.IndexedFaceSet()
IndexedFaceSet1467.solid = False
IndexedFaceSet1467.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1467.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1468 = x3d.Coordinate()
Coordinate1468.point = [(14.2603, 0.075, 6.291199),(14.39442, 0.075, 6.949179),(13.85652, 0.075, 6.373505),(13.99064, 0.075, 7.031484),(13.45273, 0.075, 6.455811),(13.58685, 0.075, 7.11379)]

IndexedFaceSet1467.coord = Coordinate1468

Shape1464.geometry = IndexedFaceSet1467

Scene12.children.append(Shape1464)
Shape1469 = x3d.Shape()
Appearance1470 = x3d.Appearance()
Material1471 = x3d.Material()
Material1471.ambientIntensity = 0
Material1471.diffuseColor = [0.5,0.5,0.5]
Material1471.shininess = 0

Appearance1470.material = Material1471

Shape1469.appearance = Appearance1470
IndexedFaceSet1472 = x3d.IndexedFaceSet()
IndexedFaceSet1472.solid = False
IndexedFaceSet1472.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1472.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1473 = x3d.Coordinate()
Coordinate1473.point = [(13.44874, 0.075, 6.436213),(13.31462, 0.075, 5.778234),(13.85252, 0.075, 6.353908),(13.71841, 0.075, 5.695929),(14.25631, 0.075, 6.271602),(14.12219, 0.075, 5.613623)]

IndexedFaceSet1472.coord = Coordinate1473

Shape1469.geometry = IndexedFaceSet1472

Scene12.children.append(Shape1469)
Shape1474 = x3d.Shape()
Appearance1475 = x3d.Appearance()
Material1476 = x3d.Material()
Material1476.ambientIntensity = 0
Material1476.diffuseColor = [0.5,0.5,0.5]
Material1476.shininess = 0

Appearance1475.material = Material1476

Shape1474.appearance = Appearance1475
IndexedFaceSet1477 = x3d.IndexedFaceSet()
IndexedFaceSet1477.solid = False
IndexedFaceSet1477.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1477.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1478 = x3d.Coordinate()
Coordinate1478.point = [(14.1182, 0.075, 5.594026),(13.72421, 0.075, 5.674334),(13.98208, 0.075, 4.926248),(13.58809, 0.075, 5.006556),(13.84596, 0.075, 4.25847),(13.45198, 0.075, 4.338778)]

IndexedFaceSet1477.coord = Coordinate1478

Shape1474.geometry = IndexedFaceSet1477

Scene12.children.append(Shape1474)
Shape1479 = x3d.Shape()
Appearance1480 = x3d.Appearance()
Material1481 = x3d.Material()
Material1481.ambientIntensity = 0
Material1481.diffuseColor = [0.5,0.5,0.5]
Material1481.shininess = 0

Appearance1480.material = Material1481

Shape1479.appearance = Appearance1480
IndexedFaceSet1482 = x3d.IndexedFaceSet()
IndexedFaceSet1482.solid = False
IndexedFaceSet1482.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1482.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1483 = x3d.Coordinate()
Coordinate1483.point = [(13.03839, 0.075, 4.423081),(13.43238, 0.075, 4.342773),(13.17451, 0.075, 5.090859),(13.5685, 0.075, 5.010551),(13.31063, 0.075, 5.758637),(13.70461, 0.075, 5.678329)]

IndexedFaceSet1482.coord = Coordinate1483

Shape1479.geometry = IndexedFaceSet1482

Scene12.children.append(Shape1479)
Shape1484 = x3d.Shape()
Appearance1485 = x3d.Appearance()
Material1486 = x3d.Material()
Material1486.ambientIntensity = 0
Material1486.diffuseColor = [0.5,0.5,0.5]
Material1486.shininess = 0

Appearance1485.material = Material1486

Shape1484.appearance = Appearance1485
IndexedFaceSet1487 = x3d.IndexedFaceSet()
IndexedFaceSet1487.solid = False
IndexedFaceSet1487.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1487.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1488 = x3d.Coordinate()
Coordinate1488.point = [(13.0344, 0.075, 4.403484),(12.90028, 0.075, 3.745505),(13.84197, 0.075, 4.238873),(13.70785, 0.075, 3.580894)]

IndexedFaceSet1487.coord = Coordinate1488

Shape1484.geometry = IndexedFaceSet1487

Scene12.children.append(Shape1484)
Shape1489 = x3d.Shape()
Appearance1490 = x3d.Appearance()
Material1491 = x3d.Material()
Material1491.ambientIntensity = 0
Material1491.diffuseColor = [0.5,0.5,0.5]
Material1491.shininess = 0

Appearance1490.material = Material1491

Shape1489.appearance = Appearance1490
IndexedFaceSet1492 = x3d.IndexedFaceSet()
IndexedFaceSet1492.solid = False
IndexedFaceSet1492.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1492.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1493 = x3d.Coordinate()
Coordinate1493.point = [(13.56973, 0.075, 2.903317),(13.70385, 0.075, 3.561296),(12.76216, 0.075, 3.067929),(12.89628, 0.075, 3.725908)]

IndexedFaceSet1492.coord = Coordinate1493

Shape1489.geometry = IndexedFaceSet1492

Scene12.children.append(Shape1489)
Shape1494 = x3d.Shape()
Appearance1495 = x3d.Appearance()
Material1496 = x3d.Material()
Material1496.ambientIntensity = 0
Material1496.diffuseColor = [0.5,0.5,0.5]
Material1496.shininess = 0

Appearance1495.material = Material1496

Shape1494.appearance = Appearance1495
IndexedFaceSet1497 = x3d.IndexedFaceSet()
IndexedFaceSet1497.solid = False
IndexedFaceSet1497.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1497.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1498 = x3d.Coordinate()
Coordinate1498.point = [(16.47165, 0.075, 21.36649),(16.60576, 0.075, 22.02447),(15.66407, 0.075, 21.5311),(15.79819, 0.075, 22.18908)]

IndexedFaceSet1497.coord = Coordinate1498

Shape1494.geometry = IndexedFaceSet1497

Scene12.children.append(Shape1494)
Shape1499 = x3d.Shape()
Appearance1500 = x3d.Appearance()
Material1501 = x3d.Material()
Material1501.ambientIntensity = 0
Material1501.diffuseColor = [0.5,0.5,0.5]
Material1501.shininess = 0

Appearance1500.material = Material1501

Shape1499.appearance = Appearance1500
IndexedFaceSet1502 = x3d.IndexedFaceSet()
IndexedFaceSet1502.solid = False
IndexedFaceSet1502.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1502.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1503 = x3d.Coordinate()
Coordinate1503.point = [(15.66008, 0.075, 21.5115),(15.52596, 0.075, 20.85352),(16.46765, 0.075, 21.34689),(16.33353, 0.075, 20.68891)]

IndexedFaceSet1502.coord = Coordinate1503

Shape1499.geometry = IndexedFaceSet1502

Scene12.children.append(Shape1499)
Shape1504 = x3d.Shape()
Appearance1505 = x3d.Appearance()
Material1506 = x3d.Material()
Material1506.ambientIntensity = 0
Material1506.diffuseColor = [0.5,0.5,0.5]
Material1506.shininess = 0

Appearance1505.material = Material1506

Shape1504.appearance = Appearance1505
IndexedFaceSet1507 = x3d.IndexedFaceSet()
IndexedFaceSet1507.solid = False
IndexedFaceSet1507.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1507.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1508 = x3d.Coordinate()
Coordinate1508.point = [(15.66332, 0.075, 19.41407),(15.86031, 0.075, 19.37391),(16.0573, 0.075, 19.33376),(15.79943, 0.075, 20.08184),(15.99643, 0.075, 20.04169),(16.19342, 0.075, 20.00154),(15.93555, 0.075, 20.74962),(16.13254, 0.075, 20.70947),(16.32954, 0.075, 20.66931)]

IndexedFaceSet1507.coord = Coordinate1508

Shape1504.geometry = IndexedFaceSet1507

Scene12.children.append(Shape1504)
Shape1509 = x3d.Shape()
Appearance1510 = x3d.Appearance()
Material1511 = x3d.Material()
Material1511.ambientIntensity = 0
Material1511.diffuseColor = [0.5,0.5,0.5]
Material1511.shininess = 0

Appearance1510.material = Material1511

Shape1509.appearance = Appearance1510
IndexedFaceSet1512 = x3d.IndexedFaceSet()
IndexedFaceSet1512.solid = False
IndexedFaceSet1512.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1512.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1513 = x3d.Coordinate()
Coordinate1513.point = [(15.24973, 0.075, 19.49837),(15.64372, 0.075, 19.41806),(15.38585, 0.075, 20.16615),(15.77984, 0.075, 20.08584),(15.52197, 0.075, 20.83393),(15.91595, 0.075, 20.75362)]

IndexedFaceSet1512.coord = Coordinate1513

Shape1509.geometry = IndexedFaceSet1512

Scene12.children.append(Shape1509)
Shape1514 = x3d.Shape()
Appearance1515 = x3d.Appearance()
Material1516 = x3d.Material()
Material1516.ambientIntensity = 0
Material1516.diffuseColor = [0.5,0.5,0.5]
Material1516.shininess = 0

Appearance1515.material = Material1516

Shape1514.appearance = Appearance1515
IndexedFaceSet1517 = x3d.IndexedFaceSet()
IndexedFaceSet1517.solid = False
IndexedFaceSet1517.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1517.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1518 = x3d.Coordinate()
Coordinate1518.point = [(15.91919, 0.075, 18.65618),(16.05331, 0.075, 19.31416),(15.11162, 0.075, 18.82079),(15.24574, 0.075, 19.47877)]

IndexedFaceSet1517.coord = Coordinate1518

Shape1514.geometry = IndexedFaceSet1517

Scene12.children.append(Shape1514)
Shape1519 = x3d.Shape()
Appearance1520 = x3d.Appearance()
Material1521 = x3d.Material()
Material1521.ambientIntensity = 0
Material1521.diffuseColor = [0.5,0.5,0.5]
Material1521.shininess = 0

Appearance1520.material = Material1521

Shape1519.appearance = Appearance1520
IndexedFaceSet1522 = x3d.IndexedFaceSet()
IndexedFaceSet1522.solid = False
IndexedFaceSet1522.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1522.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1523 = x3d.Coordinate()
Coordinate1523.point = [(15.10762, 0.075, 18.8012),(14.9735, 0.075, 18.14322),(15.91519, 0.075, 18.63658),(15.78107, 0.075, 17.97861)]

IndexedFaceSet1522.coord = Coordinate1523

Shape1519.geometry = IndexedFaceSet1522

Scene12.children.append(Shape1519)
Shape1524 = x3d.Shape()
Appearance1525 = x3d.Appearance()
Material1526 = x3d.Material()
Material1526.ambientIntensity = 0
Material1526.diffuseColor = [0.5,0.5,0.5]
Material1526.shininess = 0

Appearance1525.material = Material1526

Shape1524.appearance = Appearance1525
IndexedFaceSet1527 = x3d.IndexedFaceSet()
IndexedFaceSet1527.solid = False
IndexedFaceSet1527.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1527.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1528 = x3d.Coordinate()
Coordinate1528.point = [(15.11086, 0.075, 16.70376),(15.50485, 0.075, 16.62345),(15.38309, 0.075, 18.03932),(15.77708, 0.075, 17.95901)]

IndexedFaceSet1527.coord = Coordinate1528

Shape1524.geometry = IndexedFaceSet1527

Scene12.children.append(Shape1524)
Shape1529 = x3d.Shape()
Appearance1530 = x3d.Appearance()
Material1531 = x3d.Material()
Material1531.ambientIntensity = 0
Material1531.diffuseColor = [0.5,0.5,0.5]
Material1531.shininess = 0

Appearance1530.material = Material1531

Shape1529.appearance = Appearance1530
IndexedFaceSet1532 = x3d.IndexedFaceSet()
IndexedFaceSet1532.solid = False
IndexedFaceSet1532.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1532.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1533 = x3d.Coordinate()
Coordinate1533.point = [(14.69728, 0.075, 16.78806),(15.09126, 0.075, 16.70775),(14.96951, 0.075, 18.12362),(15.3635, 0.075, 18.04331)]

IndexedFaceSet1532.coord = Coordinate1533

Shape1529.geometry = IndexedFaceSet1532

Scene12.children.append(Shape1529)
Shape1534 = x3d.Shape()
Appearance1535 = x3d.Appearance()
Material1536 = x3d.Material()
Material1536.ambientIntensity = 0
Material1536.diffuseColor = [0.5,0.5,0.5]
Material1536.shininess = 0

Appearance1535.material = Material1536

Shape1534.appearance = Appearance1535
IndexedFaceSet1537 = x3d.IndexedFaceSet()
IndexedFaceSet1537.solid = False
IndexedFaceSet1537.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1537.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1538 = x3d.Coordinate()
Coordinate1538.point = [(15.36673, 0.075, 15.94588),(15.43379, 0.075, 16.27486),(15.50085, 0.075, 16.60386),(14.96295, 0.075, 16.02818),(15.03001, 0.075, 16.35717),(15.09707, 0.075, 16.68616),(14.55916, 0.075, 16.11049),(14.62622, 0.075, 16.43948),(14.69328, 0.075, 16.76847)]

IndexedFaceSet1537.coord = Coordinate1538

Shape1534.geometry = IndexedFaceSet1537

Scene12.children.append(Shape1534)
Shape1539 = x3d.Shape()
Appearance1540 = x3d.Appearance()
Material1541 = x3d.Material()
Material1541.ambientIntensity = 0
Material1541.diffuseColor = [0.5,0.5,0.5]
Material1541.shininess = 0

Appearance1540.material = Material1541

Shape1539.appearance = Appearance1540
IndexedFaceSet1542 = x3d.IndexedFaceSet()
IndexedFaceSet1542.solid = False
IndexedFaceSet1542.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1542.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1543 = x3d.Coordinate()
Coordinate1543.point = [(14.55517, 0.075, 16.09089),(14.42105, 0.075, 15.43291),(15.36274, 0.075, 15.92628),(15.22862, 0.075, 15.2683)]

IndexedFaceSet1542.coord = Coordinate1543

Shape1539.geometry = IndexedFaceSet1542

Scene12.children.append(Shape1539)
Shape1544 = x3d.Shape()
Appearance1545 = x3d.Appearance()
Material1546 = x3d.Material()
Material1546.ambientIntensity = 0
Material1546.diffuseColor = [0.5,0.5,0.5]
Material1546.shininess = 0

Appearance1545.material = Material1546

Shape1544.appearance = Appearance1545
IndexedFaceSet1547 = x3d.IndexedFaceSet()
IndexedFaceSet1547.solid = False
IndexedFaceSet1547.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1547.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1548 = x3d.Coordinate()
Coordinate1548.point = [(14.5584, 0.075, 13.99345),(14.95239, 0.075, 13.91315),(14.83064, 0.075, 15.32901),(15.22462, 0.075, 15.2487)]

IndexedFaceSet1547.coord = Coordinate1548

Shape1544.geometry = IndexedFaceSet1547

Scene12.children.append(Shape1544)
Shape1549 = x3d.Shape()
Appearance1550 = x3d.Appearance()
Material1551 = x3d.Material()
Material1551.ambientIntensity = 0
Material1551.diffuseColor = [0.5,0.5,0.5]
Material1551.shininess = 0

Appearance1550.material = Material1551

Shape1549.appearance = Appearance1550
IndexedFaceSet1552 = x3d.IndexedFaceSet()
IndexedFaceSet1552.solid = False
IndexedFaceSet1552.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1552.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1553 = x3d.Coordinate()
Coordinate1553.point = [(14.14482, 0.075, 14.07776),(14.53881, 0.075, 13.99745),(14.41705, 0.075, 15.41331),(14.81104, 0.075, 15.333)]

IndexedFaceSet1552.coord = Coordinate1553

Shape1549.geometry = IndexedFaceSet1552

Scene12.children.append(Shape1549)
Shape1554 = x3d.Shape()
Appearance1555 = x3d.Appearance()
Material1556 = x3d.Material()
Material1556.ambientIntensity = 0
Material1556.diffuseColor = [0.5,0.5,0.5]
Material1556.shininess = 0

Appearance1555.material = Material1556

Shape1554.appearance = Appearance1555
IndexedFaceSet1557 = x3d.IndexedFaceSet()
IndexedFaceSet1557.solid = False
IndexedFaceSet1557.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1557.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1558 = x3d.Coordinate()
Coordinate1558.point = [(14.14083, 0.075, 14.05816),(14.07377, 0.075, 13.72917),(14.00671, 0.075, 13.40018),(14.54461, 0.075, 13.97585),(14.47755, 0.075, 13.64686),(14.41049, 0.075, 13.31787),(14.9484, 0.075, 13.89355),(14.88134, 0.075, 13.56456),(14.81428, 0.075, 13.23557)]

IndexedFaceSet1557.coord = Coordinate1558

Shape1554.geometry = IndexedFaceSet1557

Scene12.children.append(Shape1554)
Shape1559 = x3d.Shape()
Appearance1560 = x3d.Appearance()
Material1561 = x3d.Material()
Material1561.ambientIntensity = 0
Material1561.diffuseColor = [0.5,0.5,0.5]
Material1561.shininess = 0

Appearance1560.material = Material1561

Shape1559.appearance = Appearance1560
IndexedFaceSet1562 = x3d.IndexedFaceSet()
IndexedFaceSet1562.solid = False
IndexedFaceSet1562.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1562.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1563 = x3d.Coordinate()
Coordinate1563.point = [(14.67616, 0.075, 12.55799),(14.81028, 0.075, 13.21597),(13.86859, 0.075, 12.7226),(14.00271, 0.075, 13.38058)]

IndexedFaceSet1562.coord = Coordinate1563

Shape1559.geometry = IndexedFaceSet1562

Scene12.children.append(Shape1559)
Shape1564 = x3d.Shape()
Appearance1565 = x3d.Appearance()
Material1566 = x3d.Material()
Material1566.ambientIntensity = 0
Material1566.diffuseColor = [0.5,0.5,0.5]
Material1566.shininess = 0

Appearance1565.material = Material1566

Shape1564.appearance = Appearance1565
IndexedFaceSet1567 = x3d.IndexedFaceSet()
IndexedFaceSet1567.solid = False
IndexedFaceSet1567.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1567.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1568 = x3d.Coordinate()
Coordinate1568.point = [(14.00595, 0.075, 11.28315),(14.20294, 0.075, 11.24299),(14.39993, 0.075, 11.20284),(14.14207, 0.075, 11.95093),(14.33906, 0.075, 11.91077),(14.53605, 0.075, 11.87062),(14.27818, 0.075, 12.6187),(14.47517, 0.075, 12.57855),(14.67217, 0.075, 12.5384)]

IndexedFaceSet1567.coord = Coordinate1568

Shape1564.geometry = IndexedFaceSet1567

Scene12.children.append(Shape1564)
Shape1569 = x3d.Shape()
Appearance1570 = x3d.Appearance()
Material1571 = x3d.Material()
Material1571.ambientIntensity = 0
Material1571.diffuseColor = [0.5,0.5,0.5]
Material1571.shininess = 0

Appearance1570.material = Material1571

Shape1569.appearance = Appearance1570
IndexedFaceSet1572 = x3d.IndexedFaceSet()
IndexedFaceSet1572.solid = False
IndexedFaceSet1572.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1572.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1573 = x3d.Coordinate()
Coordinate1573.point = [(13.59236, 0.075, 11.36745),(13.98635, 0.075, 11.28714),(13.8646, 0.075, 12.70301),(14.25858, 0.075, 12.6227)]

IndexedFaceSet1572.coord = Coordinate1573

Shape1569.geometry = IndexedFaceSet1572

Scene12.children.append(Shape1569)
Shape1574 = x3d.Shape()
Appearance1575 = x3d.Appearance()
Material1576 = x3d.Material()
Material1576.ambientIntensity = 0
Material1576.diffuseColor = [0.5,0.5,0.5]
Material1576.shininess = 0

Appearance1575.material = Material1576

Shape1574.appearance = Appearance1575
IndexedFaceSet1577 = x3d.IndexedFaceSet()
IndexedFaceSet1577.solid = False
IndexedFaceSet1577.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1577.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1578 = x3d.Coordinate()
Coordinate1578.point = [(13.58837, 0.075, 11.34785),(13.45425, 0.075, 10.68988),(13.99216, 0.075, 11.26555),(13.85804, 0.075, 10.60757),(14.39594, 0.075, 11.18324),(14.26182, 0.075, 10.52526)]

IndexedFaceSet1577.coord = Coordinate1578

Shape1574.geometry = IndexedFaceSet1577

Scene12.children.append(Shape1574)
Shape1579 = x3d.Shape()
Appearance1580 = x3d.Appearance()
Material1581 = x3d.Material()
Material1581.ambientIntensity = 0
Material1581.diffuseColor = [0.5,0.5,0.5]
Material1581.shininess = 0

Appearance1580.material = Material1581

Shape1579.appearance = Appearance1580
IndexedFaceSet1582 = x3d.IndexedFaceSet()
IndexedFaceSet1582.solid = False
IndexedFaceSet1582.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet1582.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate1583 = x3d.Coordinate()
Coordinate1583.point = [(13.45026, 0.075, 10.67028),(13.3832, 0.075, 10.34129),(13.31614, 0.075, 10.0123),(14.25783, 0.075, 10.50567),(14.19077, 0.075, 10.17668),(14.12371, 0.075, 9.847688)]

IndexedFaceSet1582.coord = Coordinate1583

Shape1579.geometry = IndexedFaceSet1582

Scene12.children.append(Shape1579)
Shape1584 = x3d.Shape()
Appearance1585 = x3d.Appearance()
Material1586 = x3d.Material()
Material1586.ambientIntensity = 0
Material1586.diffuseColor = [0.5,0.5,0.5]
Material1586.shininess = 0

Appearance1585.material = Material1586

Shape1584.appearance = Appearance1585
IndexedFaceSet1587 = x3d.IndexedFaceSet()
IndexedFaceSet1587.solid = False
IndexedFaceSet1587.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1587.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1588 = x3d.Coordinate()
Coordinate1588.point = [(14.11971, 0.075, 9.828091),(13.72573, 0.075, 9.908399),(13.9836, 0.075, 9.160313),(13.58961, 0.075, 9.240621),(13.84748, 0.075, 8.492535),(13.45349, 0.075, 8.572843)]

IndexedFaceSet1587.coord = Coordinate1588

Shape1584.geometry = IndexedFaceSet1587

Scene12.children.append(Shape1584)
Shape1589 = x3d.Shape()
Appearance1590 = x3d.Appearance()
Material1591 = x3d.Material()
Material1591.ambientIntensity = 0
Material1591.diffuseColor = [0.5,0.5,0.5]
Material1591.shininess = 0

Appearance1590.material = Material1591

Shape1589.appearance = Appearance1590
IndexedFaceSet1592 = x3d.IndexedFaceSet()
IndexedFaceSet1592.solid = False
IndexedFaceSet1592.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1592.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1593 = x3d.Coordinate()
Coordinate1593.point = [(13.03991, 0.075, 8.657146),(13.2369, 0.075, 8.616992),(13.4339, 0.075, 8.576838),(13.17602, 0.075, 9.324924),(13.37302, 0.075, 9.28477),(13.57001, 0.075, 9.244616),(13.31214, 0.075, 9.992702),(13.50914, 0.075, 9.952547),(13.70613, 0.075, 9.912394)]

IndexedFaceSet1592.coord = Coordinate1593

Shape1589.geometry = IndexedFaceSet1592

Scene12.children.append(Shape1589)
Shape1594 = x3d.Shape()
Appearance1595 = x3d.Appearance()
Material1596 = x3d.Material()
Material1596.ambientIntensity = 0
Material1596.diffuseColor = [0.5,0.5,0.5]
Material1596.shininess = 0

Appearance1595.material = Material1596

Shape1594.appearance = Appearance1595
IndexedFaceSet1597 = x3d.IndexedFaceSet()
IndexedFaceSet1597.solid = False
IndexedFaceSet1597.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1597.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1598 = x3d.Coordinate()
Coordinate1598.point = [(13.70936, 0.075, 7.814958),(13.84348, 0.075, 8.472938),(12.90179, 0.075, 7.979569),(13.03591, 0.075, 8.637548)]

IndexedFaceSet1597.coord = Coordinate1598

Shape1594.geometry = IndexedFaceSet1597

Scene12.children.append(Shape1594)
Shape1599 = x3d.Shape()
Appearance1600 = x3d.Appearance()
Material1601 = x3d.Material()
Material1601.ambientIntensity = 0
Material1601.diffuseColor = [0.5,0.5,0.5]
Material1601.shininess = 0

Appearance1600.material = Material1601

Shape1599.appearance = Appearance1600
IndexedFaceSet1602 = x3d.IndexedFaceSet()
IndexedFaceSet1602.solid = False
IndexedFaceSet1602.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1602.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1603 = x3d.Coordinate()
Coordinate1603.point = [(13.57125, 0.075, 7.137382),(13.70537, 0.075, 7.795361),(12.76368, 0.075, 7.301993),(12.8978, 0.075, 7.959972)]

IndexedFaceSet1602.coord = Coordinate1603

Shape1599.geometry = IndexedFaceSet1602

Scene12.children.append(Shape1599)
Shape1604 = x3d.Shape()
Appearance1605 = x3d.Appearance()
Material1606 = x3d.Material()
Material1606.ambientIntensity = 0
Material1606.diffuseColor = [0.5,0.5,0.5]
Material1606.shininess = 0

Appearance1605.material = Material1606

Shape1604.appearance = Appearance1605
IndexedFaceSet1607 = x3d.IndexedFaceSet()
IndexedFaceSet1607.solid = False
IndexedFaceSet1607.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1607.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1608 = x3d.Coordinate()
Coordinate1608.point = [(12.90104, 0.075, 5.862537),(13.29502, 0.075, 5.782229),(13.17327, 0.075, 7.198093),(13.56726, 0.075, 7.117785)]

IndexedFaceSet1607.coord = Coordinate1608

Shape1604.geometry = IndexedFaceSet1607

Scene12.children.append(Shape1604)
Shape1609 = x3d.Shape()
Appearance1610 = x3d.Appearance()
Material1611 = x3d.Material()
Material1611.ambientIntensity = 0
Material1611.diffuseColor = [0.5,0.5,0.5]
Material1611.shininess = 0

Appearance1610.material = Material1611

Shape1609.appearance = Appearance1610
IndexedFaceSet1612 = x3d.IndexedFaceSet()
IndexedFaceSet1612.solid = False
IndexedFaceSet1612.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1612.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1613 = x3d.Coordinate()
Coordinate1613.point = [(12.48745, 0.075, 5.94684),(12.88144, 0.075, 5.866532),(12.75969, 0.075, 7.282396),(13.15367, 0.075, 7.202087)]

IndexedFaceSet1612.coord = Coordinate1613

Shape1609.geometry = IndexedFaceSet1612

Scene12.children.append(Shape1609)
Shape1614 = x3d.Shape()
Appearance1615 = x3d.Appearance()
Material1616 = x3d.Material()
Material1616.ambientIntensity = 0
Material1616.diffuseColor = [0.5,0.5,0.5]
Material1616.shininess = 0

Appearance1615.material = Material1616

Shape1614.appearance = Appearance1615
IndexedFaceSet1617 = x3d.IndexedFaceSet()
IndexedFaceSet1617.solid = False
IndexedFaceSet1617.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1617.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1618 = x3d.Coordinate()
Coordinate1618.point = [(12.48346, 0.075, 5.927243),(12.34934, 0.075, 5.269264),(13.29103, 0.075, 5.762632),(13.15691, 0.075, 5.104652)]

IndexedFaceSet1617.coord = Coordinate1618

Shape1614.geometry = IndexedFaceSet1617

Scene12.children.append(Shape1614)
Shape1619 = x3d.Shape()
Appearance1620 = x3d.Appearance()
Material1621 = x3d.Material()
Material1621.ambientIntensity = 0
Material1621.diffuseColor = [0.5,0.5,0.5]
Material1621.shininess = 0

Appearance1620.material = Material1621

Shape1619.appearance = Appearance1620
IndexedFaceSet1622 = x3d.IndexedFaceSet()
IndexedFaceSet1622.solid = False
IndexedFaceSet1622.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1622.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1623 = x3d.Coordinate()
Coordinate1623.point = [(12.34534, 0.075, 5.249667),(12.21122, 0.075, 4.591687),(13.15291, 0.075, 5.085055),(13.0188, 0.075, 4.427076)]

IndexedFaceSet1622.coord = Coordinate1623

Shape1619.geometry = IndexedFaceSet1622

Scene12.children.append(Shape1619)
Shape1624 = x3d.Shape()
Appearance1625 = x3d.Appearance()
Material1626 = x3d.Material()
Material1626.ambientIntensity = 0
Material1626.diffuseColor = [0.5,0.5,0.5]
Material1626.shininess = 0

Appearance1625.material = Material1626

Shape1624.appearance = Appearance1625
IndexedFaceSet1627 = x3d.IndexedFaceSet()
IndexedFaceSet1627.solid = False
IndexedFaceSet1627.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1627.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1628 = x3d.Coordinate()
Coordinate1628.point = [(12.34858, 0.075, 3.152231),(12.74257, 0.075, 3.071923),(12.62081, 0.075, 4.487787),(13.0148, 0.075, 4.407479)]

IndexedFaceSet1627.coord = Coordinate1628

Shape1624.geometry = IndexedFaceSet1627

Scene12.children.append(Shape1624)
Shape1629 = x3d.Shape()
Appearance1630 = x3d.Appearance()
Material1631 = x3d.Material()
Material1631.ambientIntensity = 0
Material1631.diffuseColor = [0.5,0.5,0.5]
Material1631.shininess = 0

Appearance1630.material = Material1631

Shape1629.appearance = Appearance1630
IndexedFaceSet1632 = x3d.IndexedFaceSet()
IndexedFaceSet1632.solid = False
IndexedFaceSet1632.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1632.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1633 = x3d.Coordinate()
Coordinate1633.point = [(11.935, 0.075, 3.236535),(12.32898, 0.075, 3.156226),(12.07111, 0.075, 3.904312),(12.4651, 0.075, 3.824004),(12.20723, 0.075, 4.57209),(12.60122, 0.075, 4.491782)]

IndexedFaceSet1632.coord = Coordinate1633

Shape1629.geometry = IndexedFaceSet1632

Scene12.children.append(Shape1629)
Shape1634 = x3d.Shape()
Appearance1635 = x3d.Appearance()
Material1636 = x3d.Material()
Material1636.ambientIntensity = 0
Material1636.diffuseColor = [0.5,0.5,0.5]
Material1636.shininess = 0

Appearance1635.material = Material1636

Shape1634.appearance = Appearance1635
IndexedFaceSet1637 = x3d.IndexedFaceSet()
IndexedFaceSet1637.solid = False
IndexedFaceSet1637.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1637.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1638 = x3d.Coordinate()
Coordinate1638.point = [(11.931, 0.075, 3.216938),(11.79688, 0.075, 2.558958),(12.73857, 0.075, 3.052326),(12.60445, 0.075, 2.394347)]

IndexedFaceSet1637.coord = Coordinate1638

Shape1634.geometry = IndexedFaceSet1637

Scene12.children.append(Shape1634)
Shape1639 = x3d.Shape()
Appearance1640 = x3d.Appearance()
Material1641 = x3d.Material()
Material1641.ambientIntensity = 0
Material1641.diffuseColor = [0.5,0.5,0.5]
Material1641.shininess = 0

Appearance1640.material = Material1641

Shape1639.appearance = Appearance1640
IndexedFaceSet1642 = x3d.IndexedFaceSet()
IndexedFaceSet1642.solid = False
IndexedFaceSet1642.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1642.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1643 = x3d.Coordinate()
Coordinate1643.point = [(15.36825, 0.075, 20.17994),(15.50237, 0.075, 20.83792),(14.56068, 0.075, 20.34455),(14.6948, 0.075, 21.00253)]

IndexedFaceSet1642.coord = Coordinate1643

Shape1639.geometry = IndexedFaceSet1642

Scene12.children.append(Shape1639)
Shape1644 = x3d.Shape()
Appearance1645 = x3d.Appearance()
Material1646 = x3d.Material()
Material1646.ambientIntensity = 0
Material1646.diffuseColor = [0.5,0.5,0.5]
Material1646.shininess = 0

Appearance1645.material = Material1646

Shape1644.appearance = Appearance1645
IndexedFaceSet1647 = x3d.IndexedFaceSet()
IndexedFaceSet1647.solid = False
IndexedFaceSet1647.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet1647.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate1648 = x3d.Coordinate()
Coordinate1648.point = [(14.55668, 0.075, 20.32495),(14.48962, 0.075, 19.99596),(14.42256, 0.075, 19.66698),(15.36425, 0.075, 20.16034),(15.29719, 0.075, 19.83135),(15.23013, 0.075, 19.50236)]

IndexedFaceSet1647.coord = Coordinate1648

Shape1644.geometry = IndexedFaceSet1647

Scene12.children.append(Shape1644)
Shape1649 = x3d.Shape()
Appearance1650 = x3d.Appearance()
Material1651 = x3d.Material()
Material1651.ambientIntensity = 0
Material1651.diffuseColor = [0.5,0.5,0.5]
Material1651.shininess = 0

Appearance1650.material = Material1651

Shape1649.appearance = Appearance1650
IndexedFaceSet1652 = x3d.IndexedFaceSet()
IndexedFaceSet1652.solid = False
IndexedFaceSet1652.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1652.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1653 = x3d.Coordinate()
Coordinate1653.point = [(14.55992, 0.075, 18.22752),(14.95391, 0.075, 18.14721),(14.83215, 0.075, 19.56307),(15.22614, 0.075, 19.48277)]

IndexedFaceSet1652.coord = Coordinate1653

Shape1649.geometry = IndexedFaceSet1652

Scene12.children.append(Shape1649)
Shape1654 = x3d.Shape()
Appearance1655 = x3d.Appearance()
Material1656 = x3d.Material()
Material1656.ambientIntensity = 0
Material1656.diffuseColor = [0.5,0.5,0.5]
Material1656.shininess = 0

Appearance1655.material = Material1656

Shape1654.appearance = Appearance1655
IndexedFaceSet1657 = x3d.IndexedFaceSet()
IndexedFaceSet1657.solid = False
IndexedFaceSet1657.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1657.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1658 = x3d.Coordinate()
Coordinate1658.point = [(14.14634, 0.075, 18.31182),(14.54032, 0.075, 18.23151),(14.28245, 0.075, 18.9796),(14.67644, 0.075, 18.89929),(14.41857, 0.075, 19.64738),(14.81256, 0.075, 19.56707)]

IndexedFaceSet1657.coord = Coordinate1658

Shape1654.geometry = IndexedFaceSet1657

Scene12.children.append(Shape1654)
Shape1659 = x3d.Shape()
Appearance1660 = x3d.Appearance()
Material1661 = x3d.Material()
Material1661.ambientIntensity = 0
Material1661.diffuseColor = [0.5,0.5,0.5]
Material1661.shininess = 0

Appearance1660.material = Material1661

Shape1659.appearance = Appearance1660
IndexedFaceSet1662 = x3d.IndexedFaceSet()
IndexedFaceSet1662.solid = False
IndexedFaceSet1662.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1662.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1663 = x3d.Coordinate()
Coordinate1663.point = [(14.14234, 0.075, 18.29222),(14.00822, 0.075, 17.63424),(14.94991, 0.075, 18.12761),(14.81579, 0.075, 17.46964)]

IndexedFaceSet1662.coord = Coordinate1663

Shape1659.geometry = IndexedFaceSet1662

Scene12.children.append(Shape1659)
Shape1664 = x3d.Shape()
Appearance1665 = x3d.Appearance()
Material1666 = x3d.Material()
Material1666.ambientIntensity = 0
Material1666.diffuseColor = [0.5,0.5,0.5]
Material1666.shininess = 0

Appearance1665.material = Material1666

Shape1664.appearance = Appearance1665
IndexedFaceSet1667 = x3d.IndexedFaceSet()
IndexedFaceSet1667.solid = False
IndexedFaceSet1667.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet1667.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate1668 = x3d.Coordinate()
Coordinate1668.point = [(14.00423, 0.075, 17.61465),(13.93717, 0.075, 17.28566),(13.87011, 0.075, 16.95667),(14.8118, 0.075, 17.45004),(14.74474, 0.075, 17.12105),(14.67768, 0.075, 16.79206)]

IndexedFaceSet1667.coord = Coordinate1668

Shape1664.geometry = IndexedFaceSet1667

Scene12.children.append(Shape1664)
Shape1669 = x3d.Shape()
Appearance1670 = x3d.Appearance()
Material1671 = x3d.Material()
Material1671.ambientIntensity = 0
Material1671.diffuseColor = [0.5,0.5,0.5]
Material1671.shininess = 0

Appearance1670.material = Material1671

Shape1669.appearance = Appearance1670
IndexedFaceSet1672 = x3d.IndexedFaceSet()
IndexedFaceSet1672.solid = False
IndexedFaceSet1672.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1672.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1673 = x3d.Coordinate()
Coordinate1673.point = [(14.67368, 0.075, 16.77246),(14.2797, 0.075, 16.85277),(14.53757, 0.075, 16.10468),(14.14358, 0.075, 16.18499),(14.40145, 0.075, 15.4369),(14.00746, 0.075, 15.51721)]

IndexedFaceSet1672.coord = Coordinate1673

Shape1669.geometry = IndexedFaceSet1672

Scene12.children.append(Shape1669)
Shape1674 = x3d.Shape()
Appearance1675 = x3d.Appearance()
Material1676 = x3d.Material()
Material1676.ambientIntensity = 0
Material1676.diffuseColor = [0.5,0.5,0.5]
Material1676.shininess = 0

Appearance1675.material = Material1676

Shape1674.appearance = Appearance1675
IndexedFaceSet1677 = x3d.IndexedFaceSet()
IndexedFaceSet1677.solid = False
IndexedFaceSet1677.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1677.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1678 = x3d.Coordinate()
Coordinate1678.point = [(14.2601, 0.075, 16.85676),(13.86611, 0.075, 16.93707),(14.12398, 0.075, 16.18899),(13.73, 0.075, 16.26929),(13.98787, 0.075, 15.52121),(13.59388, 0.075, 15.60152)]

IndexedFaceSet1677.coord = Coordinate1678

Shape1674.geometry = IndexedFaceSet1677

Scene12.children.append(Shape1674)
Shape1679 = x3d.Shape()
Appearance1680 = x3d.Appearance()
Material1681 = x3d.Material()
Material1681.ambientIntensity = 0
Material1681.diffuseColor = [0.5,0.5,0.5]
Material1681.shininess = 0

Appearance1680.material = Material1681

Shape1679.appearance = Appearance1680
IndexedFaceSet1682 = x3d.IndexedFaceSet()
IndexedFaceSet1682.solid = False
IndexedFaceSet1682.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1682.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1683 = x3d.Coordinate()
Coordinate1683.point = [(13.58989, 0.075, 15.58192),(13.45577, 0.075, 14.92394),(14.39746, 0.075, 15.41731),(14.26334, 0.075, 14.75933)]

IndexedFaceSet1682.coord = Coordinate1683

Shape1679.geometry = IndexedFaceSet1682

Scene12.children.append(Shape1679)
Shape1684 = x3d.Shape()
Appearance1685 = x3d.Appearance()
Material1686 = x3d.Material()
Material1686.ambientIntensity = 0
Material1686.diffuseColor = [0.5,0.5,0.5]
Material1686.shininess = 0

Appearance1685.material = Material1686

Shape1684.appearance = Appearance1685
IndexedFaceSet1687 = x3d.IndexedFaceSet()
IndexedFaceSet1687.solid = False
IndexedFaceSet1687.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1687.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1688 = x3d.Coordinate()
Coordinate1688.point = [(12.3501, 0.075, 7.386296),(12.54709, 0.075, 7.346142),(12.74408, 0.075, 7.305988),(12.48621, 0.075, 8.054074),(12.68321, 0.075, 8.01392),(12.8802, 0.075, 7.973765),(12.62233, 0.075, 8.721852),(12.81932, 0.075, 8.681698),(13.01632, 0.075, 8.641543)]

IndexedFaceSet1687.coord = Coordinate1688

Shape1684.geometry = IndexedFaceSet1687

Scene12.children.append(Shape1684)
Shape1689 = x3d.Shape()
Appearance1690 = x3d.Appearance()
Material1691 = x3d.Material()
Material1691.ambientIntensity = 0
Material1691.diffuseColor = [0.5,0.5,0.5]
Material1691.shininess = 0

Appearance1690.material = Material1691

Shape1689.appearance = Appearance1690
IndexedFaceSet1692 = x3d.IndexedFaceSet()
IndexedFaceSet1692.solid = False
IndexedFaceSet1692.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1692.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1693 = x3d.Coordinate()
Coordinate1693.point = [(11.93651, 0.075, 7.470599),(12.3305, 0.075, 7.390291),(12.20875, 0.075, 8.806155),(12.60273, 0.075, 8.725846)]

IndexedFaceSet1692.coord = Coordinate1693

Shape1689.geometry = IndexedFaceSet1692

Scene12.children.append(Shape1689)
Shape1694 = x3d.Shape()
Appearance1695 = x3d.Appearance()
Material1696 = x3d.Material()
Material1696.ambientIntensity = 0
Material1696.diffuseColor = [0.5,0.5,0.5]
Material1696.shininess = 0

Appearance1695.material = Material1696

Shape1694.appearance = Appearance1695
IndexedFaceSet1697 = x3d.IndexedFaceSet()
IndexedFaceSet1697.solid = False
IndexedFaceSet1697.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1697.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1698 = x3d.Coordinate()
Coordinate1698.point = [(12.60597, 0.075, 6.628411),(12.74009, 0.075, 7.286391),(12.20218, 0.075, 6.710717),(12.3363, 0.075, 7.368696),(11.7984, 0.075, 6.793023),(11.93252, 0.075, 7.451002)]

IndexedFaceSet1697.coord = Coordinate1698

Shape1694.geometry = IndexedFaceSet1697

Scene12.children.append(Shape1694)
Shape1699 = x3d.Shape()
Appearance1700 = x3d.Appearance()
Material1701 = x3d.Material()
Material1701.ambientIntensity = 0
Material1701.diffuseColor = [0.5,0.5,0.5]
Material1701.shininess = 0

Appearance1700.material = Material1701

Shape1699.appearance = Appearance1700
IndexedFaceSet1702 = x3d.IndexedFaceSet()
IndexedFaceSet1702.solid = False
IndexedFaceSet1702.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1702.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1703 = x3d.Coordinate()
Coordinate1703.point = [(12.46786, 0.075, 5.950835),(12.60197, 0.075, 6.608814),(11.66028, 0.075, 6.115446),(11.7944, 0.075, 6.773426)]

IndexedFaceSet1702.coord = Coordinate1703

Shape1699.geometry = IndexedFaceSet1702

Scene12.children.append(Shape1699)
Shape1704 = x3d.Shape()
Appearance1705 = x3d.Appearance()
Material1706 = x3d.Material()
Material1706.ambientIntensity = 0
Material1706.diffuseColor = [0.5,0.5,0.5]
Material1706.shininess = 0

Appearance1705.material = Material1706

Shape1704.appearance = Appearance1705
IndexedFaceSet1707 = x3d.IndexedFaceSet()
IndexedFaceSet1707.solid = False
IndexedFaceSet1707.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1707.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1708 = x3d.Coordinate()
Coordinate1708.point = [(11.79764, 0.075, 4.675991),(11.99463, 0.075, 4.635836),(12.19163, 0.075, 4.595682),(11.93376, 0.075, 5.343768),(12.13075, 0.075, 5.303614),(12.32774, 0.075, 5.26346),(12.06987, 0.075, 6.011546),(12.26687, 0.075, 5.971392),(12.46386, 0.075, 5.931238)]

IndexedFaceSet1707.coord = Coordinate1708

Shape1704.geometry = IndexedFaceSet1707

Scene12.children.append(Shape1704)
Shape1709 = x3d.Shape()
Appearance1710 = x3d.Appearance()
Material1711 = x3d.Material()
Material1711.ambientIntensity = 0
Material1711.diffuseColor = [0.5,0.5,0.5]
Material1711.shininess = 0

Appearance1710.material = Material1711

Shape1709.appearance = Appearance1710
IndexedFaceSet1712 = x3d.IndexedFaceSet()
IndexedFaceSet1712.solid = False
IndexedFaceSet1712.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1712.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1713 = x3d.Coordinate()
Coordinate1713.point = [(11.38406, 0.075, 4.760293),(11.58105, 0.075, 4.720139),(11.77804, 0.075, 4.679985),(11.52017, 0.075, 5.428071),(11.71717, 0.075, 5.387917),(11.91416, 0.075, 5.347763),(11.65629, 0.075, 6.095849),(11.85328, 0.075, 6.055695),(12.05028, 0.075, 6.015541)]

IndexedFaceSet1712.coord = Coordinate1713

Shape1709.geometry = IndexedFaceSet1712

Scene12.children.append(Shape1709)
Shape1714 = x3d.Shape()
Appearance1715 = x3d.Appearance()
Material1716 = x3d.Material()
Material1716.ambientIntensity = 0
Material1716.diffuseColor = [0.5,0.5,0.5]
Material1716.shininess = 0

Appearance1715.material = Material1716

Shape1714.appearance = Appearance1715
IndexedFaceSet1717 = x3d.IndexedFaceSet()
IndexedFaceSet1717.solid = False
IndexedFaceSet1717.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1717.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1718 = x3d.Coordinate()
Coordinate1718.point = [(11.38006, 0.075, 4.740696),(11.24594, 0.075, 4.082717),(12.18763, 0.075, 4.576085),(12.05351, 0.075, 3.918105)]

IndexedFaceSet1717.coord = Coordinate1718

Shape1714.geometry = IndexedFaceSet1717

Scene12.children.append(Shape1714)
Shape1719 = x3d.Shape()
Appearance1720 = x3d.Appearance()
Material1721 = x3d.Material()
Material1721.ambientIntensity = 0
Material1721.diffuseColor = [0.5,0.5,0.5]
Material1721.shininess = 0

Appearance1720.material = Material1721

Shape1719.appearance = Appearance1720
IndexedFaceSet1722 = x3d.IndexedFaceSet()
IndexedFaceSet1722.solid = False
IndexedFaceSet1722.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1722.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1723 = x3d.Coordinate()
Coordinate1723.point = [(11.9154, 0.075, 3.240529),(12.04952, 0.075, 3.898509),(11.10783, 0.075, 3.40514),(11.24195, 0.075, 4.06312)]

IndexedFaceSet1722.coord = Coordinate1723

Shape1719.geometry = IndexedFaceSet1722

Scene12.children.append(Shape1719)
Shape1724 = x3d.Shape()
Appearance1725 = x3d.Appearance()
Material1726 = x3d.Material()
Material1726.ambientIntensity = 0
Material1726.diffuseColor = [0.5,0.5,0.5]
Material1726.shininess = 0

Appearance1725.material = Material1726

Shape1724.appearance = Appearance1725
IndexedFaceSet1727 = x3d.IndexedFaceSet()
IndexedFaceSet1727.solid = False
IndexedFaceSet1727.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1727.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1728 = x3d.Coordinate()
Coordinate1728.point = [(11.24518, 0.075, 1.965685),(11.63917, 0.075, 1.885376),(11.51742, 0.075, 3.30124),(11.9114, 0.075, 3.220932)]

IndexedFaceSet1727.coord = Coordinate1728

Shape1724.geometry = IndexedFaceSet1727

Scene12.children.append(Shape1724)
Shape1729 = x3d.Shape()
Appearance1730 = x3d.Appearance()
Material1731 = x3d.Material()
Material1731.ambientIntensity = 0
Material1731.diffuseColor = [0.5,0.5,0.5]
Material1731.shininess = 0

Appearance1730.material = Material1731

Shape1729.appearance = Appearance1730
IndexedFaceSet1732 = x3d.IndexedFaceSet()
IndexedFaceSet1732.solid = False
IndexedFaceSet1732.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1732.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1733 = x3d.Coordinate()
Coordinate1733.point = [(10.8316, 0.075, 2.049988),(11.02859, 0.075, 2.009833),(11.22559, 0.075, 1.969679),(10.96772, 0.075, 2.717766),(11.16471, 0.075, 2.677611),(11.3617, 0.075, 2.637457),(11.10383, 0.075, 3.385544),(11.30083, 0.075, 3.345389),(11.49782, 0.075, 3.305235)]

IndexedFaceSet1732.coord = Coordinate1733

Shape1729.geometry = IndexedFaceSet1732

Scene12.children.append(Shape1729)
Shape1734 = x3d.Shape()
Appearance1735 = x3d.Appearance()
Material1736 = x3d.Material()
Material1736.ambientIntensity = 0
Material1736.diffuseColor = [0.5,0.5,0.5]
Material1736.shininess = 0

Appearance1735.material = Material1736

Shape1734.appearance = Appearance1735
IndexedFaceSet1737 = x3d.IndexedFaceSet()
IndexedFaceSet1737.solid = False
IndexedFaceSet1737.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1737.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1738 = x3d.Coordinate()
Coordinate1738.point = [(13.45652, 0.075, 17.04097),(13.85051, 0.075, 16.96066),(13.59264, 0.075, 17.70875),(13.98663, 0.075, 17.62844),(13.72876, 0.075, 18.37653),(14.12274, 0.075, 18.29622)]

IndexedFaceSet1737.coord = Coordinate1738

Shape1734.geometry = IndexedFaceSet1737

Scene12.children.append(Shape1734)
Shape1739 = x3d.Shape()
Appearance1740 = x3d.Appearance()
Material1741 = x3d.Material()
Material1741.ambientIntensity = 0
Material1741.diffuseColor = [0.5,0.5,0.5]
Material1741.shininess = 0

Appearance1740.material = Material1741

Shape1739.appearance = Appearance1740
IndexedFaceSet1742 = x3d.IndexedFaceSet()
IndexedFaceSet1742.solid = False
IndexedFaceSet1742.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1742.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1743 = x3d.Coordinate()
Coordinate1743.point = [(11.2467, 0.075, 6.199749),(11.44369, 0.075, 6.159595),(11.64069, 0.075, 6.119441),(11.38282, 0.075, 6.867527),(11.57981, 0.075, 6.827373),(11.7768, 0.075, 6.787219),(11.51893, 0.075, 7.535305),(11.71593, 0.075, 7.495151),(11.91292, 0.075, 7.454997)]

IndexedFaceSet1742.coord = Coordinate1743

Shape1739.geometry = IndexedFaceSet1742

Scene12.children.append(Shape1739)
Shape1744 = x3d.Shape()
Appearance1745 = x3d.Appearance()
Material1746 = x3d.Material()
Material1746.ambientIntensity = 0
Material1746.diffuseColor = [0.5,0.5,0.5]
Material1746.shininess = 0

Appearance1745.material = Material1746

Shape1744.appearance = Appearance1745
IndexedFaceSet1747 = x3d.IndexedFaceSet()
IndexedFaceSet1747.solid = False
IndexedFaceSet1747.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1747.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1748 = x3d.Coordinate()
Coordinate1748.point = [(10.83312, 0.075, 6.284052),(11.03011, 0.075, 6.243898),(11.2271, 0.075, 6.203744),(10.96923, 0.075, 6.95183),(11.16623, 0.075, 6.911676),(11.36322, 0.075, 6.871522),(11.10535, 0.075, 7.619608),(11.30234, 0.075, 7.579454),(11.49934, 0.075, 7.539299)]

IndexedFaceSet1747.coord = Coordinate1748

Shape1744.geometry = IndexedFaceSet1747

Scene12.children.append(Shape1744)
Shape1749 = x3d.Shape()
Appearance1750 = x3d.Appearance()
Material1751 = x3d.Material()
Material1751.ambientIntensity = 0
Material1751.diffuseColor = [0.5,0.5,0.5]
Material1751.shininess = 0

Appearance1750.material = Material1751

Shape1749.appearance = Appearance1750
IndexedFaceSet1752 = x3d.IndexedFaceSet()
IndexedFaceSet1752.solid = False
IndexedFaceSet1752.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1752.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1753 = x3d.Coordinate()
Coordinate1753.point = [(10.82912, 0.075, 6.264455),(10.695, 0.075, 5.606476),(11.63669, 0.075, 6.099844),(11.50257, 0.075, 5.441864)]

IndexedFaceSet1752.coord = Coordinate1753

Shape1749.geometry = IndexedFaceSet1752

Scene12.children.append(Shape1749)
Shape1754 = x3d.Shape()
Appearance1755 = x3d.Appearance()
Material1756 = x3d.Material()
Material1756.ambientIntensity = 0
Material1756.diffuseColor = [0.5,0.5,0.5]
Material1756.shininess = 0

Appearance1755.material = Material1756

Shape1754.appearance = Appearance1755
IndexedFaceSet1757 = x3d.IndexedFaceSet()
IndexedFaceSet1757.solid = False
IndexedFaceSet1757.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1757.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1758 = x3d.Coordinate()
Coordinate1758.point = [(10.69101, 0.075, 5.586879),(10.55689, 0.075, 4.928899),(11.49858, 0.075, 5.422267),(11.36446, 0.075, 4.764288)]

IndexedFaceSet1757.coord = Coordinate1758

Shape1754.geometry = IndexedFaceSet1757

Scene12.children.append(Shape1754)
Shape1759 = x3d.Shape()
Appearance1760 = x3d.Appearance()
Material1761 = x3d.Material()
Material1761.ambientIntensity = 0
Material1761.diffuseColor = [0.5,0.5,0.5]
Material1761.shininess = 0

Appearance1760.material = Material1761

Shape1759.appearance = Appearance1760
IndexedFaceSet1762 = x3d.IndexedFaceSet()
IndexedFaceSet1762.solid = False
IndexedFaceSet1762.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1762.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1763 = x3d.Coordinate()
Coordinate1763.point = [(10.69424, 0.075, 3.489444),(11.08823, 0.075, 3.409135),(10.96648, 0.075, 4.824999),(11.36047, 0.075, 4.744691)]

IndexedFaceSet1762.coord = Coordinate1763

Shape1759.geometry = IndexedFaceSet1762

Scene12.children.append(Shape1759)
Shape1764 = x3d.Shape()
Appearance1765 = x3d.Appearance()
Material1766 = x3d.Material()
Material1766.ambientIntensity = 0
Material1766.diffuseColor = [0.5,0.5,0.5]
Material1766.shininess = 0

Appearance1765.material = Material1766

Shape1764.appearance = Appearance1765
IndexedFaceSet1767 = x3d.IndexedFaceSet()
IndexedFaceSet1767.solid = False
IndexedFaceSet1767.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1767.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1768 = x3d.Coordinate()
Coordinate1768.point = [(10.28066, 0.075, 3.573746),(10.47765, 0.075, 3.533592),(10.67465, 0.075, 3.493438),(10.41678, 0.075, 4.241524),(10.61377, 0.075, 4.20137),(10.81076, 0.075, 4.161216),(10.55289, 0.075, 4.909302),(10.74989, 0.075, 4.869148),(10.94688, 0.075, 4.828994)]

IndexedFaceSet1767.coord = Coordinate1768

Shape1764.geometry = IndexedFaceSet1767

Scene12.children.append(Shape1764)
Shape1769 = x3d.Shape()
Appearance1770 = x3d.Appearance()
Material1771 = x3d.Material()
Material1771.ambientIntensity = 0
Material1771.diffuseColor = [0.5,0.5,0.5]
Material1771.shininess = 0

Appearance1770.material = Material1771

Shape1769.appearance = Appearance1770
IndexedFaceSet1772 = x3d.IndexedFaceSet()
IndexedFaceSet1772.solid = False
IndexedFaceSet1772.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1772.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1773 = x3d.Coordinate()
Coordinate1773.point = [(10.27667, 0.075, 3.554149),(10.14255, 0.075, 2.89617),(11.08424, 0.075, 3.389538),(10.95012, 0.075, 2.731559)]

IndexedFaceSet1772.coord = Coordinate1773

Shape1769.geometry = IndexedFaceSet1772

Scene12.children.append(Shape1769)
Shape1774 = x3d.Shape()
Appearance1775 = x3d.Appearance()
Material1776 = x3d.Material()
Material1776.ambientIntensity = 0
Material1776.diffuseColor = [0.5,0.5,0.5]
Material1776.shininess = 0

Appearance1775.material = Material1776

Shape1774.appearance = Appearance1775
IndexedFaceSet1777 = x3d.IndexedFaceSet()
IndexedFaceSet1777.solid = False
IndexedFaceSet1777.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1777.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1778 = x3d.Coordinate()
Coordinate1778.point = [(10.13855, 0.075, 2.876573),(10.00443, 0.075, 2.218594),(10.94612, 0.075, 2.711962),(10.812, 0.075, 2.053982)]

IndexedFaceSet1777.coord = Coordinate1778

Shape1774.geometry = IndexedFaceSet1777

Scene12.children.append(Shape1774)
Shape1779 = x3d.Shape()
Appearance1780 = x3d.Appearance()
Material1781 = x3d.Material()
Material1781.ambientIntensity = 0
Material1781.diffuseColor = [0.5,0.5,0.5]
Material1781.shininess = 0

Appearance1780.material = Material1781

Shape1779.appearance = Appearance1780
IndexedFaceSet1782 = x3d.IndexedFaceSet()
IndexedFaceSet1782.solid = False
IndexedFaceSet1782.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1782.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1783 = x3d.Coordinate()
Coordinate1783.point = [(10.14007, 0.075, 7.110638),(10.00595, 0.075, 6.452658),(10.94764, 0.075, 6.946026),(10.81352, 0.075, 6.288047)]

IndexedFaceSet1782.coord = Coordinate1783

Shape1779.geometry = IndexedFaceSet1782

Scene12.children.append(Shape1779)
Shape1784 = x3d.Shape()
Appearance1785 = x3d.Appearance()
Material1786 = x3d.Material()
Material1786.ambientIntensity = 0
Material1786.diffuseColor = [0.5,0.5,0.5]
Material1786.shininess = 0

Appearance1785.material = Material1786

Shape1784.appearance = Appearance1785
IndexedFaceSet1787 = x3d.IndexedFaceSet()
IndexedFaceSet1787.solid = False
IndexedFaceSet1787.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1787.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1788 = x3d.Coordinate()
Coordinate1788.point = [(10.1433, 0.075, 5.013202),(10.53729, 0.075, 4.932894),(10.27942, 0.075, 5.68098),(10.67341, 0.075, 5.600672),(10.41554, 0.075, 6.348758),(10.80952, 0.075, 6.26845)]

IndexedFaceSet1787.coord = Coordinate1788

Shape1784.geometry = IndexedFaceSet1787

Scene12.children.append(Shape1784)
Shape1789 = x3d.Shape()
Appearance1790 = x3d.Appearance()
Material1791 = x3d.Material()
Material1791.ambientIntensity = 0
Material1791.diffuseColor = [0.5,0.5,0.5]
Material1791.shininess = 0

Appearance1790.material = Material1791

Shape1789.appearance = Appearance1790
IndexedFaceSet1792 = x3d.IndexedFaceSet()
IndexedFaceSet1792.solid = False
IndexedFaceSet1792.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1792.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1793 = x3d.Coordinate()
Coordinate1793.point = [(9.72972, 0.075, 5.097506),(10.12371, 0.075, 5.017197),(9.865837, 0.075, 5.765283),(10.25982, 0.075, 5.684975),(10.00195, 0.075, 6.433061),(10.39594, 0.075, 6.352753)]

IndexedFaceSet1792.coord = Coordinate1793

Shape1789.geometry = IndexedFaceSet1792

Scene12.children.append(Shape1789)
Shape1794 = x3d.Shape()
Appearance1795 = x3d.Appearance()
Material1796 = x3d.Material()
Material1796.ambientIntensity = 0
Material1796.diffuseColor = [0.5,0.5,0.5]
Material1796.shininess = 0

Appearance1795.material = Material1796

Shape1794.appearance = Appearance1795
IndexedFaceSet1797 = x3d.IndexedFaceSet()
IndexedFaceSet1797.solid = False
IndexedFaceSet1797.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1797.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1798 = x3d.Coordinate()
Coordinate1798.point = [(10.39918, 0.075, 4.255318),(10.5333, 0.075, 4.913297),(9.591606, 0.075, 4.419929),(9.725726, 0.075, 5.077909)]

IndexedFaceSet1797.coord = Coordinate1798

Shape1794.geometry = IndexedFaceSet1797

Scene12.children.append(Shape1794)
Shape1799 = x3d.Shape()
Appearance1800 = x3d.Appearance()
Material1801 = x3d.Material()
Material1801.ambientIntensity = 0
Material1801.diffuseColor = [0.5,0.5,0.5]
Material1801.shininess = 0

Appearance1800.material = Material1801

Shape1799.appearance = Appearance1800
IndexedFaceSet1802 = x3d.IndexedFaceSet()
IndexedFaceSet1802.solid = False
IndexedFaceSet1802.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1802.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1803 = x3d.Coordinate()
Coordinate1803.point = [(9.587612, 0.075, 4.400332),(9.453492, 0.075, 3.742352),(10.39518, 0.075, 4.235721),(10.26106, 0.075, 3.577741)]

IndexedFaceSet1802.coord = Coordinate1803

Shape1799.geometry = IndexedFaceSet1802

Scene12.children.append(Shape1799)
Shape1804 = x3d.Shape()
Appearance1805 = x3d.Appearance()
Material1806 = x3d.Material()
Material1806.ambientIntensity = 0
Material1806.diffuseColor = [0.5,0.5,0.5]
Material1806.shininess = 0

Appearance1805.material = Material1806

Shape1804.appearance = Appearance1805
IndexedFaceSet1807 = x3d.IndexedFaceSet()
IndexedFaceSet1807.solid = False
IndexedFaceSet1807.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1807.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1808 = x3d.Coordinate()
Coordinate1808.point = [(9.590848, 0.075, 2.302897),(9.984836, 0.075, 2.222588),(9.863082, 0.075, 3.638453),(10.25707, 0.075, 3.558144)]

IndexedFaceSet1807.coord = Coordinate1808

Shape1804.geometry = IndexedFaceSet1807

Scene12.children.append(Shape1804)
Shape1809 = x3d.Shape()
Appearance1810 = x3d.Appearance()
Material1811 = x3d.Material()
Material1811.ambientIntensity = 0
Material1811.diffuseColor = [0.5,0.5,0.5]
Material1811.shininess = 0

Appearance1810.material = Material1811

Shape1809.appearance = Appearance1810
IndexedFaceSet1812 = x3d.IndexedFaceSet()
IndexedFaceSet1812.solid = False
IndexedFaceSet1812.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1812.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1813 = x3d.Coordinate()
Coordinate1813.point = [(9.177264, 0.075, 2.3872),(9.571251, 0.075, 2.306891),(9.449498, 0.075, 3.722755),(9.843485, 0.075, 3.642447)]

IndexedFaceSet1812.coord = Coordinate1813

Shape1809.geometry = IndexedFaceSet1812

Scene12.children.append(Shape1809)
Shape1814 = x3d.Shape()
Appearance1815 = x3d.Appearance()
Material1816 = x3d.Material()
Material1816.ambientIntensity = 0
Material1816.diffuseColor = [0.5,0.5,0.5]
Material1816.shininess = 0

Appearance1815.material = Material1816

Shape1814.appearance = Appearance1815
IndexedFaceSet1817 = x3d.IndexedFaceSet()
IndexedFaceSet1817.solid = False
IndexedFaceSet1817.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1817.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1818 = x3d.Coordinate()
Coordinate1818.point = [(9.17327, 0.075, 2.367603),(9.03915, 0.075, 1.709623),(9.577055, 0.075, 2.285297),(9.442936, 0.075, 1.627318),(9.980841, 0.075, 2.202991),(9.846722, 0.075, 1.545012)]

IndexedFaceSet1817.coord = Coordinate1818

Shape1814.geometry = IndexedFaceSet1817

Scene12.children.append(Shape1814)
Shape1819 = x3d.Shape()
Appearance1820 = x3d.Appearance()
Material1821 = x3d.Material()
Material1821.ambientIntensity = 0
Material1821.diffuseColor = [0.5,0.5,0.5]
Material1821.shininess = 0

Appearance1820.material = Material1821

Shape1819.appearance = Appearance1820
IndexedFaceSet1822 = x3d.IndexedFaceSet()
IndexedFaceSet1822.solid = False
IndexedFaceSet1822.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1822.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1823 = x3d.Coordinate()
Coordinate1823.point = [(9.174786, 0.075, 6.601667),(9.040667, 0.075, 5.943688),(9.982357, 0.075, 6.437056),(9.848237, 0.075, 5.779077)]

IndexedFaceSet1822.coord = Coordinate1823

Shape1819.geometry = IndexedFaceSet1822

Scene12.children.append(Shape1819)
Shape1824 = x3d.Shape()
Appearance1825 = x3d.Appearance()
Material1826 = x3d.Material()
Material1826.ambientIntensity = 0
Material1826.diffuseColor = [0.5,0.5,0.5]
Material1826.shininess = 0

Appearance1825.material = Material1826

Shape1824.appearance = Appearance1825
IndexedFaceSet1827 = x3d.IndexedFaceSet()
IndexedFaceSet1827.solid = False
IndexedFaceSet1827.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1827.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1828 = x3d.Coordinate()
Coordinate1828.point = [(9.036672, 0.075, 5.924091),(8.902553, 0.075, 5.266111),(9.844243, 0.075, 5.75948),(9.710123, 0.075, 5.1015)]

IndexedFaceSet1827.coord = Coordinate1828

Shape1824.geometry = IndexedFaceSet1827

Scene12.children.append(Shape1824)
Shape1829 = x3d.Shape()
Appearance1830 = x3d.Appearance()
Material1831 = x3d.Material()
Material1831.ambientIntensity = 0
Material1831.diffuseColor = [0.5,0.5,0.5]
Material1831.shininess = 0

Appearance1830.material = Material1831

Shape1829.appearance = Appearance1830
IndexedFaceSet1832 = x3d.IndexedFaceSet()
IndexedFaceSet1832.solid = False
IndexedFaceSet1832.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1832.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1833 = x3d.Coordinate()
Coordinate1833.point = [(9.039908, 0.075, 3.826656),(9.236902, 0.075, 3.786501),(9.433895, 0.075, 3.746347),(9.176025, 0.075, 4.494433),(9.373018, 0.075, 4.454279),(9.570012, 0.075, 4.414125),(9.312142, 0.075, 5.162211),(9.509135, 0.075, 5.122057),(9.706129, 0.075, 5.081903)]

IndexedFaceSet1832.coord = Coordinate1833

Shape1829.geometry = IndexedFaceSet1832

Scene12.children.append(Shape1829)
Shape1834 = x3d.Shape()
Appearance1835 = x3d.Appearance()
Material1836 = x3d.Material()
Material1836.ambientIntensity = 0
Material1836.diffuseColor = [0.5,0.5,0.5]
Material1836.shininess = 0

Appearance1835.material = Material1836

Shape1834.appearance = Appearance1835
IndexedFaceSet1837 = x3d.IndexedFaceSet()
IndexedFaceSet1837.solid = False
IndexedFaceSet1837.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1837.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1838 = x3d.Coordinate()
Coordinate1838.point = [(9.292545, 0.075, 5.166206),(8.898558, 0.075, 5.246514),(9.156428, 0.075, 4.498428),(8.762442, 0.075, 4.578736),(9.020311, 0.075, 3.83065),(8.626325, 0.075, 3.910959)]

IndexedFaceSet1837.coord = Coordinate1838

Shape1834.geometry = IndexedFaceSet1837

Scene12.children.append(Shape1834)
Shape1839 = x3d.Shape()
Appearance1840 = x3d.Appearance()
Material1841 = x3d.Material()
Material1841.ambientIntensity = 0
Material1841.diffuseColor = [0.5,0.5,0.5]
Material1841.shininess = 0

Appearance1840.material = Material1841

Shape1839.appearance = Appearance1840
IndexedFaceSet1842 = x3d.IndexedFaceSet()
IndexedFaceSet1842.solid = False
IndexedFaceSet1842.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1842.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1843 = x3d.Coordinate()
Coordinate1843.point = [(8.62233, 0.075, 3.891361),(8.488211, 0.075, 3.233382),(9.429901, 0.075, 3.72675),(9.295781, 0.075, 3.068771)]

IndexedFaceSet1842.coord = Coordinate1843

Shape1839.geometry = IndexedFaceSet1842

Scene12.children.append(Shape1839)
Shape1844 = x3d.Shape()
Appearance1845 = x3d.Appearance()
Material1846 = x3d.Material()
Material1846.ambientIntensity = 0
Material1846.diffuseColor = [0.5,0.5,0.5]
Material1846.shininess = 0

Appearance1845.material = Material1846

Shape1844.appearance = Appearance1845
IndexedFaceSet1847 = x3d.IndexedFaceSet()
IndexedFaceSet1847.solid = False
IndexedFaceSet1847.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1847.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1848 = x3d.Coordinate()
Coordinate1848.point = [(8.484216, 0.075, 3.213785),(8.350097, 0.075, 2.555806),(9.291787, 0.075, 3.049174),(9.157667, 0.075, 2.391194)]

IndexedFaceSet1847.coord = Coordinate1848

Shape1844.geometry = IndexedFaceSet1847

Scene12.children.append(Shape1844)
Shape1849 = x3d.Shape()
Appearance1850 = x3d.Appearance()
Material1851 = x3d.Material()
Material1851.ambientIntensity = 0
Material1851.diffuseColor = [0.5,0.5,0.5]
Material1851.shininess = 0

Appearance1850.material = Material1851

Shape1849.appearance = Appearance1850
IndexedFaceSet1852 = x3d.IndexedFaceSet()
IndexedFaceSet1852.solid = False
IndexedFaceSet1852.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1852.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1853 = x3d.Coordinate()
Coordinate1853.point = [(8.487453, 0.075, 1.11635),(8.684446, 0.075, 1.076196),(8.881439, 0.075, 1.036041),(8.623569, 0.075, 1.784128),(8.820562, 0.075, 1.743973),(9.017556, 0.075, 1.703819),(8.759686, 0.075, 2.451906),(8.956679, 0.075, 2.411752),(9.153673, 0.075, 2.371597)]

IndexedFaceSet1852.coord = Coordinate1853

Shape1849.geometry = IndexedFaceSet1852

Scene12.children.append(Shape1849)
Shape1854 = x3d.Shape()
Appearance1855 = x3d.Appearance()
Material1856 = x3d.Material()
Material1856.ambientIntensity = 0
Material1856.diffuseColor = [0.5,0.5,0.5]
Material1856.shininess = 0

Appearance1855.material = Material1856

Shape1854.appearance = Appearance1855
IndexedFaceSet1857 = x3d.IndexedFaceSet()
IndexedFaceSet1857.solid = False
IndexedFaceSet1857.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1857.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1858 = x3d.Coordinate()
Coordinate1858.point = [(8.073869, 0.075, 1.200653),(8.270862, 0.075, 1.160499),(8.467855, 0.075, 1.120344),(8.209986, 0.075, 1.868431),(8.406979, 0.075, 1.828277),(8.603972, 0.075, 1.788122),(8.346102, 0.075, 2.536209),(8.543096, 0.075, 2.496054),(8.740088, 0.075, 2.4559)]

IndexedFaceSet1857.coord = Coordinate1858

Shape1854.geometry = IndexedFaceSet1857

Scene12.children.append(Shape1854)
Shape1859 = x3d.Shape()
Appearance1860 = x3d.Appearance()
Material1861 = x3d.Material()
Material1861.ambientIntensity = 0
Material1861.diffuseColor = [0.5,0.5,0.5]
Material1861.shininess = 0

Appearance1860.material = Material1861

Shape1859.appearance = Appearance1860
IndexedFaceSet1862 = x3d.IndexedFaceSet()
IndexedFaceSet1862.solid = False
IndexedFaceSet1862.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet1862.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate1863 = x3d.Coordinate()
Coordinate1863.point = [(8.743325, 0.075, 0.3584649),(8.810385, 0.075, 0.6874546),(8.877445, 0.075, 1.016444),(7.935755, 0.075, 0.5230764),(8.002814, 0.075, 0.8520661),(8.069874, 0.075, 1.181056)]

IndexedFaceSet1862.coord = Coordinate1863

Shape1859.geometry = IndexedFaceSet1862

Scene12.children.append(Shape1859)
Shape1864 = x3d.Shape()
Appearance1865 = x3d.Appearance()
Material1866 = x3d.Material()
Material1866.ambientIntensity = 0
Material1866.diffuseColor = [0.5,0.5,0.5]
Material1866.shininess = 0

Appearance1865.material = Material1866

Shape1864.appearance = Appearance1865
IndexedFaceSet1867 = x3d.IndexedFaceSet()
IndexedFaceSet1867.solid = False
IndexedFaceSet1867.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1867.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1868 = x3d.Coordinate()
Coordinate1868.point = [(8.488969, 0.075, 5.350414),(8.882956, 0.075, 5.270106),(8.761202, 0.075, 6.68597),(9.155189, 0.075, 6.605662)]

IndexedFaceSet1867.coord = Coordinate1868

Shape1864.geometry = IndexedFaceSet1867

Scene12.children.append(Shape1864)
Shape1869 = x3d.Shape()
Appearance1870 = x3d.Appearance()
Material1871 = x3d.Material()
Material1871.ambientIntensity = 0
Material1871.diffuseColor = [0.5,0.5,0.5]
Material1871.shininess = 0

Appearance1870.material = Material1871

Shape1869.appearance = Appearance1870
IndexedFaceSet1872 = x3d.IndexedFaceSet()
IndexedFaceSet1872.solid = False
IndexedFaceSet1872.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1872.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1873 = x3d.Coordinate()
Coordinate1873.point = [(8.741605, 0.075, 6.689965),(8.544612, 0.075, 6.730119),(8.347618, 0.075, 6.770273),(8.605488, 0.075, 6.022187),(8.408495, 0.075, 6.062341),(8.211501, 0.075, 6.102495),(8.469372, 0.075, 5.354409),(8.272378, 0.075, 5.394563),(8.075385, 0.075, 5.434718)]

IndexedFaceSet1872.coord = Coordinate1873

Shape1869.geometry = IndexedFaceSet1872

Scene12.children.append(Shape1869)
Shape1874 = x3d.Shape()
Appearance1875 = x3d.Appearance()
Material1876 = x3d.Material()
Material1876.ambientIntensity = 0
Material1876.diffuseColor = [0.5,0.5,0.5]
Material1876.shininess = 0

Appearance1875.material = Material1876

Shape1874.appearance = Appearance1875
IndexedFaceSet1877 = x3d.IndexedFaceSet()
IndexedFaceSet1877.solid = False
IndexedFaceSet1877.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1877.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1878 = x3d.Coordinate()
Coordinate1878.point = [(8.07139, 0.075, 5.415121),(7.937271, 0.075, 4.757141),(8.878961, 0.075, 5.250509),(8.744842, 0.075, 4.59253)]

IndexedFaceSet1877.coord = Coordinate1878

Shape1874.geometry = IndexedFaceSet1877

Scene12.children.append(Shape1874)
Shape1879 = x3d.Shape()
Appearance1880 = x3d.Appearance()
Material1881 = x3d.Material()
Material1881.ambientIntensity = 0
Material1881.diffuseColor = [0.5,0.5,0.5]
Material1881.shininess = 0

Appearance1880.material = Material1881

Shape1879.appearance = Appearance1880
IndexedFaceSet1882 = x3d.IndexedFaceSet()
IndexedFaceSet1882.solid = False
IndexedFaceSet1882.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1882.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1883 = x3d.Coordinate()
Coordinate1883.point = [(7.933276, 0.075, 4.737544),(7.799157, 0.075, 4.079565),(8.337062, 0.075, 4.655238),(8.202942, 0.075, 3.997259),(8.740847, 0.075, 4.572933),(8.606728, 0.075, 3.914953)]

IndexedFaceSet1882.coord = Coordinate1883

Shape1879.geometry = IndexedFaceSet1882

Scene12.children.append(Shape1879)
Shape1884 = x3d.Shape()
Appearance1885 = x3d.Appearance()
Material1886 = x3d.Material()
Material1886.ambientIntensity = 0
Material1886.diffuseColor = [0.5,0.5,0.5]
Material1886.shininess = 0

Appearance1885.material = Material1886

Shape1884.appearance = Appearance1885
IndexedFaceSet1887 = x3d.IndexedFaceSet()
IndexedFaceSet1887.solid = False
IndexedFaceSet1887.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1887.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1888 = x3d.Coordinate()
Coordinate1888.point = [(7.936512, 0.075, 2.640109),(8.3305, 0.075, 2.5598),(8.208746, 0.075, 3.975665),(8.602733, 0.075, 3.895356)]

IndexedFaceSet1887.coord = Coordinate1888

Shape1884.geometry = IndexedFaceSet1887

Scene12.children.append(Shape1884)
Shape1889 = x3d.Shape()
Appearance1890 = x3d.Appearance()
Material1891 = x3d.Material()
Material1891.ambientIntensity = 0
Material1891.diffuseColor = [0.5,0.5,0.5]
Material1891.shininess = 0

Appearance1890.material = Material1891

Shape1889.appearance = Appearance1890
IndexedFaceSet1892 = x3d.IndexedFaceSet()
IndexedFaceSet1892.solid = False
IndexedFaceSet1892.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1892.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1893 = x3d.Coordinate()
Coordinate1893.point = [(8.189149, 0.075, 3.979659),(7.992156, 0.075, 4.019814),(7.795162, 0.075, 4.059968),(8.053032, 0.075, 3.311881),(7.856039, 0.075, 3.352035),(7.659045, 0.075, 3.39219),(7.916915, 0.075, 2.644103),(7.719922, 0.075, 2.684258),(7.522929, 0.075, 2.724412)]

IndexedFaceSet1892.coord = Coordinate1893

Shape1889.geometry = IndexedFaceSet1892

Scene12.children.append(Shape1889)
Shape1894 = x3d.Shape()
Appearance1895 = x3d.Appearance()
Material1896 = x3d.Material()
Material1896.ambientIntensity = 0
Material1896.diffuseColor = [0.5,0.5,0.5]
Material1896.shininess = 0

Appearance1895.material = Material1896

Shape1894.appearance = Appearance1895
IndexedFaceSet1897 = x3d.IndexedFaceSet()
IndexedFaceSet1897.solid = False
IndexedFaceSet1897.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1897.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1898 = x3d.Coordinate()
Coordinate1898.point = [(7.518934, 0.075, 2.704815),(7.384815, 0.075, 2.046835),(8.326505, 0.075, 2.540203),(8.192386, 0.075, 1.882224)]

IndexedFaceSet1897.coord = Coordinate1898

Shape1894.geometry = IndexedFaceSet1897

Scene12.children.append(Shape1894)
Shape1899 = x3d.Shape()
Appearance1900 = x3d.Appearance()
Material1901 = x3d.Material()
Material1901.ambientIntensity = 0
Material1901.diffuseColor = [0.5,0.5,0.5]
Material1901.shininess = 0

Appearance1900.material = Material1901

Shape1899.appearance = Appearance1900
IndexedFaceSet1902 = x3d.IndexedFaceSet()
IndexedFaceSet1902.solid = False
IndexedFaceSet1902.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1902.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1903 = x3d.Coordinate()
Coordinate1903.point = [(7.38082, 0.075, 2.027238),(7.246701, 0.075, 1.369259),(8.188391, 0.075, 1.862627),(8.054272, 0.075, 1.204647)]

IndexedFaceSet1902.coord = Coordinate1903

Shape1899.geometry = IndexedFaceSet1902

Scene12.children.append(Shape1899)
Shape1904 = x3d.Shape()
Appearance1905 = x3d.Appearance()
Material1906 = x3d.Material()
Material1906.ambientIntensity = 0
Material1906.diffuseColor = [0.5,0.5,0.5]
Material1906.shininess = 0

Appearance1905.material = Material1906

Shape1904.appearance = Appearance1905
IndexedFaceSet1907 = x3d.IndexedFaceSet()
IndexedFaceSet1907.solid = False
IndexedFaceSet1907.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1907.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1908 = x3d.Coordinate()
Coordinate1908.point = [(7.384057, 0.075, -0.07019704),(7.58105, 0.075, -0.1103513),(7.778044, 0.075, -0.1505055),(7.520174, 0.075, 0.5975809),(7.717167, 0.075, 0.5574267),(7.91416, 0.075, 0.5172724),(7.65629, 0.075, 1.265359),(7.853283, 0.075, 1.225205),(8.050277, 0.075, 1.18505)]

IndexedFaceSet1907.coord = Coordinate1908

Shape1904.geometry = IndexedFaceSet1907

Scene12.children.append(Shape1904)
Shape1909 = x3d.Shape()
Appearance1910 = x3d.Appearance()
Material1911 = x3d.Material()
Material1911.ambientIntensity = 0
Material1911.diffuseColor = [0.5,0.5,0.5]
Material1911.shininess = 0

Appearance1910.material = Material1911

Shape1909.appearance = Appearance1910
IndexedFaceSet1912 = x3d.IndexedFaceSet()
IndexedFaceSet1912.solid = False
IndexedFaceSet1912.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1912.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1913 = x3d.Coordinate()
Coordinate1913.point = [(6.970473, 0.075, 0.01410597),(7.36446, 0.075, -0.06620247),(7.242706, 0.075, 1.349662),(7.636693, 0.075, 1.269353)]

IndexedFaceSet1912.coord = Coordinate1913

Shape1909.geometry = IndexedFaceSet1912

Scene12.children.append(Shape1909)
Shape1914 = x3d.Shape()
Appearance1915 = x3d.Appearance()
Material1916 = x3d.Material()
Material1916.ambientIntensity = 0
Material1916.diffuseColor = [0.5,0.5,0.5]
Material1916.shininess = 0

Appearance1915.material = Material1916

Shape1914.appearance = Appearance1915
IndexedFaceSet1917 = x3d.IndexedFaceSet()
IndexedFaceSet1917.solid = False
IndexedFaceSet1917.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1917.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1918 = x3d.Coordinate()
Coordinate1918.point = [(7.382336, 0.075, 6.261303),(7.315277, 0.075, 5.932313),(7.248217, 0.075, 5.603323),(7.786121, 0.075, 6.178997),(7.719062, 0.075, 5.850008),(7.652002, 0.075, 5.521018),(8.189907, 0.075, 6.096692),(8.122848, 0.075, 5.767702),(8.055788, 0.075, 5.438712)]

IndexedFaceSet1917.coord = Coordinate1918

Shape1914.geometry = IndexedFaceSet1917

Scene12.children.append(Shape1914)
Shape1919 = x3d.Shape()
Appearance1920 = x3d.Appearance()
Material1921 = x3d.Material()
Material1921.ambientIntensity = 0
Material1921.diffuseColor = [0.5,0.5,0.5]
Material1921.shininess = 0

Appearance1920.material = Material1921

Shape1919.appearance = Appearance1920
IndexedFaceSet1922 = x3d.IndexedFaceSet()
IndexedFaceSet1922.solid = False
IndexedFaceSet1922.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1922.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1923 = x3d.Coordinate()
Coordinate1923.point = [(7.385573, 0.075, 4.163867),(7.77956, 0.075, 4.083559),(7.657806, 0.075, 5.499424),(8.051793, 0.075, 5.419115)]

IndexedFaceSet1922.coord = Coordinate1923

Shape1919.geometry = IndexedFaceSet1922

Scene12.children.append(Shape1919)
Shape1924 = x3d.Shape()
Appearance1925 = x3d.Appearance()
Material1926 = x3d.Material()
Material1926.ambientIntensity = 0
Material1926.diffuseColor = [0.5,0.5,0.5]
Material1926.shininess = 0

Appearance1925.material = Material1926

Shape1924.appearance = Appearance1925
IndexedFaceSet1927 = x3d.IndexedFaceSet()
IndexedFaceSet1927.solid = False
IndexedFaceSet1927.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1927.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1928 = x3d.Coordinate()
Coordinate1928.point = [(6.971989, 0.075, 4.24817),(7.365976, 0.075, 4.167862),(7.244222, 0.075, 5.583726),(7.638209, 0.075, 5.503418)]

IndexedFaceSet1927.coord = Coordinate1928

Shape1924.geometry = IndexedFaceSet1927

Scene12.children.append(Shape1924)
Shape1929 = x3d.Shape()
Appearance1930 = x3d.Appearance()
Material1931 = x3d.Material()
Material1931.ambientIntensity = 0
Material1931.diffuseColor = [0.5,0.5,0.5]
Material1931.shininess = 0

Appearance1930.material = Material1931

Shape1929.appearance = Appearance1930
IndexedFaceSet1932 = x3d.IndexedFaceSet()
IndexedFaceSet1932.solid = False
IndexedFaceSet1932.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1932.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1933 = x3d.Coordinate()
Coordinate1933.point = [(6.967994, 0.075, 4.228573),(6.833875, 0.075, 3.570594),(7.775565, 0.075, 4.063962),(7.641446, 0.075, 3.405983)]

IndexedFaceSet1932.coord = Coordinate1933

Shape1929.geometry = IndexedFaceSet1932

Scene12.children.append(Shape1929)
Shape1934 = x3d.Shape()
Appearance1935 = x3d.Appearance()
Material1936 = x3d.Material()
Material1936.ambientIntensity = 0
Material1936.diffuseColor = [0.5,0.5,0.5]
Material1936.shininess = 0

Appearance1935.material = Material1936

Shape1934.appearance = Appearance1935
IndexedFaceSet1937 = x3d.IndexedFaceSet()
IndexedFaceSet1937.solid = False
IndexedFaceSet1937.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1937.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1938 = x3d.Coordinate()
Coordinate1938.point = [(6.82988, 0.075, 3.550997),(6.695761, 0.075, 2.893018),(7.637451, 0.075, 3.386386),(7.503332, 0.075, 2.728406)]

IndexedFaceSet1937.coord = Coordinate1938

Shape1934.geometry = IndexedFaceSet1937

Scene12.children.append(Shape1934)
Shape1939 = x3d.Shape()
Appearance1940 = x3d.Appearance()
Material1941 = x3d.Material()
Material1941.ambientIntensity = 0
Material1941.diffuseColor = [0.5,0.5,0.5]
Material1941.shininess = 0

Appearance1940.material = Material1941

Shape1939.appearance = Appearance1940
IndexedFaceSet1942 = x3d.IndexedFaceSet()
IndexedFaceSet1942.solid = False
IndexedFaceSet1942.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet1942.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate1943 = x3d.Coordinate()
Coordinate1943.point = [(7.499337, 0.075, 2.708809),(7.302343, 0.075, 2.748963),(7.10535, 0.075, 2.789118),(7.36322, 0.075, 2.041031),(7.166227, 0.075, 2.081186),(6.969234, 0.075, 2.12134),(7.227104, 0.075, 1.373253),(7.03011, 0.075, 1.413408),(6.833117, 0.075, 1.453562)]

IndexedFaceSet1942.coord = Coordinate1943

Shape1939.geometry = IndexedFaceSet1942

Scene12.children.append(Shape1939)
Shape1944 = x3d.Shape()
Appearance1945 = x3d.Appearance()
Material1946 = x3d.Material()
Material1946.ambientIntensity = 0
Material1946.diffuseColor = [0.5,0.5,0.5]
Material1946.shininess = 0

Appearance1945.material = Material1946

Shape1944.appearance = Appearance1945
IndexedFaceSet1947 = x3d.IndexedFaceSet()
IndexedFaceSet1947.solid = False
IndexedFaceSet1947.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1947.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1948 = x3d.Coordinate()
Coordinate1948.point = [(6.419533, 0.075, 1.537865),(6.813519, 0.075, 1.457556),(6.691766, 0.075, 2.873421),(7.085753, 0.075, 2.793112)]

IndexedFaceSet1947.coord = Coordinate1948

Shape1944.geometry = IndexedFaceSet1947

Scene12.children.append(Shape1944)
Shape1949 = x3d.Shape()
Appearance1950 = x3d.Appearance()
Material1951 = x3d.Material()
Material1951.ambientIntensity = 0
Material1951.diffuseColor = [0.5,0.5,0.5]
Material1951.shininess = 0

Appearance1950.material = Material1951

Shape1949.appearance = Appearance1950
IndexedFaceSet1952 = x3d.IndexedFaceSet()
IndexedFaceSet1952.solid = False
IndexedFaceSet1952.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1952.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1953 = x3d.Coordinate()
Coordinate1953.point = [(7.08899, 0.075, 0.695677),(7.223109, 0.075, 1.353656),(6.281419, 0.075, 0.8602884),(6.415538, 0.075, 1.518268)]

IndexedFaceSet1952.coord = Coordinate1953

Shape1949.geometry = IndexedFaceSet1952

Scene12.children.append(Shape1949)
Shape1954 = x3d.Shape()
Appearance1955 = x3d.Appearance()
Material1956 = x3d.Material()
Material1956.ambientIntensity = 0
Material1956.diffuseColor = [0.5,0.5,0.5]
Material1956.shininess = 0

Appearance1955.material = Material1956

Shape1954.appearance = Appearance1955
IndexedFaceSet1957 = x3d.IndexedFaceSet()
IndexedFaceSet1957.solid = False
IndexedFaceSet1957.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1957.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1958 = x3d.Coordinate()
Coordinate1958.point = [(6.277424, 0.075, 0.8406914),(6.143305, 0.075, 0.182712),(7.084995, 0.075, 0.6760799),(6.950876, 0.075, 0.01810054)]

IndexedFaceSet1957.coord = Coordinate1958

Shape1954.geometry = IndexedFaceSet1957

Scene12.children.append(Shape1954)
Shape1959 = x3d.Shape()
Appearance1960 = x3d.Appearance()
Material1961 = x3d.Material()
Material1961.ambientIntensity = 0
Material1961.diffuseColor = [0.5,0.5,0.5]
Material1961.shininess = 0

Appearance1960.material = Material1961

Shape1959.appearance = Appearance1960
IndexedFaceSet1962 = x3d.IndexedFaceSet()
IndexedFaceSet1962.solid = False
IndexedFaceSet1962.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1962.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1963 = x3d.Coordinate()
Coordinate1963.point = [(6.417054, 0.075, 5.752332),(6.282935, 0.075, 5.094353),(7.224625, 0.075, 5.587721),(7.090506, 0.075, 4.929741)]

IndexedFaceSet1962.coord = Coordinate1963

Shape1959.geometry = IndexedFaceSet1962

Scene12.children.append(Shape1959)
Shape1964 = x3d.Shape()
Appearance1965 = x3d.Appearance()
Material1966 = x3d.Material()
Material1966.ambientIntensity = 0
Material1966.diffuseColor = [0.5,0.5,0.5]
Material1966.shininess = 0

Appearance1965.material = Material1966

Shape1964.appearance = Appearance1965
IndexedFaceSet1967 = x3d.IndexedFaceSet()
IndexedFaceSet1967.solid = False
IndexedFaceSet1967.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet1967.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate1968 = x3d.Coordinate()
Coordinate1968.point = [(6.27894, 0.075, 5.074756),(6.144821, 0.075, 4.416777),(6.682726, 0.075, 4.99245),(6.548606, 0.075, 4.334471),(7.086511, 0.075, 4.910144),(6.952392, 0.075, 4.252165)]

IndexedFaceSet1967.coord = Coordinate1968

Shape1964.geometry = IndexedFaceSet1967

Scene12.children.append(Shape1964)
Shape1969 = x3d.Shape()
Appearance1970 = x3d.Appearance()
Material1971 = x3d.Material()
Material1971.ambientIntensity = 0
Material1971.diffuseColor = [0.5,0.5,0.5]
Material1971.shininess = 0

Appearance1970.material = Material1971

Shape1969.appearance = Appearance1970
IndexedFaceSet1972 = x3d.IndexedFaceSet()
IndexedFaceSet1972.solid = False
IndexedFaceSet1972.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1972.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1973 = x3d.Coordinate()
Coordinate1973.point = [(6.282177, 0.075, 2.977321),(6.676164, 0.075, 2.897012),(6.55441, 0.075, 4.312877),(6.948397, 0.075, 4.232568)]

IndexedFaceSet1972.coord = Coordinate1973

Shape1969.geometry = IndexedFaceSet1972

Scene12.children.append(Shape1969)
Shape1974 = x3d.Shape()
Appearance1975 = x3d.Appearance()
Material1976 = x3d.Material()
Material1976.ambientIntensity = 0
Material1976.diffuseColor = [0.5,0.5,0.5]
Material1976.shininess = 0

Appearance1975.material = Material1976

Shape1974.appearance = Appearance1975
IndexedFaceSet1977 = x3d.IndexedFaceSet()
IndexedFaceSet1977.solid = False
IndexedFaceSet1977.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1977.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1978 = x3d.Coordinate()
Coordinate1978.point = [(5.868593, 0.075, 3.061624),(6.26258, 0.075, 2.981315),(6.140826, 0.075, 4.39718),(6.534813, 0.075, 4.316871)]

IndexedFaceSet1977.coord = Coordinate1978

Shape1974.geometry = IndexedFaceSet1977

Scene12.children.append(Shape1974)
Shape1979 = x3d.Shape()
Appearance1980 = x3d.Appearance()
Material1981 = x3d.Material()
Material1981.ambientIntensity = 0
Material1981.diffuseColor = [0.5,0.5,0.5]
Material1981.shininess = 0

Appearance1980.material = Material1981

Shape1979.appearance = Appearance1980
IndexedFaceSet1982 = x3d.IndexedFaceSet()
IndexedFaceSet1982.solid = False
IndexedFaceSet1982.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1982.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1983 = x3d.Coordinate()
Coordinate1983.point = [(6.53805, 0.075, 2.219436),(6.672169, 0.075, 2.877415),(5.730479, 0.075, 2.384047),(5.864598, 0.075, 3.042027)]

IndexedFaceSet1982.coord = Coordinate1983

Shape1979.geometry = IndexedFaceSet1982

Scene12.children.append(Shape1979)
Shape1984 = x3d.Shape()
Appearance1985 = x3d.Appearance()
Material1986 = x3d.Material()
Material1986.ambientIntensity = 0
Material1986.diffuseColor = [0.5,0.5,0.5]
Material1986.shininess = 0

Appearance1985.material = Material1986

Shape1984.appearance = Appearance1985
IndexedFaceSet1987 = x3d.IndexedFaceSet()
IndexedFaceSet1987.solid = False
IndexedFaceSet1987.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1987.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1988 = x3d.Coordinate()
Coordinate1988.point = [(5.726484, 0.075, 2.36445),(5.592365, 0.075, 1.706471),(6.534055, 0.075, 2.199839),(6.399936, 0.075, 1.541859)]

IndexedFaceSet1987.coord = Coordinate1988

Shape1984.geometry = IndexedFaceSet1987

Scene12.children.append(Shape1984)
Shape1989 = x3d.Shape()
Appearance1990 = x3d.Appearance()
Material1991 = x3d.Material()
Material1991.ambientIntensity = 0
Material1991.diffuseColor = [0.5,0.5,0.5]
Material1991.shininess = 0

Appearance1990.material = Material1991

Shape1989.appearance = Appearance1990
IndexedFaceSet1992 = x3d.IndexedFaceSet()
IndexedFaceSet1992.solid = False
IndexedFaceSet1992.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1992.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1993 = x3d.Coordinate()
Coordinate1993.point = [(6.395941, 0.075, 1.522262),(6.001954, 0.075, 1.602571),(6.123708, 0.075, 0.1867066),(5.729721, 0.075, 0.267015)]

IndexedFaceSet1992.coord = Coordinate1993

Shape1989.geometry = IndexedFaceSet1992

Scene12.children.append(Shape1989)
Shape1994 = x3d.Shape()
Appearance1995 = x3d.Appearance()
Material1996 = x3d.Material()
Material1996.ambientIntensity = 0
Material1996.diffuseColor = [0.5,0.5,0.5]
Material1996.shininess = 0

Appearance1995.material = Material1996

Shape1994.appearance = Appearance1995
IndexedFaceSet1997 = x3d.IndexedFaceSet()
IndexedFaceSet1997.solid = False
IndexedFaceSet1997.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet1997.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate1998 = x3d.Coordinate()
Coordinate1998.point = [(5.316137, 0.075, 0.351318),(5.710124, 0.075, 0.2710096),(5.58837, 0.075, 1.686874),(5.982357, 0.075, 1.606565)]

IndexedFaceSet1997.coord = Coordinate1998

Shape1994.geometry = IndexedFaceSet1997

Scene12.children.append(Shape1994)
Shape1999 = x3d.Shape()
Appearance2000 = x3d.Appearance()
Material2001 = x3d.Material()
Material2001.ambientIntensity = 0
Material2001.diffuseColor = [0.5,0.5,0.5]
Material2001.shininess = 0

Appearance2000.material = Material2001

Shape1999.appearance = Appearance2000
IndexedFaceSet2002 = x3d.IndexedFaceSet()
IndexedFaceSet2002.solid = False
IndexedFaceSet2002.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2002.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2003 = x3d.Coordinate()
Coordinate2003.point = [(5.731237, 0.075, 4.50108),(6.125224, 0.075, 4.420771),(6.00347, 0.075, 5.836636),(6.397457, 0.075, 5.756327)]

IndexedFaceSet2002.coord = Coordinate2003

Shape1999.geometry = IndexedFaceSet2002

Scene12.children.append(Shape1999)
Shape2004 = x3d.Shape()
Appearance2005 = x3d.Appearance()
Material2006 = x3d.Material()
Material2006.ambientIntensity = 0
Material2006.diffuseColor = [0.5,0.5,0.5]
Material2006.shininess = 0

Appearance2005.material = Material2006

Shape2004.appearance = Appearance2005
IndexedFaceSet2007 = x3d.IndexedFaceSet()
IndexedFaceSet2007.solid = False
IndexedFaceSet2007.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2007.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2008 = x3d.Coordinate()
Coordinate2008.point = [(5.983873, 0.075, 5.84063),(5.589886, 0.075, 5.920938),(5.71164, 0.075, 4.505074),(5.317653, 0.075, 4.585382)]

IndexedFaceSet2007.coord = Coordinate2008

Shape2004.geometry = IndexedFaceSet2007

Scene12.children.append(Shape2004)
Shape2009 = x3d.Shape()
Appearance2010 = x3d.Appearance()
Material2011 = x3d.Material()
Material2011.ambientIntensity = 0
Material2011.diffuseColor = [0.5,0.5,0.5]
Material2011.shininess = 0

Appearance2010.material = Material2011

Shape2009.appearance = Appearance2010
IndexedFaceSet2012 = x3d.IndexedFaceSet()
IndexedFaceSet2012.solid = False
IndexedFaceSet2012.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2012.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2013 = x3d.Coordinate()
Coordinate2013.point = [(5.313658, 0.075, 4.565785),(5.179539, 0.075, 3.907806),(6.121229, 0.075, 4.401174),(5.98711, 0.075, 3.743195)]

IndexedFaceSet2012.coord = Coordinate2013

Shape2009.geometry = IndexedFaceSet2012

Scene12.children.append(Shape2009)
Shape2014 = x3d.Shape()
Appearance2015 = x3d.Appearance()
Material2016 = x3d.Material()
Material2016.ambientIntensity = 0
Material2016.diffuseColor = [0.5,0.5,0.5]
Material2016.shininess = 0

Appearance2015.material = Material2016

Shape2014.appearance = Appearance2015
IndexedFaceSet2017 = x3d.IndexedFaceSet()
IndexedFaceSet2017.solid = False
IndexedFaceSet2017.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2017.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2018 = x3d.Coordinate()
Coordinate2018.point = [(5.175544, 0.075, 3.888209),(5.041425, 0.075, 3.23023),(5.983115, 0.075, 3.723598),(5.848996, 0.075, 3.065618)]

IndexedFaceSet2017.coord = Coordinate2018

Shape2014.geometry = IndexedFaceSet2017

Scene12.children.append(Shape2014)
Shape2019 = x3d.Shape()
Appearance2020 = x3d.Appearance()
Material2021 = x3d.Material()
Material2021.ambientIntensity = 0
Material2021.diffuseColor = [0.5,0.5,0.5]
Material2021.shininess = 0

Appearance2020.material = Material2021

Shape2019.appearance = Appearance2020
IndexedFaceSet2022 = x3d.IndexedFaceSet()
IndexedFaceSet2022.solid = False
IndexedFaceSet2022.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2022.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2023 = x3d.Coordinate()
Coordinate2023.point = [(5.178781, 0.075, 1.790774),(5.375774, 0.075, 1.75062),(5.572768, 0.075, 1.710465),(5.314898, 0.075, 2.458552),(5.511891, 0.075, 2.418398),(5.708885, 0.075, 2.378243),(5.451015, 0.075, 3.12633),(5.648008, 0.075, 3.086175),(5.845001, 0.075, 3.046021)]

IndexedFaceSet2022.coord = Coordinate2023

Shape2019.geometry = IndexedFaceSet2022

Scene12.children.append(Shape2019)
Shape2024 = x3d.Shape()
Appearance2025 = x3d.Appearance()
Material2026 = x3d.Material()
Material2026.ambientIntensity = 0
Material2026.diffuseColor = [0.5,0.5,0.5]
Material2026.shininess = 0

Appearance2025.material = Material2026

Shape2024.appearance = Appearance2025
IndexedFaceSet2027 = x3d.IndexedFaceSet()
IndexedFaceSet2027.solid = False
IndexedFaceSet2027.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2027.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2028 = x3d.Coordinate()
Coordinate2028.point = [(4.765197, 0.075, 1.875077),(5.159184, 0.075, 1.794768),(5.03743, 0.075, 3.210633),(5.431417, 0.075, 3.130324)]

IndexedFaceSet2027.coord = Coordinate2028

Shape2024.geometry = IndexedFaceSet2027

Scene12.children.append(Shape2024)
Shape2029 = x3d.Shape()
Appearance2030 = x3d.Appearance()
Material2031 = x3d.Material()
Material2031.ambientIntensity = 0
Material2031.diffuseColor = [0.5,0.5,0.5]
Material2031.shininess = 0

Appearance2030.material = Material2031

Shape2029.appearance = Appearance2030
IndexedFaceSet2032 = x3d.IndexedFaceSet()
IndexedFaceSet2032.solid = False
IndexedFaceSet2032.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2032.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2033 = x3d.Coordinate()
Coordinate2033.point = [(5.434654, 0.075, 1.032889),(5.568773, 0.075, 1.690868),(4.627083, 0.075, 1.1975),(4.761202, 0.075, 1.85548)]

IndexedFaceSet2032.coord = Coordinate2033

Shape2029.geometry = IndexedFaceSet2032

Scene12.children.append(Shape2029)
Shape2034 = x3d.Shape()
Appearance2035 = x3d.Appearance()
Material2036 = x3d.Material()
Material2036.ambientIntensity = 0
Material2036.diffuseColor = [0.5,0.5,0.5]
Material2036.shininess = 0

Appearance2035.material = Material2036

Shape2034.appearance = Appearance2035
IndexedFaceSet2037 = x3d.IndexedFaceSet()
IndexedFaceSet2037.solid = False
IndexedFaceSet2037.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2037.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2038 = x3d.Coordinate()
Coordinate2038.point = [(4.623088, 0.075, 1.177903),(4.488969, 0.075, 0.519924),(5.430659, 0.075, 1.013292),(5.29654, 0.075, 0.3553126)]

IndexedFaceSet2037.coord = Coordinate2038

Shape2034.geometry = IndexedFaceSet2037

Scene12.children.append(Shape2034)
Shape2039 = x3d.Shape()
Appearance2040 = x3d.Appearance()
Material2041 = x3d.Material()
Material2041.ambientIntensity = 0
Material2041.diffuseColor = [0.5,0.5,0.5]
Material2041.shininess = 0

Appearance2040.material = Material2041

Shape2039.appearance = Appearance2040
IndexedFaceSet2042 = x3d.IndexedFaceSet()
IndexedFaceSet2042.solid = False
IndexedFaceSet2042.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2042.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2043 = x3d.Coordinate()
Coordinate2043.point = [(4.762719, 0.075, 6.089544),(4.628599, 0.075, 5.431565),(5.570289, 0.075, 5.924933),(5.43617, 0.075, 5.266953)]

IndexedFaceSet2042.coord = Coordinate2043

Shape2039.geometry = IndexedFaceSet2042

Scene12.children.append(Shape2039)
Shape2044 = x3d.Shape()
Appearance2045 = x3d.Appearance()
Material2046 = x3d.Material()
Material2046.ambientIntensity = 0
Material2046.diffuseColor = [0.5,0.5,0.5]
Material2046.shininess = 0

Appearance2045.material = Material2046

Shape2044.appearance = Appearance2045
IndexedFaceSet2047 = x3d.IndexedFaceSet()
IndexedFaceSet2047.solid = False
IndexedFaceSet2047.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
IndexedFaceSet2047.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]
Coordinate2048 = x3d.Coordinate()
Coordinate2048.point = [(4.624605, 0.075, 5.411968),(4.557545, 0.075, 5.082978),(4.490485, 0.075, 4.753989),(5.432175, 0.075, 5.247356),(5.365116, 0.075, 4.918367),(5.298056, 0.075, 4.589377)]

IndexedFaceSet2047.coord = Coordinate2048

Shape2044.geometry = IndexedFaceSet2047

Scene12.children.append(Shape2044)
Shape2049 = x3d.Shape()
Appearance2050 = x3d.Appearance()
Material2051 = x3d.Material()
Material2051.ambientIntensity = 0
Material2051.diffuseColor = [0.5,0.5,0.5]
Material2051.shininess = 0

Appearance2050.material = Material2051

Shape2049.appearance = Appearance2050
IndexedFaceSet2052 = x3d.IndexedFaceSet()
IndexedFaceSet2052.solid = False
IndexedFaceSet2052.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2052.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2053 = x3d.Coordinate()
Coordinate2053.point = [(4.627841, 0.075, 3.314533),(5.021828, 0.075, 3.234224),(4.900074, 0.075, 4.650089),(5.294061, 0.075, 4.56978)]

IndexedFaceSet2052.coord = Coordinate2053

Shape2049.geometry = IndexedFaceSet2052

Scene12.children.append(Shape2049)
Shape2054 = x3d.Shape()
Appearance2055 = x3d.Appearance()
Material2056 = x3d.Material()
Material2056.ambientIntensity = 0
Material2056.diffuseColor = [0.5,0.5,0.5]
Material2056.shininess = 0

Appearance2055.material = Material2056

Shape2054.appearance = Appearance2055
IndexedFaceSet2057 = x3d.IndexedFaceSet()
IndexedFaceSet2057.solid = False
IndexedFaceSet2057.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet2057.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate2058 = x3d.Coordinate()
Coordinate2058.point = [(4.214257, 0.075, 3.398836),(4.608244, 0.075, 3.318527),(4.350374, 0.075, 4.066614),(4.744361, 0.075, 3.986305),(4.486491, 0.075, 4.734392),(4.880477, 0.075, 4.654083)]

IndexedFaceSet2057.coord = Coordinate2058

Shape2054.geometry = IndexedFaceSet2057

Scene12.children.append(Shape2054)
Shape2059 = x3d.Shape()
Appearance2060 = x3d.Appearance()
Material2061 = x3d.Material()
Material2061.ambientIntensity = 0
Material2061.diffuseColor = [0.5,0.5,0.5]
Material2061.shininess = 0

Appearance2060.material = Material2061

Shape2059.appearance = Appearance2060
IndexedFaceSet2062 = x3d.IndexedFaceSet()
IndexedFaceSet2062.solid = False
IndexedFaceSet2062.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2062.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2063 = x3d.Coordinate()
Coordinate2063.point = [(4.210262, 0.075, 3.379239),(4.076143, 0.075, 2.721259),(5.017833, 0.075, 3.214627),(4.883714, 0.075, 2.556648)]

IndexedFaceSet2062.coord = Coordinate2063

Shape2059.geometry = IndexedFaceSet2062

Scene12.children.append(Shape2059)
Shape2064 = x3d.Shape()
Appearance2065 = x3d.Appearance()
Material2066 = x3d.Material()
Material2066.ambientIntensity = 0
Material2066.diffuseColor = [0.5,0.5,0.5]
Material2066.shininess = 0

Appearance2065.material = Material2066

Shape2064.appearance = Appearance2065
IndexedFaceSet2067 = x3d.IndexedFaceSet()
IndexedFaceSet2067.solid = False
IndexedFaceSet2067.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet2067.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate2068 = x3d.Coordinate()
Coordinate2068.point = [(4.7456, 0.075, 1.879071),(4.879719, 0.075, 2.537051),(4.341815, 0.075, 1.961377),(4.475934, 0.075, 2.619357),(3.938029, 0.075, 2.043683),(4.072148, 0.075, 2.701662)]

IndexedFaceSet2067.coord = Coordinate2068

Shape2064.geometry = IndexedFaceSet2067

Scene12.children.append(Shape2064)
Shape2069 = x3d.Shape()
Appearance2070 = x3d.Appearance()
Material2071 = x3d.Material()
Material2071.ambientIntensity = 0
Material2071.diffuseColor = [0.5,0.5,0.5]
Material2071.shininess = 0

Appearance2070.material = Material2071

Shape2069.appearance = Appearance2070
IndexedFaceSet2072 = x3d.IndexedFaceSet()
IndexedFaceSet2072.solid = False
IndexedFaceSet2072.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2072.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2073 = x3d.Coordinate()
Coordinate2073.point = [(4.741605, 0.075, 1.859474),(4.347619, 0.075, 1.939783),(4.469372, 0.075, 0.5239186),(4.075385, 0.075, 0.604227)]

IndexedFaceSet2072.coord = Coordinate2073

Shape2069.geometry = IndexedFaceSet2072

Scene12.children.append(Shape2069)
Shape2074 = x3d.Shape()
Appearance2075 = x3d.Appearance()
Material2076 = x3d.Material()
Material2076.ambientIntensity = 0
Material2076.diffuseColor = [0.5,0.5,0.5]
Material2076.shininess = 0

Appearance2075.material = Material2076

Shape2074.appearance = Appearance2075
IndexedFaceSet2077 = x3d.IndexedFaceSet()
IndexedFaceSet2077.solid = False
IndexedFaceSet2077.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2077.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2078 = x3d.Coordinate()
Coordinate2078.point = [(4.328022, 0.075, 1.943777),(3.934035, 0.075, 2.024086),(4.055788, 0.075, 0.6082216),(3.661801, 0.075, 0.68853)]

IndexedFaceSet2077.coord = Coordinate2078

Shape2074.geometry = IndexedFaceSet2077

Scene12.children.append(Shape2074)
Shape2079 = x3d.Shape()
Appearance2080 = x3d.Appearance()
Material2081 = x3d.Material()
Material2081.ambientIntensity = 0
Material2081.diffuseColor = [0.5,0.5,0.5]
Material2081.shininess = 0

Appearance2080.material = Material2081

Shape2079.appearance = Appearance2080
IndexedFaceSet2082 = x3d.IndexedFaceSet()
IndexedFaceSet2082.solid = False
IndexedFaceSet2082.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2082.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2083 = x3d.Coordinate()
Coordinate2083.point = [(4.331258, 0.075, -0.1536579),(4.465377, 0.075, 0.5043216),(3.523687, 0.075, 0.0109536),(3.657807, 0.075, 0.668933)]

IndexedFaceSet2082.coord = Coordinate2083

Shape2079.geometry = IndexedFaceSet2082

Scene12.children.append(Shape2079)
Shape2084 = x3d.Shape()
Appearance2085 = x3d.Appearance()
Material2086 = x3d.Material()
Material2086.ambientIntensity = 0
Material2086.diffuseColor = [0.5,0.5,0.5]
Material2086.shininess = 0

Appearance2085.material = Material2086

Shape2084.appearance = Appearance2085
IndexedFaceSet2087 = x3d.IndexedFaceSet()
IndexedFaceSet2087.solid = False
IndexedFaceSet2087.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2087.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2088 = x3d.Coordinate()
Coordinate2088.point = [(4.076901, 0.075, 4.838292),(4.470888, 0.075, 4.757983),(4.349134, 0.075, 6.173848),(4.743122, 0.075, 6.093539)]

IndexedFaceSet2087.coord = Coordinate2088

Shape2084.geometry = IndexedFaceSet2087

Scene12.children.append(Shape2084)
Shape2089 = x3d.Shape()
Appearance2090 = x3d.Appearance()
Material2091 = x3d.Material()
Material2091.ambientIntensity = 0
Material2091.diffuseColor = [0.5,0.5,0.5]
Material2091.shininess = 0

Appearance2090.material = Material2091

Shape2089.appearance = Appearance2090
IndexedFaceSet2092 = x3d.IndexedFaceSet()
IndexedFaceSet2092.solid = False
IndexedFaceSet2092.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2092.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2093 = x3d.Coordinate()
Coordinate2093.point = [(3.663317, 0.075, 4.922595),(4.057304, 0.075, 4.842286),(3.935551, 0.075, 6.258151),(4.329537, 0.075, 6.177842)]

IndexedFaceSet2092.coord = Coordinate2093

Shape2089.geometry = IndexedFaceSet2092

Scene12.children.append(Shape2089)
Shape2094 = x3d.Shape()
Appearance2095 = x3d.Appearance()
Material2096 = x3d.Material()
Material2096.ambientIntensity = 0
Material2096.diffuseColor = [0.5,0.5,0.5]
Material2096.shininess = 0

Appearance2095.material = Material2096

Shape2094.appearance = Appearance2095
IndexedFaceSet2097 = x3d.IndexedFaceSet()
IndexedFaceSet2097.solid = False
IndexedFaceSet2097.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet2097.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate2098 = x3d.Coordinate()
Coordinate2098.point = [(3.659323, 0.075, 4.902997),(3.525203, 0.075, 4.245018),(4.063108, 0.075, 4.820692),(3.928989, 0.075, 4.162713),(4.466894, 0.075, 4.738386),(4.332774, 0.075, 4.080407)]

IndexedFaceSet2097.coord = Coordinate2098

Shape2094.geometry = IndexedFaceSet2097

Scene12.children.append(Shape2094)
Shape2099 = x3d.Shape()
Appearance2100 = x3d.Appearance()
Material2101 = x3d.Material()
Material2101.ambientIntensity = 0
Material2101.diffuseColor = [0.5,0.5,0.5]
Material2101.shininess = 0

Appearance2100.material = Material2101

Shape2099.appearance = Appearance2100
IndexedFaceSet2102 = x3d.IndexedFaceSet()
IndexedFaceSet2102.solid = False
IndexedFaceSet2102.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2102.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2103 = x3d.Coordinate()
Coordinate2103.point = [(4.19466, 0.075, 3.40283),(4.32878, 0.075, 4.06081),(3.387089, 0.075, 3.567442),(3.521209, 0.075, 4.225421)]

IndexedFaceSet2102.coord = Coordinate2103

Shape2099.geometry = IndexedFaceSet2102

Scene12.children.append(Shape2099)
Shape2104 = x3d.Shape()
Appearance2105 = x3d.Appearance()
Material2106 = x3d.Material()
Material2106.ambientIntensity = 0
Material2106.diffuseColor = [0.5,0.5,0.5]
Material2106.shininess = 0

Appearance2105.material = Material2106

Shape2104.appearance = Appearance2105
IndexedFaceSet2107 = x3d.IndexedFaceSet()
IndexedFaceSet2107.solid = False
IndexedFaceSet2107.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2107.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2108 = x3d.Coordinate()
Coordinate2108.point = [(3.524445, 0.075, 2.127986),(3.918432, 0.075, 2.047678),(3.796679, 0.075, 3.463542),(4.190666, 0.075, 3.383233)]

IndexedFaceSet2107.coord = Coordinate2108

Shape2104.geometry = IndexedFaceSet2107

Scene12.children.append(Shape2104)
Shape2109 = x3d.Shape()
Appearance2110 = x3d.Appearance()
Material2111 = x3d.Material()
Material2111.ambientIntensity = 0
Material2111.diffuseColor = [0.5,0.5,0.5]
Material2111.shininess = 0

Appearance2110.material = Material2111

Shape2109.appearance = Appearance2110
IndexedFaceSet2112 = x3d.IndexedFaceSet()
IndexedFaceSet2112.solid = False
IndexedFaceSet2112.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2112.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2113 = x3d.Coordinate()
Coordinate2113.point = [(3.777081, 0.075, 3.467536),(3.383095, 0.075, 3.547845),(3.504848, 0.075, 2.13198),(3.110861, 0.075, 2.212289)]

IndexedFaceSet2112.coord = Coordinate2113

Shape2109.geometry = IndexedFaceSet2112

Scene12.children.append(Shape2109)
Shape2114 = x3d.Shape()
Appearance2115 = x3d.Appearance()
Material2116 = x3d.Material()
Material2116.ambientIntensity = 0
Material2116.diffuseColor = [0.5,0.5,0.5]
Material2116.shininess = 0

Appearance2115.material = Material2116

Shape2114.appearance = Appearance2115
IndexedFaceSet2117 = x3d.IndexedFaceSet()
IndexedFaceSet2117.solid = False
IndexedFaceSet2117.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2117.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2118 = x3d.Coordinate()
Coordinate2118.point = [(3.106867, 0.075, 2.192692),(2.972747, 0.075, 1.534712),(3.914438, 0.075, 2.02808),(3.780318, 0.075, 1.370101)]

IndexedFaceSet2117.coord = Coordinate2118

Shape2114.geometry = IndexedFaceSet2117

Scene12.children.append(Shape2114)
Shape2119 = x3d.Shape()
Appearance2120 = x3d.Appearance()
Material2121 = x3d.Material()
Material2121.ambientIntensity = 0
Material2121.diffuseColor = [0.5,0.5,0.5]
Material2121.shininess = 0

Appearance2120.material = Material2121

Shape2119.appearance = Appearance2120
IndexedFaceSet2122 = x3d.IndexedFaceSet()
IndexedFaceSet2122.solid = False
IndexedFaceSet2122.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet2122.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate2123 = x3d.Coordinate()
Coordinate2123.point = [(2.968753, 0.075, 1.515115),(2.834633, 0.075, 0.8571361),(3.372538, 0.075, 1.43281),(3.238419, 0.075, 0.7748303),(3.776324, 0.075, 1.350504),(3.642204, 0.075, 0.6925246)]

IndexedFaceSet2122.coord = Coordinate2123

Shape2119.geometry = IndexedFaceSet2122

Scene12.children.append(Shape2119)
Shape2124 = x3d.Shape()
Appearance2125 = x3d.Appearance()
Material2126 = x3d.Material()
Material2126.ambientIntensity = 0
Material2126.diffuseColor = [0.5,0.5,0.5]
Material2126.shininess = 0

Appearance2125.material = Material2126

Shape2124.appearance = Appearance2125
IndexedFaceSet2127 = x3d.IndexedFaceSet()
IndexedFaceSet2127.solid = False
IndexedFaceSet2127.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2127.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2128 = x3d.Coordinate()
Coordinate2128.point = [(3.63821, 0.075, 0.6729276),(3.441216, 0.075, 0.7130818),(3.244223, 0.075, 0.753236),(3.502093, 0.075, 0.005149654),(3.305099, 0.075, 0.04530387),(3.108106, 0.075, 0.08545809),(3.365976, 0.075, -0.6626283),(3.168983, 0.075, -0.622474),(2.971989, 0.075, -0.5823198)]

IndexedFaceSet2127.coord = Coordinate2128

Shape2124.geometry = IndexedFaceSet2127

Scene12.children.append(Shape2124)
Shape2129 = x3d.Shape()
Appearance2130 = x3d.Appearance()
Material2131 = x3d.Material()
Material2131.ambientIntensity = 0
Material2131.diffuseColor = [0.5,0.5,0.5]
Material2131.shininess = 0

Appearance2130.material = Material2131

Shape2129.appearance = Appearance2130
IndexedFaceSet2132 = x3d.IndexedFaceSet()
IndexedFaceSet2132.solid = False
IndexedFaceSet2132.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2132.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2133 = x3d.Coordinate()
Coordinate2133.point = [(2.558405, 0.075, -0.4980168),(2.952392, 0.075, -0.5783253),(2.830639, 0.075, 0.837539),(3.224626, 0.075, 0.7572306)]

IndexedFaceSet2132.coord = Coordinate2133

Shape2129.geometry = IndexedFaceSet2132

Scene12.children.append(Shape2129)
Shape2134 = x3d.Shape()
Appearance2135 = x3d.Appearance()
Material2136 = x3d.Material()
Material2136.ambientIntensity = 0
Material2136.diffuseColor = [0.5,0.5,0.5]
Material2136.shininess = 0

Appearance2135.material = Material2136

Shape2134.appearance = Appearance2135
IndexedFaceSet2137 = x3d.IndexedFaceSet()
IndexedFaceSet2137.solid = False
IndexedFaceSet2137.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2137.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2138 = x3d.Coordinate()
Coordinate2138.point = [(2.970269, 0.075, 5.74918),(2.903209, 0.075, 5.42019),(2.836149, 0.075, 5.091201),(3.374054, 0.075, 5.666874),(3.306994, 0.075, 5.337884),(3.239935, 0.075, 5.008895),(3.77784, 0.075, 5.584569),(3.71078, 0.075, 5.255579),(3.64372, 0.075, 4.926589)]

IndexedFaceSet2137.coord = Coordinate2138

Shape2134.geometry = IndexedFaceSet2137

Scene12.children.append(Shape2134)
Shape2139 = x3d.Shape()
Appearance2140 = x3d.Appearance()
Material2141 = x3d.Material()
Material2141.ambientIntensity = 0
Material2141.diffuseColor = [0.5,0.5,0.5]
Material2141.shininess = 0

Appearance2140.material = Material2141

Shape2139.appearance = Appearance2140
IndexedFaceSet2142 = x3d.IndexedFaceSet()
IndexedFaceSet2142.solid = False
IndexedFaceSet2142.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2142.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2143 = x3d.Coordinate()
Coordinate2143.point = [(2.973505, 0.075, 3.651745),(3.367492, 0.075, 3.571436),(3.245739, 0.075, 4.9873),(3.639726, 0.075, 4.906992)]

IndexedFaceSet2142.coord = Coordinate2143

Shape2139.geometry = IndexedFaceSet2142

Scene12.children.append(Shape2139)
Shape2144 = x3d.Shape()
Appearance2145 = x3d.Appearance()
Material2146 = x3d.Material()
Material2146.ambientIntensity = 0
Material2146.diffuseColor = [0.5,0.5,0.5]
Material2146.shininess = 0

Appearance2145.material = Material2146

Shape2144.appearance = Appearance2145
IndexedFaceSet2147 = x3d.IndexedFaceSet()
IndexedFaceSet2147.solid = False
IndexedFaceSet2147.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2147.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2148 = x3d.Coordinate()
Coordinate2148.point = [(2.559921, 0.075, 3.736048),(2.953908, 0.075, 3.655739),(2.832155, 0.075, 5.071604),(3.226142, 0.075, 4.991295)]

IndexedFaceSet2147.coord = Coordinate2148

Shape2144.geometry = IndexedFaceSet2147

Scene12.children.append(Shape2144)
Shape2149 = x3d.Shape()
Appearance2150 = x3d.Appearance()
Material2151 = x3d.Material()
Material2151.ambientIntensity = 0
Material2151.diffuseColor = [0.5,0.5,0.5]
Material2151.shininess = 0

Appearance2150.material = Material2151

Shape2149.appearance = Appearance2150
IndexedFaceSet2152 = x3d.IndexedFaceSet()
IndexedFaceSet2152.solid = False
IndexedFaceSet2152.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2152.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2153 = x3d.Coordinate()
Coordinate2153.point = [(3.229378, 0.075, 2.89386),(3.363497, 0.075, 3.551839),(2.421807, 0.075, 3.058471),(2.555927, 0.075, 3.716451)]

IndexedFaceSet2152.coord = Coordinate2153

Shape2149.geometry = IndexedFaceSet2152

Scene12.children.append(Shape2149)
Shape2154 = x3d.Shape()
Appearance2155 = x3d.Appearance()
Material2156 = x3d.Material()
Material2156.ambientIntensity = 0
Material2156.diffuseColor = [0.5,0.5,0.5]
Material2156.shininess = 0

Appearance2155.material = Material2156

Shape2154.appearance = Appearance2155
IndexedFaceSet2157 = x3d.IndexedFaceSet()
IndexedFaceSet2157.solid = False
IndexedFaceSet2157.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2157.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2158 = x3d.Coordinate()
Coordinate2158.point = [(2.417813, 0.075, 3.038874),(2.283693, 0.075, 2.380895),(3.225384, 0.075, 2.874263),(3.091264, 0.075, 2.216284)]

IndexedFaceSet2157.coord = Coordinate2158

Shape2154.geometry = IndexedFaceSet2157

Scene12.children.append(Shape2154)
Shape2159 = x3d.Shape()
Appearance2160 = x3d.Appearance()
Material2161 = x3d.Material()
Material2161.ambientIntensity = 0
Material2161.diffuseColor = [0.5,0.5,0.5]
Material2161.shininess = 0

Appearance2160.material = Material2161

Shape2159.appearance = Appearance2160
IndexedFaceSet2162 = x3d.IndexedFaceSet()
IndexedFaceSet2162.solid = False
IndexedFaceSet2162.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2162.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2163 = x3d.Coordinate()
Coordinate2163.point = [(3.08727, 0.075, 2.196687),(2.693283, 0.075, 2.276995),(2.815036, 0.075, 0.8611306),(2.421049, 0.075, 0.941439)]

IndexedFaceSet2162.coord = Coordinate2163

Shape2159.geometry = IndexedFaceSet2162

Scene12.children.append(Shape2159)
Shape2164 = x3d.Shape()
Appearance2165 = x3d.Appearance()
Material2166 = x3d.Material()
Material2166.ambientIntensity = 0
Material2166.diffuseColor = [0.5,0.5,0.5]
Material2166.shininess = 0

Appearance2165.material = Material2166

Shape2164.appearance = Appearance2165
IndexedFaceSet2167 = x3d.IndexedFaceSet()
IndexedFaceSet2167.solid = False
IndexedFaceSet2167.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2167.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2168 = x3d.Coordinate()
Coordinate2168.point = [(2.673686, 0.075, 2.280989),(2.279699, 0.075, 2.361298),(2.401452, 0.075, 0.9454336),(2.007465, 0.075, 1.025742)]

IndexedFaceSet2167.coord = Coordinate2168

Shape2164.geometry = IndexedFaceSet2167

Scene12.children.append(Shape2164)
Shape2169 = x3d.Shape()
Appearance2170 = x3d.Appearance()
Material2171 = x3d.Material()
Material2171.ambientIntensity = 0
Material2171.diffuseColor = [0.5,0.5,0.5]
Material2171.shininess = 0

Appearance2170.material = Material2171

Shape2169.appearance = Appearance2170
IndexedFaceSet2172 = x3d.IndexedFaceSet()
IndexedFaceSet2172.solid = False
IndexedFaceSet2172.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2172.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2173 = x3d.Coordinate()
Coordinate2173.point = [(2.003471, 0.075, 1.006145),(1.869351, 0.075, 0.3481656),(2.811042, 0.075, 0.8415336),(2.676922, 0.075, 0.1835542)]

IndexedFaceSet2172.coord = Coordinate2173

Shape2169.geometry = IndexedFaceSet2172

Scene12.children.append(Shape2169)
Shape2174 = x3d.Shape()
Appearance2175 = x3d.Appearance()
Material2176 = x3d.Material()
Material2176.ambientIntensity = 0
Material2176.diffuseColor = [0.5,0.5,0.5]
Material2176.shininess = 0

Appearance2175.material = Material2176

Shape2174.appearance = Appearance2175
IndexedFaceSet2177 = x3d.IndexedFaceSet()
IndexedFaceSet2177.solid = False
IndexedFaceSet2177.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet2177.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate2178 = x3d.Coordinate()
Coordinate2178.point = [(1.866873, 0.075, 4.562633),(1.732753, 0.075, 3.904654),(2.270658, 0.075, 4.480328),(2.136539, 0.075, 3.822348),(2.674444, 0.075, 4.398022),(2.540324, 0.075, 3.740042)]

IndexedFaceSet2177.coord = Coordinate2178

Shape2174.geometry = IndexedFaceSet2177

Scene12.children.append(Shape2174)
Shape2179 = x3d.Shape()
Appearance2180 = x3d.Appearance()
Material2181 = x3d.Material()
Material2181.ambientIntensity = 0
Material2181.diffuseColor = [0.5,0.5,0.5]
Material2181.shininess = 0

Appearance2180.material = Material2181

Shape2179.appearance = Appearance2180
IndexedFaceSet2182 = x3d.IndexedFaceSet()
IndexedFaceSet2182.solid = False
IndexedFaceSet2182.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2182.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2183 = x3d.Coordinate()
Coordinate2183.point = [(1.870109, 0.075, 2.465198),(2.067103, 0.075, 2.425044),(2.264096, 0.075, 2.38489),(2.006226, 0.075, 3.132976),(2.203219, 0.075, 3.092822),(2.400213, 0.075, 3.052667),(2.142343, 0.075, 3.800754),(2.339336, 0.075, 3.7606),(2.53633, 0.075, 3.720445)]

IndexedFaceSet2182.coord = Coordinate2183

Shape2179.geometry = IndexedFaceSet2182

Scene12.children.append(Shape2179)
Shape2184 = x3d.Shape()
Appearance2185 = x3d.Appearance()
Material2186 = x3d.Material()
Material2186.ambientIntensity = 0
Material2186.diffuseColor = [0.5,0.5,0.5]
Material2186.shininess = 0

Appearance2185.material = Material2186

Shape2184.appearance = Appearance2185
IndexedFaceSet2187 = x3d.IndexedFaceSet()
IndexedFaceSet2187.solid = False
IndexedFaceSet2187.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2187.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2188 = x3d.Coordinate()
Coordinate2188.point = [(1.456525, 0.075, 2.549501),(1.850512, 0.075, 2.469193),(1.728759, 0.075, 3.885057),(2.122746, 0.075, 3.804748)]

IndexedFaceSet2187.coord = Coordinate2188

Shape2184.geometry = IndexedFaceSet2187

Scene12.children.append(Shape2184)
Shape2189 = x3d.Shape()
Appearance2190 = x3d.Appearance()
Material2191 = x3d.Material()
Material2191.ambientIntensity = 0
Material2191.diffuseColor = [0.5,0.5,0.5]
Material2191.shininess = 0

Appearance2190.material = Material2191

Shape2189.appearance = Appearance2190
IndexedFaceSet2192 = x3d.IndexedFaceSet()
IndexedFaceSet2192.solid = False
IndexedFaceSet2192.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2192.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2193 = x3d.Coordinate()
Coordinate2193.point = [(1.452531, 0.075, 2.529904),(1.385471, 0.075, 2.200914),(1.318411, 0.075, 1.871925),(1.856316, 0.075, 2.447598),(1.789257, 0.075, 2.118608),(1.722197, 0.075, 1.789619),(2.260102, 0.075, 2.365293),(2.193042, 0.075, 2.036303),(2.125982, 0.075, 1.707313)]

IndexedFaceSet2192.coord = Coordinate2193

Shape2189.geometry = IndexedFaceSet2192

Scene12.children.append(Shape2189)
Shape2194 = x3d.Shape()
Appearance2195 = x3d.Appearance()
Material2196 = x3d.Material()
Material2196.ambientIntensity = 0
Material2196.diffuseColor = [0.5,0.5,0.5]
Material2196.shininess = 0

Appearance2195.material = Material2196

Shape2194.appearance = Appearance2195
IndexedFaceSet2197 = x3d.IndexedFaceSet()
IndexedFaceSet2197.solid = False
IndexedFaceSet2197.texCoordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
IndexedFaceSet2197.coordIndex = [3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]
Coordinate2198 = x3d.Coordinate()
Coordinate2198.point = [(1.314417, 0.075, 1.852327),(1.180297, 0.075, 1.194348),(1.718202, 0.075, 1.770022),(1.584083, 0.075, 1.112042),(2.121988, 0.075, 1.687716),(1.987868, 0.075, 1.029737)]

IndexedFaceSet2197.coord = Coordinate2198

Shape2194.geometry = IndexedFaceSet2197

Scene12.children.append(Shape2194)
Shape2199 = x3d.Shape()
Appearance2200 = x3d.Appearance()
Material2201 = x3d.Material()
Material2201.ambientIntensity = 0
Material2201.diffuseColor = [0.5,0.5,0.5]
Material2201.shininess = 0

Appearance2200.material = Material2201

Shape2199.appearance = Appearance2200
IndexedFaceSet2202 = x3d.IndexedFaceSet()
IndexedFaceSet2202.solid = False
IndexedFaceSet2202.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2202.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2203 = x3d.Coordinate()
Coordinate2203.point = [(1.983874, 0.075, 1.01014),(1.78688, 0.075, 1.050294),(1.589887, 0.075, 1.090448),(1.847757, 0.075, 0.3423617),(1.650764, 0.075, 0.3825159),(1.45377, 0.075, 0.4226701),(1.71164, 0.075, -0.3254162),(1.514647, 0.075, -0.285262),(1.317653, 0.075, -0.2451078)]

IndexedFaceSet2202.coord = Coordinate2203

Shape2199.geometry = IndexedFaceSet2202

Scene12.children.append(Shape2199)
Shape2204 = x3d.Shape()
Appearance2205 = x3d.Appearance()
Material2206 = x3d.Material()
Material2206.ambientIntensity = 0
Material2206.diffuseColor = [0.5,0.5,0.5]
Material2206.shininess = 0

Appearance2205.material = Material2206

Shape2204.appearance = Appearance2205
IndexedFaceSet2207 = x3d.IndexedFaceSet()
IndexedFaceSet2207.solid = False
IndexedFaceSet2207.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2207.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2208 = x3d.Coordinate()
Coordinate2208.point = [(0.9040694, 0.075, -0.1608048),(1.101063, 0.075, -0.200959),(1.298056, 0.075, -0.2411132),(1.040186, 0.075, 0.5069731),(1.23718, 0.075, 0.4668189),(1.434173, 0.075, 0.4266647),(1.176303, 0.075, 1.174751),(1.373296, 0.075, 1.134597),(1.57029, 0.075, 1.094443)]

IndexedFaceSet2207.coord = Coordinate2208

Shape2204.geometry = IndexedFaceSet2207

Scene12.children.append(Shape2204)
Shape2209 = x3d.Shape()
Appearance2210 = x3d.Appearance()
Material2211 = x3d.Material()
Material2211.ambientIntensity = 0
Material2211.diffuseColor = [0.5,0.5,0.5]
Material2211.shininess = 0

Appearance2210.material = Material2211

Shape2209.appearance = Appearance2210
IndexedFaceSet2212 = x3d.IndexedFaceSet()
IndexedFaceSet2212.solid = False
IndexedFaceSet2212.texCoordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
IndexedFaceSet2212.coordIndex = [4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]
Coordinate2213 = x3d.Coordinate()
Coordinate2213.point = [(0.7667135, 0.075, 1.278651),(0.9637069, 0.075, 1.238497),(1.1607, 0.075, 1.198343),(0.9028302, 0.075, 1.946429),(1.099824, 0.075, 1.906275),(1.296817, 0.075, 1.866121),(1.038947, 0.075, 2.614207),(1.23594, 0.075, 2.574053),(1.432934, 0.075, 2.533899)]

IndexedFaceSet2212.coord = Coordinate2213

Shape2209.geometry = IndexedFaceSet2212

Scene12.children.append(Shape2209)
Shape2214 = x3d.Shape()
Appearance2215 = x3d.Appearance()
Material2216 = x3d.Material()
Material2216.ambientIntensity = 0
Material2216.diffuseColor = [0.5,0.5,0.5]
Material2216.shininess = 0

Appearance2215.material = Material2216

Shape2214.appearance = Appearance2215
IndexedFaceSet2217 = x3d.IndexedFaceSet()
IndexedFaceSet2217.solid = False
IndexedFaceSet2217.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2217.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2218 = x3d.Coordinate()
Coordinate2218.point = [(0.349135, 0.075, 1.343357),(0.2150155, 0.075, 0.6853777),(1.156706, 0.075, 1.178746),(1.022586, 0.075, 0.5207662)]

IndexedFaceSet2217.coord = Coordinate2218

Shape2214.geometry = IndexedFaceSet2217

Scene12.children.append(Shape2214)
Shape2219 = x3d.Shape()
Appearance2220 = x3d.Appearance()
Material2221 = x3d.Material()
Material2221.ambientIntensity = 0
Material2221.diffuseColor = [0.5,0.5,0.5]
Material2221.shininess = 0

Appearance2220.material = Material2221

Shape2219.appearance = Appearance2220
IndexedFaceSet2222 = x3d.IndexedFaceSet()
IndexedFaceSet2222.solid = False
IndexedFaceSet2222.texCoordIndex = [3,1,0,-1,3,0,2,-1]
IndexedFaceSet2222.coordIndex = [3,1,0,-1,3,0,2,-1]
Coordinate2223 = x3d.Coordinate()
Coordinate2223.point = [(0.211021, 0.075, 0.6657807),(0.07690154, 0.075, 0.007801231),(1.018592, 0.075, 0.5011692),(0.8844724, 0.075, -0.1568102)]

IndexedFaceSet2222.coord = Coordinate2223

Shape2219.geometry = IndexedFaceSet2222

Scene12.children.append(Shape2219)

X3D0.Scene = Scene12
f = open("../data/PathMeshTopSurface.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/PathMeshTopSurface.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/PathMeshTopSurface.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
