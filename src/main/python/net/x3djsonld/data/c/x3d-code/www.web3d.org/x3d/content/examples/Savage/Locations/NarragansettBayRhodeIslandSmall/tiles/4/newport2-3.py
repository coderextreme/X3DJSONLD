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
    GeoLOD(center=(41.478442799987555,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport4-6.x3d'],child2Url=['../../tiles/5/newport4-7.x3d'],child3Url=['../../tiles/5/newport5-6.x3d'],child4Url=['../../tiles/5/newport5-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[18,19,19,19,18,17,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,17,19,19,20,18,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,18,18,18,16,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,17,17,15,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,18,17,17,13,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,18,16,15,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,20,18,15,14,10,3,0,0,0,0,0,0,0,0,0,-1,-2,0,0,1,1,0,0,0,21,19,16,14,8,0,0,0,0,0,0,0,0,0,0,1,2,2,2,3,1,0,0,0,22,20,16,14,7,0,0,0,0,0,0,0,0,0,0,6,5,9,9,2,1,0,0,0,22,20,14,10,0,0,0,0,0,0,0,0,0,0,2,5,16,13,8,0,0,0,0,0,23,19,14,0,0,0,0,0,0,0,0,0,0,0,2,9,15,15,8,0,0,0,0,0,22,18,13,0,0,0,0,0,0,0,0,0,1,0,2,12,15,16,12,6,0,0,0,0,21,18,12,0,0,0,0,0,0,0,0,0,1,1,4,17,21,19,19,15,5,2,2,3,23,17,10,0,0,0,0,0,0,0,0,0,1,7,14,20,23,23,24,21,17,16,15,15,23,17,7,0,0,0,0,0,0,0,0,0,1,14,18,21,24,27,27,26,24,25,25,25,22,17,10,0,0,0,0,0,0,0,0,0,1,13,19,22,26,27,27,29,28,29,29,30,23,15,10,0,0,0,0,0,0,0,0,0,1,7,15,18,23,26,28,30,30,29,30,30,22,14,9,0,0,0,0,0,0,0,0,0,1,8,14,17,21,24,27,29,31,31,30,30,19,12,8,0,0,0,0,0,0,0,0,0,1,9,15,17,20,23,25,27,29,29,30,30,16,10,4,0,0,0,0,0,0,0,0,0,6,11,15,18,20,22,24,25,26,27,28,29,13,9,0,0,0,0,0,0,0,0,0,1,10,14,17,20,22,24,25,25,26,26,26,26,10,7,0,0,0,0,0,0,0,0,0,2,13,17,20,23,25,26,25,25,26,26,25,25,8,1,0,0,0,0,0,0,0,0,0,6,13,18,21,25,26,26,24,24,25,25,24,24,6,0,0,0,0,0,0,0,0,0,0,7,13,18,21,25,26,26,25,24,25,25,24,24],
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
