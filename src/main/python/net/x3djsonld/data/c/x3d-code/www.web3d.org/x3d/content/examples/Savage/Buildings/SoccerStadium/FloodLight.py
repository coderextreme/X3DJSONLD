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
    meta(content='FloodLight.x3d',name='title'),
    meta(content='Stadium floodlight',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='27 August 2003',name='created'),
    meta(content='12 November 2003',name='modified'),
    meta(content='http://www.fussballtempel.net/uefa/Gre/Nikos_Goumas.jpg',name='reference'),
    meta(content='http://www.wsoccer.com/stadium/greece/aek_athens/',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/FloodLight.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(scale=(0.5,1,0.75),
      children=[
      Shape(DEF='Ploe',
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(crossSection=[(-4,0.8),(-2,1.7),(0,2.1),(2,1.7),(4,0.8),(4,-0.8),(2,-1.7),(0,-2.1),(-2,-1.7),(-4,-0.8),(-4,0.8)],scale=[(0.8,0.8),(0.2,0.2)],spine=[(0,0,0),(0,30,0)]))]),
    Transform(center=(0,-3,0),rotation=(1,0,0,0.5),translation=(0,33,0),
      children=[
      Inline(url=["./LightGrid.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/LightGrid.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FloodLight.py")
