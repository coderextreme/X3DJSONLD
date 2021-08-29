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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_63',geoSystem=['GDC'],position=(26.906134432197852,56.180963250426785,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.906134432197852,56.180963250426785,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small12-6.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small12-7.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small13-6.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small13-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small6-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[8,5,4,3,2,2,2,4,1,3,3,3,0,2,2,4,2,2,2,1,1,0,50,11,4,2,0,2,0,4,1,2,2,0,0,2,2,2,1,1,2,2,4,4,71,13,9,21,1,3,0,3,1,2,3,2,1,2,2,1,2,1,1,1,1,1,122,30,47,4,1,0,3,2,2,3,1,0,1,4,0,3,3,1,1,2,2,3,24,19,20,8,5,0,2,2,0,2,2,2,0,2,1,1,4,2,5,2,3,3,44,31,15,9,1,3,3,0,2,3,1,0,0,2,1,2,4,3,4,2,2,4,25,46,54,2,5,3,2,3,2,5,1,1,1,1,4,3,3,2,2,0,37,38,18,34,11,17,11,4,28,7,0,1,3,1,1,4,2,0,5,3,2,2,57,62,34,19,13,13,10,11,12,14,1,2,2,2,2,5,3,2,4,2,1,4,53,47,33,38,18,23,119,9,21,14,11,-1,1,2,2,5,2,3,3,5,3,6,24,28,36,43,52,56,131,17,22,16,4,4,3,1,1,2,1,2,3,2,4,5,5,3,42,46,50,87,101,101,42,74,9,3,0,2,4,3,0,2,2,2,2,4,5,5,44,51,63,86,134,142,122,109,48,2,2,3,3,2,4,5,0,2,2,4,5,3,65,66,36,39,58,58,44,16,8,4,0,2,6,2,3,4,7,1,4,5,1,3,69,21,15,21,79,77,57,49,10,4,24,-5,3,0,3,1,4,5,4,0,1,0,112,15,11,17,12,20,65,17,15,9,6,47,28,23,13,7,1,4,4,2,4,3,7,10,7,10,12,20,13,13,41,19,11,10,14,79,73,41,21,0,3,1,2,2,5,5,3,7,10,9,16,16,10,17,19,43,19,18,43,69,34,6,0,3,6,4,4,0,23,14,5,7,9,8,4,16,5,12,12,109,27,55,17,6,4,1,4,0,9,8,5,3,6,6,6,5,7,8,11,4,8,5,24,14,19,0,3,1,0,2,5,1,0,2,2,5,4,3,4,7,2,5,8,2,0,-1,0,0,4,3,2,2,5,1,0,2,2,8,5,3,3,7,3,5,7,3,0,0,0,0,2,2,2,1],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
