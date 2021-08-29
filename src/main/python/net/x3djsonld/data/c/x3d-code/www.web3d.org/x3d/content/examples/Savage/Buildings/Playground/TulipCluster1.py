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
    meta(content='TulipCluster1.x3d',name='title'),
    meta(content='This file draw a tulip cluster for the playround.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster1.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(translation=(0,-0.8,0),
        children=[
        Inline(url=["TulipPink.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPink.x3d","TulipPink.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPink.wrl"])])]),
    Transform(
      children=[
      Transform(scale=(0.75,0.75,0.75),translation=(0,-0.8,0.1),
        children=[
        Inline(url=["TulipYellow1.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow1.x3d","TulipYellow1.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow1.wrl"])])]),
    Transform(
      children=[
      Transform(scale=(0.7,0.7,0.7),translation=(0,-0.8,0.2),
        children=[
        Inline(url=["TulipPurple.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPurple.x3d","TulipPurple.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPurple.wrl"])])]),
    Transform(
      children=[
      Transform(translation=(0,-0.8,-0.3),
        children=[
        Inline(url=["TulipPurple1.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPurple1.x3d","TulipPurple1.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipPurple1.wrl"])])]),
    Transform(
      children=[
      Transform(scale=(0.75,0.75,0.75),translation=(0,-0.8,-0.2),
        children=[
        Inline(url=["TulipRed.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipRed.x3d","TulipRed.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipRed.wrl"])])]),
    Transform(
      children=[
      Transform(scale=(0.9,0.9,0.9),translation=(0,-0.8,-0.1),
        children=[
        Inline(url=["TulipYellow.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow.x3d","TulipYellow.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow.wrl"])])]),
    Transform(),
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

print ("python x3d.py load successful for TulipCluster1.py")
