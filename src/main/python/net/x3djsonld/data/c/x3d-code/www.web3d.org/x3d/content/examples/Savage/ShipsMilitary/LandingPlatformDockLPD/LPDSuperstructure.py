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
    meta(content='LPDSuperstructure.x3d',name='title'),
    meta(content="This is an LPD-17 Landing Platform Dock amphibious support ship. This model is being developed for inclusion in the SAVAGE project. Information for this model was obtained from Jane's Online Fighting Ship catalog and the FAS website at www.FAS.org",name='description'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='28 Jan 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Info obtained at http://www.fas.org',name='reference'),
    meta(content="Informat also obtained from Jane's Online Fighting Ship catalog",name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingPlatformDockLPD/LPDSuperstructure.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    LOD(range=[1000],
      children=[
      Viewpoint(description='LPD superstructure',position=(-20,0,140)),
      WorldInfo(info=["null node"])]),
    Transform(
      children=[
      Shape(
        geometry=Extrusion(convex=False,creaseAngle=1.57,crossSection=[(-19.7,-14),(19.7,-14),(19.7,8.44),(14,8.44),(14,14),(-19.7,14),(-19.7,-14)],orientation=[(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1,1)],solid=False,spine=[(-36.5,0,0),(-36.5,14.02,0)]),
        appearance=Appearance(
          material=Material(DEF='HullGray',diffuseColor=(.8,.8,.8))))]),
    Transform(translation=(-8.5,7,-5.5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(USE='HullGray')),
        geometry=Box(size=(17,14,2)))]),
    Transform(translation=(-8.5,7,6),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(USE='HullGray')),
        geometry=Box(size=(17,14,2)))]),
    Transform(
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(-22,-12.4),(22,-12.4),(22,12.4),(-22,12.4),(-22,-12.4)],orientation=[(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1,1)],solid=False,spine=[(22,0,0),(22,14.001,0)]),
        appearance=Appearance(
          material=Material(USE='HullGray')))]),
    Transform(translation=(-88,.25,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(USE='HullGray')),
        geometry=Box(size=(64,.5,32)))]),
    Transform(
      children=[
      Shape(DEF='ForwardAntennaEnclosure',
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(-.5,-1.5),(.5,-1.5),(1.5,-.5),(1.5,.5),(.5,1.5),(-.5,1.5),(-1.5,.5),(-1.5,-.5),(-.5,-1.5)],orientation=[(0,0,1,0),(0,0,1,.1)],scale=[(3,3),(1.25,1.25)],solid=False,spine=[(30,12,0),(30,28,0)]),
        appearance=Appearance(
          material=Material(USE='HullGray')))]),
    Transform(
      children=[
      Shape(DEF='RearAntennaEnclosure',
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(-.5,-1.5),(.5,-1.5),(1.5,-.5),(1.5,.5),(.5,1.5),(-.5,1.5),(-1.5,.5),(-1.5,-.5),(-.5,-1.5)],orientation=[(0,0,1,0),(0,0,1,.1)],scale=[(2.75,2.75),(1,1)],solid=False,spine=[(-30,12,0),(-30,30,0)]),
        appearance=Appearance(
          material=Material(USE='HullGray')))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LPDSuperstructure.py")
