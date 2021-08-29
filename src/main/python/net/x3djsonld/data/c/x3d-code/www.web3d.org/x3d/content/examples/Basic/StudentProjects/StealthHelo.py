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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='StealthHelo.x3d',name='title'),
    meta(content='A sort of Stealth Helo I designed and created.',name='description'),
    meta(content='Jeffrey S. Lock Sr.',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='30 July 2002',name='translated'),
    meta(content='1 August 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='StealthHelo.x3d'),
    Shape(
      appearance=Appearance(
        material=Material(DEF='Body',diffuseColor=(0.099,0.099,0.099),shininess=.4,specularColor=(0.099,0.099,0.099))),
      geometry=IndexedFaceSet(coordIndex=[40,41,26,-1,41,27,26,-1,26,27,14,-1,27,15,14,-1,40,26,25,-1,40,25,39,-1,26,14,13,-1,26,13,25,-1,41,42,27,-1,42,28,27,-1,27,28,15,-1,28,16,15,-1,16,5,4,-1,15,16,4,-1,15,4,3,-1,14,15,3,-1,14,3,2,-1,13,14,2,-1,13,2,1,-1,12,13,1,-1,25,13,12,-1,24,25,12,-1,39,25,24,-1,38,39,24,-1,11,12,1,-1,24,12,11,-1,1,2,0,-1,2,3,0,-1,3,4,0,-1,4,5,0,-1,5,6,0,-1,10,1,0,-1,51,36,35,-1,65,77,66,-1,68,77,70,-1,67,77,68,-1,79,80,81,-1,16,28,34,17,-1,28,42,43,34,-1,11,1,10,22,-1,36,49,50,35,-1,35,50,64,51,-1,38,37,52,53,-1,39,38,53,54,-1,40,39,54,55,-1,52,37,36,51,-1,57,56,69,70,-1,56,55,68,69,-1,55,54,67,68,-1,54,53,66,67,-1,53,52,66,66,-1,51,64,76,65,-1,52,51,65,66,-1,6,5,16,17,-1,42,57,58,43,-1,57,70,71,58,-1,65,76,78,77,-1,66,77,80,79,-1,77,78,71,70,-1,77,67,81,80,-1,66,79,81,67,-1,45,31,44,-1,44,31,33,-1,31,20,33,-1,33,20,18,-1,45,32,31,-1,45,46,32,-1,31,19,20,-1,31,32,19,-1,44,33,43,-1,43,33,34,-1,33,18,34,-1,34,18,17,-1,17,7,6,-1,18,7,17,-1,18,8,7,-1,20,8,18,-1,20,9,8,-1,19,9,20,-1,19,10,9,-1,21,10,19,-1,32,21,19,-1,30,21,32,-1,46,30,32,-1,47,30,46,-1,22,10,21,-1,30,22,21,-1,10,0,9,-1,9,0,8,-1,8,0,7,-1,7,0,6,-1,64,50,49,-1,84,83,82,-1,71,78,73,-1,73,78,74,-1,76,75,78,-1,47,62,63,48,-1,46,61,62,47,-1,45,60,61,46,-1,44,59,60,45,-1,43,58,59,44,-1,63,64,49,48,-1,58,71,72,59,-1,59,72,73,60,-1,60,73,74,61,-1,61,74,75,62,-1,62,75,63,63,-1,63,75,76,64,-1,84,82,75,74,-1,82,83,78,75,-1,83,84,74,78,-1,41,40,55,56,-1,42,41,56,57,-1],creaseAngle=1.8,solid=False,
        coord=Coordinate(DEF='a',point=[(8.5,-0.72,0.0),(7.5,0.0,0.2),(7.5,-0.1,0.6),(7.5,-0.6,0.8),(7.5,-1.1,0.4),(7.5,-1.3,0.0),(7.5,-1.3,-0.0),(7.5,-1.1,-0.4),(7.5,-0.6,-0.8),(7.5,-0.1,-0.6),(7.5,0.0,-0.2),(6.0,0.8,0.4),(6.0,0.6,0.8),(6.0,0.1,1.2),(6.0,-0.4,1.4),(6.0,-0.9,1.0),(6.0,-1.4,0.5),(6.0,-1.4,-0.5),(6.0,-0.9,-1.0),(6.0,0.1,-1.2),(6.0,-0.4,-1.4),(6.0,0.6,-0.8),(6.0,0.8,-0.4),(4.5,1.2,0.6),(4.5,0.8,1.0),(4.5,0.3,1.4),(4.5,-0.2,1.6),(4.5,-0.7,1.2),(4.5,-1.2,0.8),(4.5,1.2,-0.6),(4.5,0.8,-1.0),(4.5,-0.2,-1.6),(4.5,0.3,-1.4),(4.5,-0.7,-1.2),(4.5,-1.2,-0.8),(1.7,3.0,0.4),(2.0,2.6,0.6),(3.0,1.4,0.8),(3.0,1.0,1.2),(3.0,0.5,1.6),(3.0,0.0,1.8),(3.0,-0.5,1.4),(3.0,-1.0,1.0),(3.0,-1.0,-1.0),(3.0,-0.5,-1.4),(3.0,0.0,-1.8),(3.0,0.5,-1.6),(3.0,1.0,-1.2),(3.0,1.4,-0.8),(2.0,2.6,-0.6),(1.7,3.0,-0.4),(-0.5,3.0,0.4),(-0.5,1.6,0.8),(-0.5,1.2,1.2),(-0.5,0.7,1.6),(-0.5,0.2,1.8),(-0.5,-0.3,1.4),(-0.5,-0.8,1.0),(-0.5,-0.8,-1.0),(-0.5,-0.3,-1.4),(-0.5,0.2,-1.8),(-0.5,0.7,-1.6),(-0.5,1.2,-1.2),(-0.5,1.6,-0.8),(-0.5,3.0,-0.4),(-8.0,2.6,0.2),(-8.0,2.5,0.3),(-8.0,2.4,0.4),(-8.0,2.2,0.5),(-8.0,2.0,0.3),(-8.0,1.8,0.1),(-8.0,1.8,-0.1),(-8.0,2.0,-0.3),(-8.0,2.2,-0.5),(-8.0,2.4,-0.4),(-8.0,2.5,-0.3),(-8.0,2.6,-0.2),(-9.0,2.3,0.1),(-9.0,2.3,-0.1),(-9.0,2.2,2.8),(-10.0,2.3,2.8),(-9.0,2.1,2.8),(-9.0,2.2,-2.8),(-10.0,2.3,-2.8),(-9.0,2.1,-2.8),(0.5,-0.1,0.1),(1.5,-0.1,0.1),(1.5,0.0,-0.1),(0.5,0.0,-0.1),(1.5,-0.3,0.5),(8.5,-0.3,0.5),(8.5,0.0,-0.1),(1.5,0.0,-0.1),(0.1,-0.1,-0.5),(0.1,-0.1,-1.5),(-0.1,0.0,-1.5),(-0.1,0.0,-0.5),(0.5,-0.3,-1.5),(0.5,-0.3,-8.5),(-0.1,0.0,-8.5),(-0.1,0.0,-1.5),(-0.5,-0.1,-0.1),(-1.5,-0.1,-0.1),(-1.5,0.0,0.1),(-0.5,0.0,0.1),(-1.5,-0.3,-0.5),(-8.5,-0.3,-0.5),(-8.5,0.0,0.1),(-1.5,0.0,0.1),(-0.1,-0.1,0.5),(-0.1,-0.1,1.5),(0.1,0.0,1.5),(0.1,0.0,0.5),(-0.5,-0.3,1.5),(-0.5,-0.3,8.5),(0.1,0.0,8.5),(0.1,0.0,1.5)]))),
    Group(DEF='Canopy',
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0,0.8,0.8),shininess=1.0,transparency=0.5)),
          geometry=IndexedFaceSet(coordIndex=[23,24,11,-1,38,24,23,-1,37,38,23,-1,37,11,36,-1,29,22,30,-1,47,29,30,-1,48,29,47,-1,48,49,22,-1,36,11,22,49,-1],
            coord=Coordinate(USE='a')))]),
      TouchSensor(DEF='CanopyTouchSensor',description='touch to activate')]),
    Group(
      children=[
      Transform(DEF='Rotors',rotation=(0.0,0.0,1.0,0.325),translation=(0.5,3.2,0.0),
        children=[
        Transform(rotation=(0.0,0.0,1.0,0.3)),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.099,0.099,0.099),specularColor=(0.099,0.099,0.099))),
          geometry=Cylinder(height=0.4,radius=0.1)),
        Transform(translation=(0.0,0.4,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.099,0.099,0.099),specularColor=(0.099,0.099,0.099))),
            geometry=Cylinder(height=0.3,radius=0.5)),
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.099,0.099,0.099),specularColor=(0.099,0.099,0.099))),
            geometry=IndexedFaceSet(coordIndex=[85,86,87,88,-1,89,90,91,92,-1,93,94,95,96,-1,97,98,99,100,-1,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,-1,113,114,115,116,-1],solid=False,
              coord=Coordinate(USE='a')))])]),
      TimeSensor(DEF='Clock',cycleInterval=0.4,loop=True),
      OrientationInterpolator(DEF='RotorsPath',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='RotorsPath'),
    ROUTE(fromField='value_changed',fromNode='RotorsPath',toField='set_rotation',toNode='Rotors'),
    Background(skyAngle=[1.1,1.57,2.0],skyColor=[(0.6,0.6,0.4),(0.4,0.4,0.7),(0.3,0.3,0.3),(0.773,0.578,0.256)]),
    Viewpoint(description='Starboard',position=(0,4,25)),
    Viewpoint(description='Pilot View',fieldOfView=1.5,orientation=(0,1,0,-1.56),position=(3.9,1.7,0.0)),
    Viewpoint(description='Bow',orientation=(0,1,0,1.56),position=(25,5,0)),
    Viewpoint(description='Port',orientation=(0,1,0,-3.14),position=(0,4,-25)),
    Viewpoint(description='Stern',orientation=(0,1,0,-1.57),position=(-25,5,0)),
    Group(DEF='WeaponsDoor',
      children=[
      Transform(DEF='WeaponsDoorTX',center=(1.75,0.0,1.8),
        children=[
        Transform(rotation=(0,1,0,0.6)),
        Shape(DEF='Door',
          appearance=Appearance(
            material=Material(USE='Body')),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,0,3,5,4,-1,0,4,1,-1,3,2,5,-1],creaseAngle=1.8,
            coord=Coordinate(DEF='b',point=[(3.0,-1.0,1.0),(3.0,0.0,1.8),(-0.5,0.2,1.8),(-0.5,-0.8,1.0),(3.0,0.2,1.8),(-0.5,0.6,1.8),(3.0,-1.0,-1.0),(3.0,0.0,-1.8),(-0.5,0.2,-1.8),(-0.5,-0.8,-1.0),(3.0,0.2,-1.8),(-0.5,0.6,-1.8)]))),
        Transform(translation=(1.25,-0.4,1.08),
          children=[
          Transform(rotation=(1,0,0,0.36),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='Body')),
              geometry=Box(size=(2.0,0.15,0.4))),
            Group(DEF='STBDmissile',
              children=[
              Transform(DEF='StbdMSLTX',translation=(0,0,-0.3),
                children=[
                Transform(rotation=(0,0,1,1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(DEF='SWB',diffuseColor=(0.101,0.172,0.695))),
                    geometry=Cylinder(height=3.0,radius=0.2)),
                  Transform(rotation=(0,1,0,0.79),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,1))),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                        coord=Coordinate(DEF='TrianglePoints',point=[(0,0.5,0),(0,1.5,-0.5),(0,1.5,0.5)])))]),
                  Transform(rotation=(0,1,0,-0.79),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,1))),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                        coord=Coordinate(USE='TrianglePoints')))]),
                  Transform(translation=(0,-1.8,0),
                    children=[
                    Transform(rotation=(1,0,0,3.14),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='SWB')),
                        geometry=Cone(bottomRadius=0.2,height=0.6))])])])])]),
            PositionInterpolator(DEF='STBDmissileInterpolator',key=[0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0],keyValue=[(0,0,-0.3),(0,0,-0.3),(0,0,-0.3),(0,0,-0.3),(0,0,-0.3),(0,0,-0.3),(0,0,-0.3),(0,0,-0.3),(50,0,0),(100,0,0)]),
            TouchSensor(DEF='STBDmissileTouchSensor',description='touch to activate'),
            TimeSensor(DEF='CLOCK3')])])]),
      OrientationInterpolator(DEF='WeaponsDoorInterpolator',key=[0.0,0.5,1.0],keyValue=[(1.0,0,0.0,0.0),(1.0,0,0.0,-1.87),(1.0,0,0.0,-2.0)]),
      TimeSensor(DEF='CLOCK1',cycleInterval=5.0),
      TouchSensor(DEF='WeaponsDoorTouchSensor',description='touch to activate')]),
    Group(DEF='WeaponsDoorPT',
      children=[
      Transform(DEF='WeaponsDoorPTX',center=(1.75,0.0,-1.8),
        children=[
        Shape(DEF='DoorPT',
          appearance=Appearance(
            material=Material(USE='Body')),
          geometry=IndexedFaceSet(coordIndex=[7,6,9,8,-1,9,6,10,11,-1,6,7,10,-1,9,8,11,-1],creaseAngle=1.8,
            coord=Coordinate(USE='b'))),
        Transform(translation=(1.25,-0.4,-1.1),
          children=[
          Transform(rotation=(1,0,0,-0.36),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='Body')),
              geometry=Box(size=(2.0,0.15,0.4))),
            Group(DEF='PORTmissile',
              children=[
              Transform(DEF='PortMSLTX',translation=(0,0,0.3),
                children=[
                Transform(rotation=(0,0,1,1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='SWB')),
                    geometry=Cylinder(height=3.0,radius=0.2)),
                  Transform(rotation=(0,1,0,0.79),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,1))),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                        coord=Coordinate(USE='TrianglePoints')))]),
                  Transform(rotation=(0,1,0,-0.79),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,1))),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                        coord=Coordinate(USE='TrianglePoints')))]),
                  Transform(translation=(0,-1.8,0),
                    children=[
                    Transform(rotation=(1,0,0,3.14),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='SWB')),
                        geometry=Cone(bottomRadius=0.2,height=0.6))])])])])]),
            PositionInterpolator(DEF='PortmissileInterpolator',key=[0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0],keyValue=[(0,0,0.3),(0,0,0.3),(0,0,0.3),(0,0,0.3),(0,0,0.3),(0,0,0.3),(0,0,0.3),(0,0,0.3),(50,0,0),(100,0,0)]),
            TouchSensor(DEF='PortmissileTouchSensor',description='touch to activate')])])]),
      OrientationInterpolator(DEF='WeaponsDoorPTInterpolator',key=[0.0,0.5,1.0],keyValue=[(1.0,0,0.0,0.0),(1.0,0,0.0,1.87),(1.0,0,0.0,2.0)]),
      TimeSensor(DEF='CLOCK2',cycleInterval=3.0),
      TouchSensor(DEF='WeaponsDoorPTTouchSensor',description='touch to activate')]),
    ROUTE(fromField='touchTime',fromNode='WeaponsDoorTouchSensor',toField='set_startTime',toNode='CLOCK1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='WeaponsDoorInterpolator'),
    ROUTE(fromField='value_changed',fromNode='WeaponsDoorInterpolator',toField='set_rotation',toNode='WeaponsDoorTX'),
    ROUTE(fromField='touchTime',fromNode='WeaponsDoorPTTouchSensor',toField='set_startTime',toNode='CLOCK1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='WeaponsDoorPTInterpolator'),
    ROUTE(fromField='value_changed',fromNode='WeaponsDoorPTInterpolator',toField='set_rotation',toNode='WeaponsDoorPTX'),
    ROUTE(fromField='touchTime',fromNode='CanopyTouchSensor',toField='set_startTime',toNode='CLOCK3'),
    ROUTE(fromField='touchTime',fromNode='STBDmissileTouchSensor',toField='set_startTime',toNode='CLOCK3'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK3',toField='set_fraction',toNode='STBDmissileInterpolator'),
    ROUTE(fromField='value_changed',fromNode='STBDmissileInterpolator',toField='set_translation',toNode='StbdMSLTX'),
    ROUTE(fromField='touchTime',fromNode='PortmissileTouchSensor',toField='set_startTime',toNode='CLOCK3'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK3',toField='set_fraction',toNode='PortmissileInterpolator'),
    ROUTE(fromField='value_changed',fromNode='PortmissileInterpolator',toField='set_translation',toNode='PortMSLTX'),
    Sound(DEF='HelicopterWav',maxBack=10000,maxFront=10000,
      source=AudioClip(description='Helo',loop=True,url=["StealthHelo.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.wav"]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StealthHelo.py")
