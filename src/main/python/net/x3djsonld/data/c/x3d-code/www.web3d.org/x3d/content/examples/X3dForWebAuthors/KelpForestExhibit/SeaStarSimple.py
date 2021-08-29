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
    meta(content='SeaStarSimple.x3d',name='title'),
    meta(content='A simple sea star constructed out of scaled Sphere primitives.',name='description'),
    meta(content='Karl Tenney',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 June 1998',name='created'),
    meta(content='13 December 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://x3dgraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarSimple.x3d',name='identifier'),
    meta(content='Cosmo Worlds V2.0',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SeaStarSimple.x3d'),
    Group(DEF='AuthoringViewpoints',
      children=[
      Viewpoint(description='SeaStarSimple default'),
      Viewpoint(DEF='Main',description='SeaStarSimple main',position=(-0.079625,0.149682,2.32008)),
      Viewpoint(DEF='Above',description='SeaStarSimple from above',orientation=(-0.999868,0.0140676,0.00816969,1.0524),position=(-0.0604298,2.20843,1.12432))]),
    Transform(
      #  original translation 0.46739 0 -1.27889 
      children=[
      Transform(rotation=(0.0160324,0.999622,0.0223337,0.494856),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.359698,0.00994363,1.36377),
        children=[
        Shape(DEF='star_segment',
          appearance=Appearance(
            #  Universal Media Materials value used 
            material=Material(DEF='SantaFe27',ambientIntensity=0.240502,diffuseColor=(0.484043,0.338715,0.035729),shininess=0.085106,specularColor=(0.223676,0.109052,0.033373))),
          geometry=Sphere(),)]),
      Transform(scale=(.0276058,0.0102856,0.0691647),translation=(-0.45535,0.0102856,1.22615),
        children=[
        Shape(USE='star_segment')]),
      Transform(rotation=(6.36314e-008,1,-7.41821e-009,0.631741),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.426702,0.0102856,1.34188),
        children=[
        Shape(USE='star_segment')]),
      Transform(rotation=(-2.40082e-007,-1,3.43709e-007,0.712123),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.5,0.0102856,1.32509),
        children=[
        Shape(USE='star_segment')]),
      Transform(rotation=(1.85515e-008,-1,-1.05709e-007,0.919461),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.39858,0.0102856,1.25),
        children=[
        Shape(USE='star_segment')]),
      Transform(rotation=(3.53588e-007,1,1.0134e-006,0.84627),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.5,0.0102858,1.25),
        children=[
        Shape(USE='star_segment')]),
      Transform(rotation=(1.48158e-008,1,-3.7903e-008,1.57079),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.364396,0.00994358,1.19351),
        children=[
        Shape(USE='star_segment')]),
      Transform(scale=(0.0564878,0.00994367,0.0245735),translation=(-0.569653,0.00994355,1.21309),
        children=[
        Shape(USE='star_segment')]),
      Transform(rotation=(4.05455e-007,-1,1.915e-007,1.02836),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.464063,0.00994362,1.1596),
        children=[
        Shape(USE='star_segment')]),
      Transform(rotation=(-5.59581e-009,-1,-9.59606e-009,0.878147),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.510391,0.00994369,1.40221),
        children=[
        Shape(USE='star_segment')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaStarSimple.py")
