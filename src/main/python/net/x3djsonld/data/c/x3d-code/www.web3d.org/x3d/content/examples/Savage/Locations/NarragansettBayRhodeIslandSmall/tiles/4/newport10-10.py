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
    GeoLOD(center=(41.607576524427735,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-20.x3d'],child2Url=['../../tiles/5/newport20-21.x3d'],child3Url=['../../tiles/5/newport21-20.x3d'],child4Url=['../../tiles/5/newport21-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[22,28,27,33,35,40,45,46,47,48,51,50,54,59,55,59,57,62,64,57,55,52,53,52,24,25,28,32,34,38,44,48,50,50,48,52,55,58,59,63,62,53,56,53,50,49,47,47,21,23,29,32,35,39,46,50,53,53,50,53,61,55,52,53,51,51,50,50,50,47,46,45,24,24,29,32,36,43,47,50,53,58,56,53,52,51,52,49,46,47,47,45,43,40,36,36,23,25,29,34,37,40,44,48,53,55,56,53,49,47,47,47,42,42,45,42,37,35,30,30,19,23,29,34,38,41,47,45,47,50,54,52,46,44,42,38,37,37,34,33,32,29,28,27,20,25,27,31,39,39,41,44,43,43,46,47,45,39,39,37,33,29,25,26,26,23,27,29,17,20,23,28,37,38,41,44,43,37,41,38,36,37,33,28,26,23,21,20,20,25,25,26,16,22,26,27,33,35,35,36,33,31,31,31,30,30,28,25,19,19,18,19,16,25,28,29,15,20,25,29,31,29,30,29,26,28,28,25,26,26,23,20,19,15,16,18,23,26,28,29,7,21,26,27,26,28,23,24,23,22,20,19,18,21,18,15,12,14,16,21,23,25,32,33,0,18,23,24,24,21,21,19,18,17,16,15,15,14,12,10,14,17,21,23,26,29,34,34,0,9,18,21,18,18,18,19,16,15,13,11,8,9,11,12,19,17,22,22,26,30,37,37,0,3,11,17,19,19,15,15,16,12,10,9,10,9,10,15,18,18,22,24,25,32,36,37,0,0,8,12,12,14,17,15,15,13,10,8,10,10,11,13,15,19,23,26,31,32,36,37,0,0,4,9,14,13,14,11,9,14,11,12,11,13,10,14,17,20,22,27,35,39,38,39,0,0,0,2,9,14,16,11,12,13,9,13,11,9,12,13,18,26,29,37,41,45,46,48,0,0,0,3,6,5,8,10,14,13,15,14,15,15,19,20,19,22,30,38,46,47,47,47,0,0,0,6,9,10,9,8,11,10,15,16,17,17,16,17,25,29,32,38,45,48,50,50,0,0,0,0,6,9,10,13,12,15,13,17,13,16,19,17,25,28,32,41,47,49,53,52,0,0,0,0,2,10,13,13,10,11,12,11,12,12,14,19,25,33,39,40,45,47,49,51,0,0,0,0,3,6,11,9,13,12,15,12,14,14,13,20,21,29,35,39,43,51,48,48,0,0,0,0,5,5,8,11,9,10,12,11,11,12,16,23,20,22,30,36,38,42,45,43,0,0,0,0,5,4,7,12,9,10,12,12,11,13,17,22,18,21,28,34,37,41,44,43],
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
