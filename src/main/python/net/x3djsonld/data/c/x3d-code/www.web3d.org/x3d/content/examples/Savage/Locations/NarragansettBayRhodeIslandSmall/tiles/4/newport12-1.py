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
    GeoLOD(center=(41.63985995553778,-71.41065102236746,0.0),range=2150.0764,child1Url=['../../tiles/5/newport24-2.x3d'],child2Url=['../../tiles/5/newport24-3.x3d'],child3Url=['../../tiles/5/newport25-2.x3d'],child4Url=['../../tiles/5/newport25-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[10,8,8,9,9,10,12,9,6,6,6,5,7,7,6,6,5,3,1,0,0,0,0,0,10,8,8,9,11,12,11,11,10,7,5,5,5,6,4,4,2,2,0,0,0,0,0,0,10,12,10,12,14,12,10,9,9,9,6,5,5,5,4,3,4,2,1,0,0,0,0,0,15,13,13,12,12,12,10,9,9,9,8,7,6,7,6,3,2,1,1,0,0,0,0,0,14,13,15,16,14,11,8,8,9,11,10,9,8,6,4,2,0,0,0,0,0,0,0,0,12,14,15,13,11,10,10,11,12,9,9,9,8,7,5,2,1,0,0,0,0,0,0,0,12,12,12,12,10,10,13,15,13,10,10,10,10,8,6,7,4,0,0,0,0,0,0,0,13,12,11,12,13,12,13,13,13,12,11,11,9,7,7,7,3,0,0,0,0,0,0,0,13,14,11,12,12,14,13,12,13,12,11,13,11,8,5,5,1,0,0,0,0,0,0,0,14,14,15,13,12,12,11,11,12,12,13,11,10,10,7,6,2,0,0,0,0,0,0,0,14,14,13,13,10,10,12,13,13,13,12,11,11,9,7,5,0,0,0,0,0,0,0,0,13,13,12,10,11,12,12,14,13,13,12,11,11,10,8,4,0,0,0,0,0,0,0,0,14,12,12,11,13,14,14,13,12,10,9,8,9,9,7,2,0,0,0,0,0,0,0,0,13,12,11,13,16,13,12,13,12,9,7,7,8,8,5,0,0,0,0,0,0,0,0,0,15,11,11,11,13,12,11,9,9,10,12,10,8,6,3,0,0,0,0,0,0,0,0,0,11,11,9,10,12,10,10,8,9,14,15,12,7,4,1,0,0,0,0,0,0,0,0,0,11,9,8,7,9,9,11,12,14,16,12,9,5,2,1,0,0,0,0,0,0,0,0,0,12,11,10,10,9,9,11,12,11,9,9,8,5,2,0,0,0,0,0,0,0,0,0,0,11,10,10,7,6,8,11,10,11,8,7,5,3,3,1,0,0,0,0,0,0,0,0,0,10,9,7,4,5,9,9,9,9,6,4,4,4,3,1,0,0,0,0,0,0,0,0,0,9,9,6,2,1,8,7,7,6,5,6,6,6,2,0,0,0,0,0,0,0,0,0,0,10,10,9,6,1,1,3,5,6,6,6,8,7,4,0,0,0,0,0,0,0,0,0,0,9,9,9,8,3,2,3,4,6,7,7,8,7,5,0,0,0,0,0,0,0,0,0,0],
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
