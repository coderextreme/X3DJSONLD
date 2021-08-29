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
    GeoLOD(center=(41.615647382205246,-71.25730472459475,0.0),range=4300.153,child1Url=['../../tiles/4/newport10-10.x3d'],child2Url=['../../tiles/4/newport10-11.x3d'],child3Url=['../../tiles/4/newport11-10.x3d'],child4Url=['../../tiles/4/newport11-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=21,zSpacing=0.0016141715,height=[30,36,43,47,47,52,57,68,62,59,52,42,54,51,50,46,42,27,15,5,0,23,33,45,53,51,58,56,51,52,48,44,40,41,38,40,39,37,27,13,5,0,24,34,42,54,57,48,47,43,40,35,32,34,37,30,32,35,32,25,13,5,0,25,34,40,43,46,44,37,29,27,24,28,29,29,29,31,34,36,30,16,9,0,23,29,35,31,28,29,25,19,18,26,36,38,40,41,40,42,41,32,20,11,0,21,26,23,20,17,17,11,15,22,30,38,53,44,49,47,47,40,31,22,15,2,10,18,15,16,10,11,13,18,24,35,44,55,51,51,49,46,39,30,25,18,3,0,10,15,9,12,12,14,20,29,39,47,50,49,51,45,44,40,31,28,20,8,0,6,7,14,17,13,19,24,39,45,46,40,52,45,44,44,42,34,33,25,10,0,0,11,11,12,12,17,28,45,50,50,39,48,41,46,46,44,37,32,23,9,0,3,7,9,14,12,21,25,38,46,43,44,41,42,45,51,44,36,28,20,8,0,0,8,12,13,12,11,16,24,34,40,41,44,53,54,51,44,35,27,17,5,0,0,7,17,14,8,9,11,20,29,34,41,49,56,59,52,42,33,25,15,7,0,8,17,13,14,7,4,14,21,26,35,40,47,48,49,46,40,32,23,15,7,2,10,9,18,16,10,1,5,18,26,34,36,41,39,33,29,33,32,23,14,6,1,4,17,19,13,9,5,7,10,22,31,35,31,31,32,19,27,29,24,16,8,0,5,14,12,11,5,1,6,9,17,25,32,29,25,22,21,24,27,24,16,9,0,0,4,6,4,2,2,0,3,16,26,34,24,23,17,21,22,23,22,16,9,0,0,0,0,0,0,4,10,5,8,19,29,33,29,20,18,16,17,18,13,6,0,0,0,0,0,0,1,3,5,6,14,27,35,29,23,19,14,13,12,9,3,0,0,0,0,0,0,1,3,4,5,13,26,35,29,23,19,14,12,12,9,3],
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
