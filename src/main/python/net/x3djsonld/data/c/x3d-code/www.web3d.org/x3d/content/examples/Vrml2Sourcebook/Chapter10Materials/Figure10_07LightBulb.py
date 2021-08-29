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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Figure10_07LightBulb.x3d',name='title'),
    meta(content='Figure 10.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch10/10fig07.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='15 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A lightbulb that varies in brightness as the pointing device is held over the socket.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter10Materials/Figure10_07LightBulb.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure10_07LightBulb.x3d'),
    Viewpoint(description='Light bulb: put mouse over socket to change brightness',position=(0,0,8)),
    Transform(translation=(0,2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.4,0.4),emissiveColor=(0.1,0.1,0.1))),
        geometry=Cylinder(radius=0.05)),
      Group(
        children=[
        Transform(translation=(0,-1,0),
          children=[
          Shape(
            appearance=Appearance(DEF='BULB_CASING',
              material=Material(DEF='SOCKET_MATERIAL',diffuseColor=(0.4,0.4,0.16),emissiveColor=(0.4,0.4,0.16))),
            geometry=Sphere(radius=0.5))]),
        Transform(translation=(0,-1.5,0),
          children=[
          Shape(
            appearance=Appearance(USE='BULB_CASING'),
            geometry=Cylinder(height=1,radius=0.5))]),
        TouchSensor(DEF='SOCKET_TOUCHSENSOR',description='touch to change light intensity')]),
      Transform(translation=(0,-2.95,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='BULB_MATERIAL',diffuseColor=(0.4,0.4,0.4),emissiveColor=(0.8,0.8,0.8))),
          geometry=Sphere(),),
        PointLight(DEF='LIGHTSOURCE')])]),
    TimeSensor(DEF='LIGHT_TIMESENSOR',cycleInterval=3,enabled=False,loop=True),
    ColorInterpolator(DEF='WHITE_COLORINTERPOLATOR',key=[0,0.1,0.4,0.6,0.9,1],keyValue=[(1,1,1),(1,1,1),(0.1,0.1,0.1),(0.1,0.1,0.1),(1,1,1),(1,1,1)]),
    ROUTE(fromField='isOver',fromNode='SOCKET_TOUCHSENSOR',toField='enabled',toNode='LIGHT_TIMESENSOR'),
    ROUTE(fromField='fraction_changed',fromNode='LIGHT_TIMESENSOR',toField='set_fraction',toNode='WHITE_COLORINTERPOLATOR'),
    ROUTE(fromField='value_changed',fromNode='WHITE_COLORINTERPOLATOR',toField='set_diffuseColor',toNode='BULB_MATERIAL'),
    ROUTE(fromField='value_changed',fromNode='WHITE_COLORINTERPOLATOR',toField='set_emissiveColor',toNode='BULB_MATERIAL'),
    ROUTE(fromField='value_changed',fromNode='WHITE_COLORINTERPOLATOR',toField='set_color',toNode='LIGHTSOURCE')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure10_07LightBulb.py")
