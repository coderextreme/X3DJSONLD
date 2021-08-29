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
    meta(content='OspreyParts.x3d',name='title'),
    meta(content='Osprey MV-22 parts?',name='description'),
    meta(content='Major William C. James USMC',name='creator'),
    meta(content='23 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='http://www.navair.navy.mil/v22',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/v-22.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/OspreyParts.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Front, level',orientation=(-1,0,0,0.5),position=(0,15,30)),
    Background(skyColor=[(0,0.2,0.7)]),
    Transform(DEF='Osprey_Body_Whole',scale=(2,2,2),
      children=[
      Shape(
        geometry=Extrusion(DEF='Osprey_Body',creaseAngle=1.6,crossSection=[(0,0),(2,0),(2,-4),(-2,-4),(-2,0),(0,0)],scale=[(1,1),(1,1),(1,0.1)],spine=[(0,0,2),(0,0,-9),(0,0,-14)]),
        appearance=Appearance(
          material=Material(DEF='body1',diffuseColor=(.7,.7,.7))))]),
    #  
    Group(
      children=[
      Transform(DEF='RearHatchTransform',rotation=(0,0,-1,1.57),translation=(0,-5.5,-25),
        children=[
        Group(DEF='RearHatch',
          children=[
          Transform(DEF='RearHatchRotationSupport',
            children=[
            Shape(DEF='RotatingBar',
              geometry=Cylinder(height=4,radius=.2),
              appearance=Appearance(
                material=Material(diffuseColor=(.7,.7,.7)))),
            Transform(DEF='Hatch',
              children=[
              Transform(rotation=(0,0,-1,1.57),translation=(0,0,-2.5),
                children=[
                Shape(
                  geometry=Box(size=(4,.2,5)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0),shininess=.5)))])])])])]),
      TouchSensor(DEF='RearHatchSensor',description='touch to open'),
      TimeSensor(DEF='CLOCK1',cycleInterval=4),
      OrientationInterpolator(DEF='RearHatchInterpolator',key=[0.0,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,-1.0)])]),
    ROUTE(fromField='touchTime',fromNode='RearHatchSensor',toField='set_startTime',toNode='CLOCK1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='RearHatchInterpolator'),
    ROUTE(fromField='value_changed',fromNode='RearHatchInterpolator',toField='set_rotation',toNode='RearHatchRotationSupport'),
    #  <Appearance><Material diffuseColor="0 0 0" ambientIntensity="0.2" emissiveColor="0 0 0" shininess="0.2" specularColor="0 0 0" transparency="0"/> 
    Shape(
      geometry=Text(string=["MARINES"],
        fontStyle=FontStyle(family=["SANS"],justify=["BEGIN","MIDDLE"],size=1.3,style_='BOLD')),
      appearance=Appearance(
        material=Material(diffuseColor=(0,0,0)))),
    Transform(scale=(10,10,10),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OspreyParts.py")
