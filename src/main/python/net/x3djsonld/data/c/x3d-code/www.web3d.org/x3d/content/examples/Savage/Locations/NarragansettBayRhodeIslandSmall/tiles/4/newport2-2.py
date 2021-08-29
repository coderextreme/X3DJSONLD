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
    GeoLOD(center=(41.478442799987555,-71.39450930681244,0.0),range=2150.0764,child1Url=['../../tiles/5/newport4-4.x3d'],child2Url=['../../tiles/5/newport4-5.x3d'],child3Url=['../../tiles/5/newport5-4.x3d'],child4Url=['../../tiles/5/newport5-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,6,7,11,11,12,14,15,15,15,15,16,18,18,0,0,0,0,0,0,0,0,0,0,1,6,9,12,14,15,16,17,16,14,15,15,17,17,0,0,0,0,0,0,0,0,0,0,4,7,10,13,16,18,19,18,18,17,16,14,14,15,0,0,0,0,0,0,0,0,0,1,7,9,12,15,17,20,20,20,19,19,18,15,15,15,0,0,0,0,0,0,0,0,0,3,6,9,12,15,18,22,21,21,21,21,21,17,16,17,0,0,0,0,0,0,0,0,1,4,6,10,14,18,21,23,22,22,25,24,22,20,18,18,0,0,0,0,0,0,0,0,2,4,7,13,18,21,24,24,24,24,25,24,23,21,20,20,0,0,0,0,0,0,0,0,2,7,9,13,17,20,23,24,25,25,25,26,24,22,21,21,0,0,0,0,0,0,0,0,4,11,12,14,17,20,23,26,28,29,26,25,25,22,22,22,0,0,0,0,0,0,0,0,7,15,16,18,20,23,26,28,29,29,28,26,26,23,22,22,0,0,0,0,0,0,0,0,3,14,17,20,22,23,25,27,28,28,28,28,27,24,23,23,0,0,0,0,0,0,0,0,0,13,19,21,24,27,27,28,30,29,31,29,27,25,23,22,0,0,0,0,0,0,0,0,0,10,21,24,27,29,28,30,30,31,32,30,28,26,22,21,0,0,0,0,0,0,0,0,0,8,20,26,29,31,28,29,30,29,29,29,30,29,25,23,0,0,0,0,0,0,0,0,0,7,18,26,30,33,30,30,30,29,30,33,33,30,24,23,0,0,0,0,0,0,0,0,0,8,15,25,30,34,33,33,31,30,31,31,32,29,23,22,0,0,0,0,0,0,0,0,0,5,12,21,29,33,30,30,30,29,31,31,31,29,24,23,0,0,0,0,0,0,0,0,0,5,10,16,25,29,30,30,31,31,27,26,28,28,24,22,0,0,0,0,0,0,0,0,1,5,9,13,20,25,29,30,29,29,27,26,27,25,21,19,0,0,0,0,0,0,0,0,1,4,7,12,16,21,24,27,28,28,26,25,23,20,17,16,0,0,0,0,0,0,0,0,2,4,7,10,12,16,20,22,24,26,23,22,20,16,14,13,0,0,0,0,0,0,0,0,4,6,8,8,9,12,16,17,19,21,21,20,17,13,10,10,0,0,0,0,0,0,0,0,4,5,5,6,8,9,12,14,16,16,17,17,14,12,8,8,0,0,0,0,0,0,0,0,4,5,5,6,8,8,12,13,15,15,16,16,14,11,8,6],
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
