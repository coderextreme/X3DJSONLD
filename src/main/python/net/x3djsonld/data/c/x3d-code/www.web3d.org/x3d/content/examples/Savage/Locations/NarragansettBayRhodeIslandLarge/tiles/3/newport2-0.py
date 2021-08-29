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
    GeoLOD(center=(41.35539950857997,-71.74725013871318,0.0),range=12301.135,child1Url=['../../tiles/4/newport4-0.x3d'],child2Url=['../../tiles/4/newport4-1.x3d'],child3Url=['../../tiles/4/newport5-0.x3d'],child4Url=['../../tiles/4/newport5-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.30701935624398,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,2,4,13,1,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,10,12,10,0,0,0,0,0,0,0,0,0,1,0,0,9,6,8,1,8,3,1,5,14,8,12,14,4,10,0,0,0,0,0,5,0,0,18,19,14,13,21,16,16,25,20,14,19,29,24,22,10,0,0,0,0,0,0,5,27,31,24,27,27,22,27,27,30,36,40,34,34,34,18,15,9,0,0,0,5,8,15,15,27,19,26,24,19,16,15,28,38,40,47,48,41,27,22,13,2,2,10,10,10,9,7,11,15,13,13,13,14,27,36,39,42,45,52,48,37,30,23,19,27,21,12,12,9,9,14,13,13,26,15,28,39,43,41,44,49,53,41,36,34,36,41,36,14,11,10,10,12,21,15,18,19,32,51,56,49,41,52,61,50,36,30,38,36,34,10,12,12,12,15,14,15,29,27,43,61,59,47,46,49,61,44,33,30,27,28,21,14,15,16,6,15,12,11,45,42,47,52,53,41,46,36,37,33,24,19,20,20,21,8,16,22,10,12,17,13,28,47,55,46,52,51,50,39,29,39,27,20,17,11,11,16,14,12,14,14,13,21,17,33,50,49,49,55,41,47,42,51,35,31,16,14,11,38,19,12,14,17,41,14,29,22,35,46,34,33,33,39,37,52,53,43,20,11,11,5,11,26,14,13,17,11,16,12,12,33,32,27,20,14,12,18,28,21,13,11,14,4,10,27,13,13,17,10,18,12,12,32,32,27,19,14,12,16,26,19,12,11,15],
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
