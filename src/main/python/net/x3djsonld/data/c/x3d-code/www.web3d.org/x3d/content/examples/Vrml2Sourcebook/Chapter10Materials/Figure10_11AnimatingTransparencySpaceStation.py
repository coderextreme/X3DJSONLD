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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Figure10_11AnimatingTransparencySpaceStation.x3d',name='title'),
    meta(content='Figure 10.11, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch10/10fig11.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='13 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A simple space station with a central sphere whose transparency is animated using a ScalarInterpolator. Also see Figure03_10SpaceStation.x3d, Figure10_05MultiColoredSpaceStation.x3d, Figure10_06PulsatingSpaceStation.x3d and Figure10_10SemiTransparentSpaceStation.x3d',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter10Materials/Figure10_11AnimatingTransparencySpaceStation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure10_11AnimatingTransparencySpaceStation.x3d'),
    Viewpoint(description='5m space station from 8m away',position=(0,0,8)),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='BALL_MATERIAL',diffuseColor=(1,0,0))),
        geometry=Sphere(),),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,0.25,1))),
        geometry=Cylinder(height=0.05,radius=2)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.75,0,1))),
        geometry=Cylinder(height=5,radius=0.15)),
      TimeSensor(DEF='CLOCK',cycleInterval=10,loop=True),
      ScalarInterpolator(DEF='TRANSPARENCY_PATH',key=[0,0.45,0.9,1],keyValue=[0,1,0,0])]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='TRANSPARENCY_PATH'),
    ROUTE(fromField='value_changed',fromNode='TRANSPARENCY_PATH',toField='set_transparency',toNode='BALL_MATERIAL')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure10_11AnimatingTransparencySpaceStation.py")
