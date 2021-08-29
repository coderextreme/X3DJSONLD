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
    GeoLOD(center=(41.839201031939915,-71.30754305784501,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-10.x3d'],child2Url=['../../tiles/4/newport14-11.x3d'],child3Url=['../../tiles/4/newport15-10.x3d'],child4Url=['../../tiles/4/newport15-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[6,7,7,7,8,8,3,0,1,7,2,2,2,3,2,2,1,2,5,6,9,11,8,8,8,9,9,11,2,1,4,5,6,5,5,4,2,2,1,3,6,6,8,8,9,9,9,11,8,3,4,2,6,7,8,6,5,3,2,4,5,3,5,6,6,6,10,10,10,9,9,2,6,8,8,9,8,7,6,5,3,3,4,2,3,2,2,4,11,11,14,13,12,1,12,18,9,8,9,8,6,5,5,2,4,2,2,2,6,5,20,15,12,11,1,7,13,15,18,11,10,8,8,7,6,5,6,4,5,5,7,8,15,19,2,3,4,12,11,20,20,15,15,11,10,10,10,7,5,6,0,9,15,13,25,14,9,4,7,10,16,15,21,14,9,11,8,8,11,15,14,6,7,12,8,10,27,21,9,5,14,17,16,16,19,14,20,19,7,6,10,13,8,8,1,8,10,7,14,10,6,7,17,20,16,16,21,25,33,22,17,8,4,3,6,9,7,5,6,6,13,6,10,17,12,14,13,14,20,26,38,24,19,8,5,9,7,19,18,9,12,12,10,7,11,14,15,12,14,17,24,29,29,27,25,11,8,3,10,12,12,12,13,15,6,5,15,15,14,15,15,14,22,29,24,31,29,13,11,11,6,11,13,11,15,15,5,14,10,18,15,14,15,28,19,29,33,36,26,16,15,14,7,10,11,9,16,16,15,19,18,14,17,15,17,18,17,17,38,41,26,16,14,14,11,15,10,11,9,12,18,18,16,14,16,18,18,20,21,17,33,22,25,25,22,22,22,11,12,9,12,12,18,18,14,18,19,18,20,17,16,21,22,24,27,29,36,27,28,22,14,14,10,10,21,19,15,21,21,22,22,22,24,21,24,26,34,36,36,37,36,37,20,14,12,11,20,21,14,15,12,18,26,25,23,23,23,30,43,41,50,51,43,40,34,32,23,16,21,21,21,14,21,18,20,29,30,24,27,33,41,48,53,73,56,47,54,59,36,29,23,23,21,14,14,22,17,26,36,25,33,38,43,49,54,64,50,48,46,40,32,32,23,23,21,13,14,22,17,26,37,25,33,38,43,49,54,64,50,47,46,40,32,32],
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
