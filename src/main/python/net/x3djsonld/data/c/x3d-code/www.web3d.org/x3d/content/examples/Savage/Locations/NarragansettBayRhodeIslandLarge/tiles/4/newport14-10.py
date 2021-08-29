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
    GeoLOD(center=(41.81501095577192,-71.32952841188842,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-20.x3d'],child2Url=['../../tiles/5/newport28-21.x3d'],child3Url=['../../tiles/5/newport29-20.x3d'],child4Url=['../../tiles/5/newport29-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[8,8,8,8,7,8,8,8,8,8,8,9,4,2,1,1,0,6,7,6,5,4,8,8,8,8,7,8,8,8,8,8,8,11,5,2,2,0,0,6,6,5,5,5,8,8,8,8,8,9,10,11,11,14,14,10,4,2,1,5,6,6,6,6,7,6,9,8,8,8,8,9,11,15,14,15,11,4,5,4,1,2,7,7,7,7,8,8,8,11,10,10,9,10,9,10,8,5,4,3,4,3,2,2,2,7,8,8,8,8,9,9,9,8,9,10,10,10,10,5,3,2,2,2,2,2,3,7,8,8,8,8,11,11,9,10,10,11,10,9,9,6,2,1,1,8,9,7,8,9,8,9,8,8,11,11,11,11,12,14,11,12,12,5,2,1,7,11,11,11,9,8,8,8,8,8,14,12,12,12,14,11,14,12,7,3,1,5,7,10,10,14,15,11,8,9,10,10,22,16,15,12,12,13,11,5,2,1,2,6,10,14,14,16,17,17,12,11,11,11,22,20,20,14,7,13,9,1,2,2,4,12,11,12,15,17,19,19,13,11,10,10,15,19,19,14,8,4,2,2,3,5,11,11,11,12,19,20,18,19,17,17,12,12,14,13,15,21,5,2,2,3,5,6,11,12,11,17,20,18,20,19,17,15,15,15,20,21,16,8,9,4,2,4,5,8,8,11,14,20,18,15,22,19,16,15,12,10,24,27,21,16,11,5,2,6,7,12,12,14,16,17,14,16,21,19,15,15,10,10,28,29,25,17,14,5,5,6,12,12,12,14,18,16,14,15,18,18,15,11,12,15,28,25,18,14,12,7,6,10,15,18,15,14,15,15,13,18,19,18,17,16,20,22,17,15,12,8,6,6,6,11,18,20,20,21,21,15,15,19,21,18,20,22,31,34,17,12,10,5,5,5,12,7,13,14,15,13,14,14,15,18,21,20,25,27,40,40,15,12,5,5,9,19,12,11,11,16,16,14,13,14,14,17,17,24,30,30,43,39,14,8,5,6,6,9,13,18,11,14,14,13,13,13,14,13,17,27,27,32,41,38,14,7,5,6,6,10,13,18,13,14,13,13,13,13,14,13,17,27,27,33,41,38],
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
