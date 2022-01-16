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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(name='title',content='geobubbles.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/geobubbles.x3d'),
    meta(name='description',content='geo bubbles')]),
  Scene=Scene(
    # Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
    # PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
    children=[
    GeoViewpoint(DEF='Tour',position=(0,0,4),orientation=(1,0,0,0),description='Tour Views'),
    Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"],bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"],frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"],leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"],rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"],topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]),
    Transform(
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5))))]),
    TimeSensor(DEF='TourTime',cycleInterval=5,loop=True),
    GeoPositionInterpolator(DEF='TourPosition',key=[0,1],keyValue=[(0.0015708,0,4),(0,0.0015708,4)]),
    Script(DEF='RandomTourTime',
      field=[
      field(name='set_cycle',accessType='inputOnly',type='SFTime'),
      field(name='val',accessType='inputOutput',type='SFFloat',value=0),
      field(name='positions',accessType='inputOutput',type='MFVec3d',value=[(0.0015708,0,4),(0,0.0015708,4)]),
      field(name='position',accessType='inputOutput',type='MFVec3d',value=[(0.0015708,0,4),(0,0.0015708,4)])]
*** TODO x3d.py and X3dToPython.xslt need to handle embedded CDATA source code for Script
),
    ROUTE(fromNode='TourTime',fromField='cycleTime',toNode='RandomTourTime',toField='set_cycle'),
    ROUTE(fromNode='RandomTourTime',fromField='position',toNode='TourPosition',toField='keyValue'),
    ROUTE(fromNode='TourTime',fromField='fraction_changed',toNode='TourPosition',toField='set_fraction'),
    ROUTE(fromNode='TourPosition',fromField='geovalue_changed',toNode='Tour',toField='set_position')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful (still testing)")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for geobubbles.py")
