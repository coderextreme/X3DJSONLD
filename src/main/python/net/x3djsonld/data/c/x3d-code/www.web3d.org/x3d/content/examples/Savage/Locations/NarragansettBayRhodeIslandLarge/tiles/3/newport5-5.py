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
    GeoLOD(center=(41.64568042259594,-71.30754305784501,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-10.x3d'],child2Url=['../../tiles/4/newport10-11.x3d'],child3Url=['../../tiles/4/newport11-10.x3d'],child4Url=['../../tiles/4/newport11-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,9,14,7,0,0,0,0,1,0,0,0,6,49,44,54,64,71,0,0,0,0,8,25,25,16,11,0,0,0,0,0,0,0,15,52,48,49,69,55,0,0,0,0,14,22,34,28,29,19,0,0,0,0,0,0,0,13,27,43,50,63,0,0,0,0,17,21,31,28,34,29,3,0,0,0,0,0,0,5,25,47,58,62,0,0,0,0,0,28,32,36,40,48,25,0,0,0,0,0,0,0,20,43,37,29,0,0,0,0,0,18,28,38,46,55,46,9,0,0,0,0,0,0,0,13,10,14,0,0,0,0,0,0,25,34,38,53,41,10,0,0,0,0,0,0,0,13,12,17,0,0,0,0,0,0,14,32,34,43,32,7,0,0,0,0,0,0,0,13,9,9,0,0,0,0,0,0,5,26,30,17,27,0,0,0,0,0,0,0,2,21,10,5,0,0,0,0,0,0,0,2,8,11,7,0,0,0,0,0,0,0,0,0,1,3,0,0,0,0,0,1,5,2,7,0,0,0,0,0,0,0,0,0,0,0,0,1,0,10,7,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,25,9,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,12,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,2,2,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,37,0,0,2,4,0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,1,17,25,0,8,9,9,0,0,0,0,0,0,0,5,24,0,0,0,0,0,0,0,10,15,0,0,0,0,0,0,0,0,0,0,0,4,16,0,3,0,0,0,0,6,2,11,0,0,0,0,0,0,0,0,0,0,0,9,13,9,11,0,0,0,13,10,8,10,0,0,0,0,0,0,0,0,0,0,0,12,18,13,20,0,0,16,20,24,19,18,0,0,0,0,0,0,0,0,0,0,0,3,7,1,6,0,0,0,8,21,29,29,0,0,0,0,0,0,0,0,0,0,0,3,8,1,6,0,0,0,7,21,30,31],
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
