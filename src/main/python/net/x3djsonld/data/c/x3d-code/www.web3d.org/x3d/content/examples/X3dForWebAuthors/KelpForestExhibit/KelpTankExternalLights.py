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
    meta(content='KelpTankExternalLights.x3d',name='title'),
    meta(content='Topside lights which illuminate the Kelp Forest Exhibit at night.',name='description'),
    meta(content='Todd Gagnon and Mark A. Boyd',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='3 June 1998',name='created'),
    meta(content='20 December 2002',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='KelpTank.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTankExternalLights.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Model of lights on top floor of the Monterey Bay Aquarium Kelp Forest DTG of last updated: 031200Jun98 Added: Updated: lifted first two lights a bit since I missed them in 1.3 Modeled by: Todd Gagnon and Mark A. Boyd"],title='externalLights1.4.wrl'),
    Group(
      children=[
      Transform(translation=(0.0,2.08,-8.25),
        children=[
        Inline(DEF='Light',url=["KelpTankExternalLight.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTankExternalLight.x3d","KelpTankExternalLight.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTankExternalLight.wrl"])]),
      Transform(rotation=(0.0,1.0,0.0,-0.7),translation=(8.75,2.08,-6.25),
        children=[
        Inline(USE='Light')]),
      Transform(rotation=(0.0,1.0,0.0,3.14),translation=(6.25,2.08,3.25),
        children=[
        Inline(USE='Light')]),
      Transform(rotation=(0.0,1.0,0.0,2.35),translation=(2.5,2.08,1.3),
        children=[
        Inline(USE='Light')]),
      Transform(rotation=(0.0,1.0,0.0,-2.35),translation=(-2.5,2.08,1.3),
        children=[
        Inline(USE='Light')]),
      Transform(rotation=(0.0,1.0,0.0,3.14),translation=(-6.25,2.08,3.25),
        children=[
        Inline(USE='Light')]),
      Transform(rotation=(0.0,1.0,0.0,2.4),translation=(-9.25,2.08,1.65),
        children=[
        Inline(USE='Light')]),
      Transform(rotation=(0.0,1.0,0.0,0.8),translation=(-7.75,2.08,-6.25),
        children=[
        Inline(USE='Light')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KelpTankExternalLights.py")
