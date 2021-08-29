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
    GeoLOD(center=(41.35539950857997,-71.65930872253955,0.0),range=12301.135,child1Url=['../../tiles/4/newport4-2.x3d'],child2Url=['../../tiles/4/newport4-3.x3d'],child3Url=['../../tiles/4/newport5-2.x3d'],child4Url=['../../tiles/4/newport5-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.30701935624398,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,28,23,20,1,4,1,0,2,3,0,0,0,0,0,0,0,0,2,1,0,0,34,35,36,30,22,21,0,5,7,7,6,6,0,0,0,0,0,0,5,0,0,0,21,28,31,31,25,21,18,14,12,11,11,10,0,0,4,1,4,4,0,1,0,0,21,31,32,16,14,25,32,26,16,15,11,7,5,0,5,8,6,8,6,3,1,0,11,11,19,11,11,11,24,34,26,11,15,4,0,1,4,3,6,9,8,6,3,1,11,11,11,11,11,13,31,43,29,22,21,15,12,8,3,4,8,13,13,9,6,6,11,15,16,11,11,29,42,28,16,18,14,30,30,24,24,12,4,18,18,20,17,15,14,18,20,15,31,34,38,21,22,16,18,31,28,37,34,26,24,23,30,33,37,36,15,19,20,16,32,34,37,21,22,16,18,29,28,37,34,27,26,23,32,34,38,38],
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
