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
    meta(content='ChopperBody.x3d',name='title'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 June 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='VRML 97 specification example: main body for Chopper example, used as an Inline to show scene composition.',name='description'),
    meta(content='originals/chopperbody.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.16 Chopper',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.16',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/ChopperBody.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ChopperBody.x3d'),
    Transform(translation=(-0.1,-0.85,4.95952),
      children=[
      Transform(rotation=(0.8321951,-0.39732206,0.38676405,1.77988),scale=(1.0,0.999999,0.999998),scaleOrientation=(0.41401106,0.41635105,0.8094731,0.298078),translation=(-0.319032,-0.0473949,-4.51302),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(0,0.2),(0.6,0.2),(0.8,0),(0.8,-0.4),(0.6,-0.6),(0.2,-0.6),(0,-0.4),(-0.2,0),(0,0.2)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(0.021511,0.021511),(0.659496,0.659496),(0.872158,0.872158),(1,1),(1,1),(0.872158,0.872158),(0.659496,0.659496),(0.048094,0.048094)],solid=False,spine=[(0,-1,0),(-0.003214,-0.953553,0),(-0.002855,-0.876386,0),(-0.003214,-0.74785,0),(-0.003214,-0.445722,0),(-0.003214,-0.323585,0),(-0.003214,-0.252875,0),(0,-0.2,0)]),
          appearance=Appearance(
            material=Material(DEF='_0')))]),
      Transform(rotation=(0.8273403,-0.41326016,0.38042614,1.77274),scaleOrientation=(-0.17204592,0.27246588,0.94665855,0.228295),translation=(-0.877833,0.458808,-4.77874),
        children=[
        Shape(
          geometry=Extrusion(convex=False,creaseAngle=1.57,crossSection=[(0.6,0.6),(0.6,0.4),(-0.8,0.4),(-1.0,0.0),(-1.2,0.0),(-1.0,0.6),(0.6,0.6)],orientation=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],scale=[(1.0,1.0),(1.0,1.0)],solid=False,spine=[(0.0,-1.0,0.0),(0.0,-0.8,0.0)]),
          appearance=Appearance(
            material=Material(USE='_0')))]),
      Transform(rotation=(0.0,-1.0,0.0,0.873008),scale=(0.0980455,0.370358,0.213029),translation=(0.120967,0.410068,-4.95952),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759E-6,1.0),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1.0,2.53518E-6),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277E-6,-1.0),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1.0,0.0)],orientation=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],scale=[(1.0,1.0),(0.4,0.181007)],solid=False,spine=[(0.0,-1.0,0.0),(0.0,1.0,0.0)]),
          appearance=Appearance(
            material=Material(USE='_0')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ChopperBody.py")
