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
    GeoLOD(center=(41.86339110810791,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-30.x3d'],child2Url=['../../tiles/5/newport30-31.x3d'],child3Url=['../../tiles/5/newport31-30.x3d'],child4Url=['../../tiles/5/newport31-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[16,17,16,12,7,5,8,3,1,1,1,1,1,3,6,10,9,3,11,6,1,1,19,20,17,15,7,2,3,1,1,1,1,1,1,6,6,11,14,12,9,14,11,8,5,5,6,12,4,2,1,1,1,1,3,4,8,9,11,14,14,12,11,16,14,14,5,4,3,2,3,7,3,1,4,7,5,5,12,15,16,11,7,11,15,14,11,8,3,3,2,2,3,5,3,1,1,1,8,7,4,4,4,8,11,15,16,15,14,13,2,2,3,2,5,7,11,15,4,1,1,6,4,5,3,12,9,10,17,18,16,17,5,4,3,3,7,11,11,12,9,10,1,1,1,1,4,6,14,11,8,15,17,18,4,4,5,8,11,13,16,17,15,7,3,1,1,1,8,8,9,17,17,11,12,16,5,4,7,10,12,14,17,20,16,13,5,2,1,1,1,17,21,17,21,13,18,18,5,5,6,10,15,17,19,18,12,8,9,2,1,3,5,7,20,17,21,21,19,17,7,6,5,10,14,16,16,17,14,5,3,1,4,5,18,20,21,17,13,13,14,14,6,5,8,12,16,16,16,16,15,5,1,1,4,9,18,22,18,17,13,13,13,13,4,6,9,11,16,19,22,22,18,9,1,7,8,9,17,20,13,12,13,12,20,22,4,8,8,12,17,23,20,16,15,6,1,5,18,15,9,12,10,12,13,13,16,16,5,8,8,10,15,15,14,12,15,15,5,1,1,5,9,13,9,17,17,15,17,17,6,7,8,13,15,16,18,14,8,4,3,1,1,1,1,6,6,14,17,19,16,16,8,7,8,12,13,12,12,8,3,1,1,1,1,1,1,4,7,12,15,19,14,14,11,8,7,8,7,7,1,1,5,8,5,3,1,1,3,5,6,12,15,11,15,15,17,11,10,8,8,6,2,5,10,10,8,4,3,1,2,6,9,10,12,17,18,17,17,13,12,11,11,4,4,8,13,16,9,15,4,1,2,5,7,16,9,8,9,10,13,10,8,8,9,7,6,16,21,20,13,9,12,3,1,4,7,4,5,6,5,5,13,10,8,7,9,7,6,17,21,21,14,9,12,3,1,4,7,4,5,5,5,5],
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
