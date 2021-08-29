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
    meta(content='Figure24_5TwoAmbientCirclingSounds.x3d',name='title'),
    meta(content='Figure 24.5, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch24/24fig05.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='3 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Two ambient sounds circling the origin.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/Figure24_5TwoAmbientCirclingSounds.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure24_5TwoAmbientCirclingSounds.x3d'),
    Viewpoint(description='5m from center: two circling ambient sounds',position=(0,1,5)),
    Viewpoint(description='8m from center: two circling ambient sounds',position=(0,1,8)),
    NavigationInfo(type=["WALK","EXAMINE","ANY"]),
    Group(
      children=[
      Shape(
        geometry=Sphere(radius=0.5),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0),emissiveColor=(0,1,1)))),
      Transform(DEF='Emitter1',center=(-5,0,0),translation=(5,0,0),
        children=[
        Sound(intensity=0.5,minBack=5,minFront=5,
          source=AudioClip(description='emitter1',loop=True,pitch=1.189,url=["tone1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tone1.wav"])),
        Inline(DEF='SoundMarker',url=["Figure24_1EmitterMarkers.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/Figure24_1EmitterMarkers.x3d","Figure24_1EmitterMarkers.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/Figure24_1EmitterMarkers.wrl"])]),
      TimeSensor(DEF='Emitter1Clock',cycleInterval=15,loop=True),
      OrientationInterpolator(DEF='Emitter1Path',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,-3.14),(0,1,0,-6.28)]),
      Transform(DEF='Emitter2',center=(6,0,0),translation=(-6,0,0),
        children=[
        Sound(intensity=0.5,minBack=5,minFront=5,
          source=AudioClip(description='emitter2',loop=True,url=["tone1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tone1.wav"])),
        Inline(USE='SoundMarker')]),
      TimeSensor(DEF='Emitter2Clock',cycleInterval=7,loop=True),
      OrientationInterpolator(DEF='Emitter2Path',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,3.14),(0,1,0,6.28)])]),
    ROUTE(fromField='fraction_changed',fromNode='Emitter1Clock',toField='set_fraction',toNode='Emitter1Path'),
    ROUTE(fromField='fraction_changed',fromNode='Emitter2Clock',toField='set_fraction',toNode='Emitter2Path'),
    ROUTE(fromField='value_changed',fromNode='Emitter1Path',toField='set_rotation',toNode='Emitter1'),
    ROUTE(fromField='value_changed',fromNode='Emitter2Path',toField='set_rotation',toNode='Emitter2')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure24_5TwoAmbientCirclingSounds.py")
