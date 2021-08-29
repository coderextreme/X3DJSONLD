###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='CaffeinePubChem2519SticksColor.x3d',name='title'),
    meta(content='Darrell Hurt',name='creator'),
    meta(content="A methylxanthine naturally occurring in some beverages and also used as a pharmacological agent. Caffeine's most notable pharmacological effect is as a central nervous system stimulant, increasing alertness and producing agitation. It also relaxes SMOOTH MUSCLE, stimulates CARDIAC MUSCLE, stimulates DIURESIS, and appears to be useful in the treatment of some types of headache. Several cellular actions of caffeine have been observed, but it is not entirely clear how each contributes to its pharmacological profile. Among the most important are inhibition of cyclic nucleotide PHOSPHODIESTERASES, antagonism of ADENOSINE RECEPTORS, and modulation of intracellular calcium handling.",name='description'),
    meta(content='5 April 2015',name='created'),
    meta(content='3 April 2017',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='CaffeinePubChem2519SticksColor.png',name='Image'),
    meta(content='CaffeinePubChem2519Modifications.txt',name='TODO'),
    meta(content='CaffeinePubChem2519-3dpx-001005.qr.png',name='Image'),
    meta(content='CaffeinePubChem2519Sticks.blender.stl',name='reference'),
    meta(content='originals/PubChem-2519-sticks-color.x3d',name='reference'),
    meta(content='originals/PubChem-2519-sticks-color.wrl',name='reference'),
    meta(content='originals/PubChem-2519-sticks-color.stl.zip (7.8MB uncompressed)',name='reference'),
    meta(content='https://3dprint.nih.gov/discover/3dpx-001005',name='reference'),
    meta(content='https://3dprint.nih.gov/license/public-domain',name='license'),
    meta(content='NIH 3DPX caffeine Methyltheobromine Guaranine Cafeina Koffein Mateina 1,3,7-Trimethylxanthine Thein',name='subject'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AdditiveManufacturing/CaffeinePubChem2519SticksColor.x3d',name='identifier'),
    meta(content='UCSF Chimera, http://www.cgl.ucsf.edu/chimera',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html',name='generator'),
    meta(content='X3D Validator, https://savage.nps.edu/X3dValidator',name='generator')]),
  Scene=Scene(
    children=[
    NavigationInfo(headlight=False),
    Background(skyColor=[(1,1,1)]),
    WorldInfo(DEF='ModelMetadata',title='CaffeinePubChem2519SticksColor.x3d',
      #  xmlns:chimera='http://www.cgl.ucsf.edu/chimera' 
      #  <chimera:WindowSize xmlns:chimera="http://www.cgl.ucsf.edu/chimera/" height='512' width='512' /> 
      #  <chimera:DepthCue xmlns:chimera="http://www.cgl.ucsf.edu/chimera/" color='1 1 1' range='35.2169 40.437' /> 
      metadata=MetadataSet(name='xmlns:chimera',reference='http://www.cgl.ucsf.edu/chimera',
        value=[
        MetadataString(name='comment',value=["X3D profile limits on number of elements/colors/etc. were ignored"]),
        MetadataSet(name='chimera:WindowSize',
          value=[
          MetadataInteger(name='height',value=[512]),
          MetadataInteger(name='width',value=[512])]),
        MetadataSet(name='chimera:DepthCue',
          value=[
          MetadataFloat(name='color',value=[1,1,1]),
          MetadataFloat(name='range',value=[35.2169,40.437])])])),
    Viewpoint(centerOfRotation=(0.29605,-0.11545,0.0006),description='view 0',fieldOfView=0.436332,position=(0.29605,-0.11545,35.2175)),
    DirectionalLight(direction=(-0,-0,-1),intensity=0.646154),
    DirectionalLight(direction=(-0.911685,-0.341882,-0.227921),intensity=0.361231),
    DirectionalLight(direction=(0.408248,0.408248,0.816497)),
    DirectionalLight(ambientIntensity=0.15,intensity=0.0),
    Group(
      children=[
      Transform(bboxCenter=(0.29605,-0.11545,0.0006),bboxSize=(9.8063,8.5611,3.7996),
        metadata=MetadataString(name='model name',value=["2519"]),
        children=[
        Transform(translation=(0.47,2.5688,0.0006),
          children=[
          Shape(
            appearance=Appearance(DEF='l0',
              material=Material(ambientIntensity=1,diffuseColor=(1,0.0509804,0.0509804),shininess=0.484375,specularColor=(0.255,0.255,0.255))),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-3.1271,-0.4436,-0.0003),
          children=[
          Shape(
            appearance=Appearance(USE='l0'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-0.9686,-1.3125,0),
          children=[
          Shape(
            appearance=Appearance(DEF='l1',
              material=Material(ambientIntensity=1,diffuseColor=(0.188235,0.313725,0.972549),shininess=0.484375,specularColor=(0.255,0.255,0.255))),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(2.2182,0.1412,-0.0003),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-1.3477,1.0797,-0.0001),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(1.4119,-1.9372,0.0002),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(0.8579,0.2592,-0.0008),
          children=[
          Shape(
            appearance=Appearance(DEF='l2',
              material=Material(ambientIntensity=1,diffuseColor=(0.565,0.565,0.565),shininess=0.484375,specularColor=(0.255,0.255,0.255))),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(0.3897,-1.0264,-0.0004),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(0.0307,1.422,-0.0006),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-1.9061,-0.2495,-0.0004),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(2.5032,-1.1998,0.0003),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-1.4276,-2.696,0.0008),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(3.1926,1.2061,0.0003),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-2.2969,2.1881,0.0007),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(3.5163,-1.5787,0.0008),
          children=[
          Shape(
            appearance=Appearance(DEF='l3',
              material=Material(ambientIntensity=1,diffuseColor=(1,1,1),shininess=0.484375,specularColor=(0.255,0.255,0.255))),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-1.0451,-3.1973,-0.8937),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-2.5186,-2.7596,0.0011),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-1.0447,-3.1963,0.8957),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(4.1992,0.7801,0.0002),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(3.0468,1.8092,-0.8992),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(3.0466,1.8083,0.9004),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-1.8087,3.1651,-0.0003),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-2.9322,2.1027,0.8881),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(translation=(-2.9346,2.1021,-0.8849),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Sphere(radius=0.8))]),
        Transform(rotation=(-0.00273161,0,0.999996,2.77577),translation=(0.367773,2.30193,0.000320755),
          children=[
          Shape(
            appearance=Appearance(USE='l0'),
            geometry=Cylinder(bottom=False,height=0.571551,radius=0.8,top=False))]),
        Transform(rotation=(0.00273161,0,-0.999996,0.365825),translation=(0.148123,1.72853,-0.000279245),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.656511,radius=0.8,top=False))]),
        Transform(rotation=(-8.19e-05,0,-1,1.41315),translation=(-2.84297,-0.398432,-0.00032327),
          children=[
          Shape(
            appearance=Appearance(USE='l0'),
            geometry=Cylinder(bottom=False,height=0.5754,radius=0.8,top=False))]),
        Transform(rotation=(8.19001e-05,-0,1,1.72845),translation=(-2.23247,-0.301382,-0.00037327),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.660932,radius=0.8,top=False))]),
        Transform(rotation=(-0.000294486,0,-1,1.3632),translation=(-0.636685,-1.24259,-9.77444e-05),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.678397,radius=0.8,top=False))]),
        Transform(rotation=(0.000294486,-0,1,1.77839),translation=(0.0424654,-1.09954,-0.000297744),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.709707,radius=0.8,top=False))]),
        Transform(rotation=(-0.000426667,0,1,0.722746),translation=(-1.19769,-1.05274,-9.77444e-05),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.692689,radius=0.8,top=False))]),
        Transform(rotation=(0.000426667,0,-1,2.41885),translation=(-1.66644,-0.521244,-0.000297744),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.724659,radius=0.8,top=False))]),
        Transform(rotation=(0.00174292,-0,0.999998,2.82125),translation=(-1.08076,-1.65057,0.000195489),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.712387,radius=0.8,top=False))]),
        Transform(rotation=(-0.00174292,0,-0.999998,0.320341),translation=(-1.31026,-2.34232,0.000595489),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.745267,radius=0.8,top=False))]),
        Transform(rotation=(-0.000367566,0,1,1.48427),translation=(1.8858,0.170035,-0.00042218),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.667305,radius=0.8,top=False))]),
        Transform(rotation=(0.000367566,0,-1,1.65733),translation=(1.20565,0.229035,-0.00067218),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.698104,radius=0.8,top=False))]),
        Transform(rotation=(0.00210526,0,-0.999998,2.93218),translation=(2.28784,-0.186488,-0.000153383),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.670014,radius=0.8,top=False))]),
        Transform(rotation=(-0.00210526,0,0.999998,0.209413),translation=(2.43034,-0.856988,0.000146617),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.700937,radius=0.8,top=False))]),
        Transform(rotation=(0.000615763,0,-1,0.741049),translation=(2.45631,0.40142,-0.000153383),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.705432,radius=0.8,top=False))]),
        Transform(rotation=(-0.000615764,0,1,2.40054),translation=(2.94351,0.93387,0.000146617),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.73799,radius=0.8,top=False))]),
        Transform(rotation=(-0.000362739,0,-1,1.32739),translation=(-1.01087,1.16334,-0.00022218),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.694115,radius=0.8,top=False))]),
        Transform(rotation=(0.000362739,-0,1,1.8142),translation=(-0.321673,1.33449,-0.00047218),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.726151,radius=0.8,top=False))]),
        Transform(rotation=(-0.000537249,0,1,2.74388),translation=(-1.48415,0.754895,-0.000173308),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.704605,radius=0.8,top=False))]),
        Transform(rotation=(0.000537249,0,-1,0.397715),translation=(-1.76335,0.0902955,-0.000323308),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.737125,radius=0.8,top=False))]),
        Transform(rotation=(0.000842815,-0,1,0.70818),translation=(-1.57965,1.35055,9.54887e-05),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.713188,radius=0.8,top=False))]),
        Transform(rotation=(-0.000842815,0,-1,2.43341),translation=(-2.05425,1.90475,0.000495489),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.746104,radius=0.8,top=False))]),
        Transform(rotation=(-0.000586969,0,1,0.842965),translation=(1.16211,-1.71464,5.33835e-05),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.669112,radius=0.8,top=False))]),
        Transform(rotation=(0.000586969,0,-1,2.29863),translation=(0.651014,-1.25924,-0.000246617),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.699994,radius=0.8,top=False))]),
        Transform(rotation=(9.16339e-05,0,-1,0.976561),translation=(1.67857,-1.75701,0.000224436),
          children=[
          Shape(
            appearance=Appearance(USE='l1'),
            geometry=Cylinder(bottom=False,height=0.643685,radius=0.8,top=False))]),
        Transform(rotation=(-9.16338e-05,0,1,2.16503),translation=(2.22422,-1.38831,0.000274436),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.673393,radius=0.8,top=False))]),
        Transform(rotation=(0.000854335,-0,1,2.79233),translation=(0.6238,-0.3836,-0.0006),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=1.3682,radius=0.8,top=False))]),
        Transform(rotation=(0.000241779,-0,1,0.618327),translation=(0.4443,0.8406,-0.0007),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=1.42701,radius=0.8,top=False))]),
        Transform(rotation=(0.000493535,0,-1,1.92869),translation=(2.82214,-1.31908,0.000457407),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.68103,radius=0.8,top=False))]),
        Transform(rotation=(-0.000493535,0,1,1.2129),translation=(3.32869,-1.50853,0.000707407),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.400606,radius=0.8,top=False))]),
        Transform(rotation=(-0.919464,0,-0.393175,2.0466),translation=(-1.30718,-2.85382,-0.280802),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.689074,radius=0.8,top=False))]),
        Transform(rotation=(0.919464,-0,0.393175,1.09499),translation=(-1.11593,-3.10447,-0.728052),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.405338,radius=0.8,top=False))]),
        Transform(rotation=(0.000274977,-0,1,1.62903),translation=(-1.77106,-2.71602,0.000894444),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.688092,radius=0.8,top=False))]),
        Transform(rotation=(-0.000274977,0,-1,1.51257),translation=(-2.31656,-2.74782,0.00104444),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.40476,radius=0.8,top=False))]),
        Transform(rotation=(0.919379,0,-0.393374,2.04557),translation=(-1.30706,-2.8535,0.282528),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.68908,radius=0.8,top=False))]),
        Transform(rotation=(-0.919379,0,0.393374,1.09602),translation=(-1.11561,-3.10365,0.729978),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.405341,radius=0.8,top=False))]),
        Transform(rotation=(-9.93443e-05,0,-1,1.97115),translation=(3.50949,1.07199,0.000268519),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.688206,radius=0.8,top=False))]),
        Transform(rotation=(9.93443e-05,-0,1,1.17045),translation=(4.01279,0.858989,0.000218519),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.404827,radius=0.8,top=False))]),
        Transform(rotation=(-0.987117,0,0.160002,0.986139),translation=(3.1467,1.39596,-0.282876),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.688023,radius=0.8,top=False))]),
        Transform(rotation=(0.987117,0,-0.160002,2.15545),translation=(3.0738,1.69751,-0.732626),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.40472,radius=0.8,top=False))]),
        Transform(rotation=(0.987099,-0,0.160111,0.987141),translation=(3.14664,1.39568,0.283665),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.688039,radius=0.8,top=False))]),
        Transform(rotation=(-0.987099,0,-0.160112,2.15445),translation=(3.07364,1.69678,0.733715),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.404729,radius=0.8,top=False))]),
        Transform(rotation=(-0.00204834,0,-0.999998,0.463403),translation=(-2.14321,2.49567,0.000385185),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.687672,radius=0.8,top=False))]),
        Transform(rotation=(0.00204834,-0,0.999998,2.67819),translation=(-1.89911,2.98417,-0.000114815),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.404513,radius=0.8,top=False))]),
        Transform(rotation=(0.813108,-0,0.582113,1.64889),translation=(-2.4969,2.16121,0.280067),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.689258,radius=0.8,top=False))]),
        Transform(rotation=(-0.813108,0,-0.582113,1.49271),translation=(-2.81455,2.11851,0.723767),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.405446,radius=0.8,top=False))]),
        Transform(rotation=(-0.811505,0,0.584346,1.64944),translation=(-2.49766,2.16103,-0.2781),
          children=[
          Shape(
            appearance=Appearance(USE='l2'),
            geometry=Cylinder(bottom=False,height=0.689249,radius=0.8,top=False))]),
        Transform(rotation=(0.811505,0,-0.584346,1.49215),translation=(-2.81651,2.11803,-0.7209),
          children=[
          Shape(
            appearance=Appearance(USE='l3'),
            geometry=Cylinder(bottom=False,height=0.405441,radius=0.8,top=False))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CaffeinePubChem2519SticksColor.py")
