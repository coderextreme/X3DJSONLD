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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='SkylightHatch.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships parts',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/SkylightHatch.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Door',fieldOfView=0.45,orientation=(1,0,0,0),position=(0,0,1)),
    TimeSensor(DEF='spinTimer',cycleInterval=2),
    OrientationInterpolator(DEF='openDoor',key=[0,1],keyValue=[(1,0,0,0),(1,0,0,-1.2)]),
    ROUTE(fromField='fraction_changed',fromNode='spinTimer',toField='set_fraction',toNode='openDoor'),
    Transform(DEF='openDoorTransform',center=(0,0.01,-0.084),
      children=[
      ROUTE(fromField='value_changed',fromNode='openDoor',toField='rotation',toNode='openDoorTransform'),
      Shape(DEF='TightDoor',
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74))),
        geometry=IndexedFaceSet(DEF='hatchIFS',coordIndex=[1,2,22,21,-1,2,3,23,22,-1,3,4,24,23,-1,4,5,25,24,-1,5,6,26,25,-1,6,7,27,26,-1,7,8,28,27,-1,8,9,29,28,-1,9,10,30,29,-1,10,11,31,30,-1,11,12,32,31,-1,12,13,33,32,-1,13,14,34,33,-1,14,15,35,34,-1,15,16,36,35,-1,16,17,37,36,-1,17,18,38,37,-1,18,19,39,38,-1,19,20,40,39,-1,20,1,21,40,-1,21,22,42,41,-1,22,23,43,42,-1,23,24,44,43,-1,24,25,45,44,-1,25,26,46,45,-1,26,27,47,46,-1,27,28,48,47,-1,28,29,49,48,-1,29,30,50,49,-1,30,31,51,50,-1,31,32,52,51,-1,32,33,53,52,-1,33,34,54,53,-1,34,35,55,54,-1,35,36,56,55,-1,36,37,57,56,-1,37,38,58,57,-1,38,39,59,58,-1,39,40,60,59,-1,40,21,41,60,-1,41,42,62,61,-1,42,43,63,62,-1,43,44,64,63,-1,44,45,65,64,-1,45,46,66,65,-1,46,47,67,66,-1,47,48,68,67,-1,48,49,69,68,-1,49,50,70,69,-1,50,51,71,70,-1,51,52,72,71,-1,52,53,73,72,-1,53,54,74,73,-1,54,55,75,74,-1,55,56,76,75,-1,56,57,77,76,-1,57,58,78,77,-1,58,59,79,78,-1,59,60,80,79,-1,60,41,61,80,-1,61,62,81,-1,62,63,81,-1,63,64,81,-1,64,65,81,-1,65,66,82,81,-1,66,67,82,-1,67,68,82,-1,68,69,82,-1,69,70,82,-1,70,71,83,82,-1,71,72,83,-1,72,73,83,-1,73,74,83,-1,74,75,83,-1,75,76,84,83,-1,76,77,84,-1,77,78,84,-1,78,79,84,-1,79,80,84,-1,80,61,81,84,-1,81,85,84,-1,84,97,83,-1,83,93,82,-1,82,89,81,-1,85,81,86,-1,86,81,87,-1,87,81,88,-1,88,81,89,-1,89,82,90,-1,90,82,91,-1,91,82,92,-1,92,82,93,-1,93,83,94,-1,94,83,95,-1,95,83,96,-1,96,83,97,-1,97,84,98,-1,98,84,99,-1,99,84,100,-1,100,84,101,-1],creaseAngle=1.5,solid=False,
          coord=Coordinate(point=[(0.0000,0.0000,0.0000),(0.0779,0.0000,0.0768),(0.0772,0.0000,0.0806),(0.0750,0.0000,0.0838),(0.0718,0.0000,0.0860),(0.0679,0.0000,0.0868),(-0.0679,0.0000,0.0868),(-0.0717,0.0000,0.0860),(-0.0750,0.0000,0.0839),(-0.0772,0.0000,0.0806),(-0.0779,0.0000,0.0768),(-0.0779,0.0000,-0.0768),(-0.0772,0.0000,-0.0806),(-0.0750,0.0000,-0.0838),(-0.0718,0.0000,-0.0860),(-0.0680,0.0000,-0.0868),(0.0679,0.0000,-0.0868),(0.0717,0.0000,-0.0860),(0.0750,0.0000,-0.0839),(0.0772,0.0000,-0.0806),(0.0779,0.0000,-0.0768),(0.0772,0.0038,0.0768),(0.0765,0.0038,0.0803),(0.0745,0.0038,0.0833),(0.0715,0.0038,0.0853),(0.0679,0.0038,0.0860),(-0.0679,0.0038,0.0860),(-0.0715,0.0038,0.0853),(-0.0745,0.0038,0.0833),(-0.0765,0.0038,0.0803),(-0.0772,0.0038,0.0768),(-0.0772,0.0038,-0.0768),(-0.0765,0.0038,-0.0803),(-0.0745,0.0038,-0.0833),(-0.0715,0.0038,-0.0853),(-0.0680,0.0038,-0.0860),(0.0679,0.0038,-0.0860),(0.0714,0.0038,-0.0853),(0.0744,0.0038,-0.0833),(0.0765,0.0038,-0.0803),(0.0772,0.0038,-0.0768),(0.0750,0.0071,0.0768),(0.0745,0.0071,0.0795),(0.0729,0.0071,0.0818),(0.0706,0.0071,0.0833),(0.0679,0.0071,0.0839),(-0.0679,0.0071,0.0839),(-0.0706,0.0071,0.0833),(-0.0729,0.0071,0.0818),(-0.0745,0.0071,0.0795),(-0.0750,0.0071,0.0768),(-0.0750,0.0071,-0.0768),(-0.0745,0.0071,-0.0795),(-0.0729,0.0071,-0.0818),(-0.0707,0.0071,-0.0833),(-0.0679,0.0071,-0.0839),(0.0679,0.0071,-0.0839),(0.0706,0.0071,-0.0833),(0.0729,0.0071,-0.0818),(0.0745,0.0071,-0.0795),(0.0750,0.0071,-0.0768),(0.0718,0.0092,0.0768),(0.0715,0.0092,0.0782),(0.0706,0.0092,0.0795),(0.0694,0.0092,0.0803),(0.0679,0.0092,0.0806),(-0.0679,0.0092,0.0806),(-0.0694,0.0092,0.0803),(-0.0706,0.0092,0.0795),(-0.0715,0.0092,0.0783),(-0.0718,0.0092,0.0768),(-0.0718,0.0092,-0.0768),(-0.0715,0.0092,-0.0782),(-0.0706,0.0092,-0.0795),(-0.0694,0.0092,-0.0803),(-0.0679,0.0092,-0.0806),(0.0679,0.0092,-0.0806),(0.0694,0.0092,-0.0803),(0.0706,0.0092,-0.0795),(0.0715,0.0092,-0.0783),(0.0718,0.0092,-0.0768),(0.0679,0.0100,0.0768),(-0.0679,0.0100,0.0768),(-0.0679,0.0100,-0.0768),(0.0679,0.0100,-0.0768),(0.0400,0.0100,0.0000),(0.0370,0.0100,0.0153),(0.0283,0.0100,0.0283),(0.0153,0.0100,0.0369),(0.0000,0.0100,0.0400),(-0.0153,0.0100,0.0370),(-0.0283,0.0100,0.0283),(-0.0369,0.0100,0.0154),(-0.0400,0.0100,0.0000),(-0.0370,0.0100,-0.0152),(-0.0283,0.0100,-0.0282),(-0.0154,0.0100,-0.0369),(0.0000,0.0100,-0.0400),(0.0152,0.0100,-0.0370),(0.0282,0.0100,-0.0284),(0.0369,0.0100,-0.0154),(0.0400,0.0100,0.0000)]))),
      TouchSensor(DEF='hatchSensor',description='Touch to Open Hatch'),
      ROUTE(fromField='touchTime',fromNode='hatchSensor',toField='startTime',toNode='spinTimer'),
      Shape(DEF='window',
        appearance=Appearance(
          material=Material(DEF='Glass',ambientIntensity=0.37773332,diffuseColor=(0.0,0.36666667,0.76666665),shininess=0.76666665,specularColor=(1.0,1.0,1.0),transparency=0.58)),
        geometry=IndexedFaceSet(DEF='windowIFS',coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0,-1],creaseAngle=1.5,solid=False,
          coord=Coordinate(point=[(0.0300,0.0120,0.0000),(0.0277,0.0120,0.0115),(0.0212,0.0120,0.0212),(0.0115,0.0120,0.0277),(0.0000,0.0120,0.0300),(-0.0115,0.0120,0.0277),(-0.0212,0.0120,0.0212),(-0.0277,0.0120,0.0115),(-0.0300,0.0120,0.0000),(-0.0277,0.0120,-0.0114),(-0.0213,0.0120,-0.0212),(-0.0115,0.0120,-0.0277),(-0.0001,0.0120,-0.0300),(0.0114,0.0120,-0.0277),(0.0212,0.0120,-0.0213),(0.0277,0.0120,-0.0116),(0.0300,0.0120,-0.0001)]))),
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=Extrusion(crossSection=[(-0.005,0),(0,0),(0,-0.0025),(-0.005,-0.0025),(-0.005,-0.005),(-0.01,-0.005),(-0.01,0),(-0.005,0)],solid=False,spine=[(0.04,0.01,0),(0.037,0.01,0.0153),(0.0283,0.01,0.0283),(0.0153,0.01,0.0369),(0,0.01,0.04),(-0.0153,0.01,0.037),(-0.0283,0.01,0.0283),(-0.0369,0.01,0.0154),(-0.04,0.01,0),(-0.037,0.01,-0.0152),(-0.0283,0.01,-0.0282),(-0.0154,0.01,-0.0369),(0,0.01,-0.04),(0.0152,0.01,-0.037),(0.0282,0.01,-0.0284),(0.0369,0.01,-0.0154),(0.04,0.01,0)])),
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=Extrusion(crossSection=[(0,0),(0.001,0),(0.001,0.002),(-0.001,0.002),(-0.001,0),(0,0)],solid=False,spine=[(0.0300,0.0150,0.0000),(-0.0300,0.0150,0.0000)])),
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=Extrusion(crossSection=[(0,0),(0.001,0),(0.001,0.002),(-0.001,0.002),(-0.001,0),(0,0)],solid=False,spine=[(0.0277,0.0150,0.0115),(-0.0277,0.0150,0.0115)])),
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=Extrusion(crossSection=[(0,0),(0.001,0),(0.001,0.002),(-0.001,0.002),(-0.001,0),(0,0)],solid=False,spine=[(0.0212,0.0150,0.0212),(-0.0212,0.0150,0.0212)])),
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=Extrusion(crossSection=[(0,0),(0.001,0),(0.001,0.002),(-0.001,0.002),(-0.001,0),(0,0)],solid=False,spine=[(-0.0277,0.0150,-0.0114),(0.0277,0.0150,-0.0116)])),
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=Extrusion(crossSection=[(0,0),(0.001,0),(0.001,0.002),(-0.001,0.002),(-0.001,0),(0,0)],solid=False,spine=[(-0.0213,0.0150,-0.0212),(0.0212,0.0150,-0.0213)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SkylightHatch.py")
