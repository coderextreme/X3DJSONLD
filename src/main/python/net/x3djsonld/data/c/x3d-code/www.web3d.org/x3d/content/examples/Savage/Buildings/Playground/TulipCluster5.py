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
    meta(content='TulipCluster5.x3d',name='title'),
    meta(content='This file draw a tulipcluster for the playround.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='11 November 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster5.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(scale=(0.85,0.85,0.85),translation=(0,-0.8,-0.3),
        children=[
        Inline(DEF='TulipPurple',url=["TulipPurple.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPurple.wrl","TulipPurple.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPurple.x3d"])])]),
    Transform(
      children=[
      Transform(scale=(0.7,0.7,0.7),translation=(0,-0.8,-0.2),
        children=[
        Inline(DEF='TulipPink',url=["TulipPink.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPink.wrl","TulipPink.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPink.x3d"])])]),
    Transform(
      children=[
      Transform(scale=(0.95,0.95,0.95),translation=(0,-0.8,-0.1),
        children=[
        Inline(USE='TulipPink')])]),
    Transform(
      children=[
      Transform(scale=(0.75,0.75,0.75),translation=(0,-0.8,0),
        children=[
        Inline(DEF='TulipRed',url=["TulipRed.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipRed.wrl","TulipRed.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipRed.x3d"])])]),
    Transform(
      children=[
      Transform(scale=(0.85,0.85,0.85),translation=(0,-0.8,0.1),
        children=[
        Inline(USE='TulipPurple')])]),
    Transform(
      children=[
      Transform(translation=(0,-0.8,0.2),
        children=[
        Inline(DEF='TulipYellow',url=["TulipYellow.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow.wrl","TulipYellow.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow.x3d"])])]),
    Background(skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TulipCluster5.py")
