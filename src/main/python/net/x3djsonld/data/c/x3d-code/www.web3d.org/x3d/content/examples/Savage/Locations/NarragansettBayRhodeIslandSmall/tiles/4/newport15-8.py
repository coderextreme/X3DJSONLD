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
    GeoLOD(center=(41.68828510220285,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport30-16.x3d'],child2Url=['../../tiles/5/newport30-17.x3d'],child3Url=['../../tiles/5/newport31-16.x3d'],child4Url=['../../tiles/5/newport31-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[0,0,1,6,8,8,11,11,8,7,3,3,4,1,1,1,1,1,3,3,7,7,8,0,0,0,3,7,11,5,6,11,8,4,3,2,1,1,1,1,1,2,3,4,6,2,0,0,0,0,5,6,4,3,7,8,1,1,1,1,1,1,1,1,0,2,3,3,3,0,0,0,0,2,2,8,8,5,4,1,1,1,1,1,1,1,0,1,6,3,3,3,0,0,0,0,1,1,4,8,10,9,1,1,1,1,1,1,1,1,2,1,1,3,3,0,0,0,0,2,8,9,6,4,2,1,1,1,1,1,1,1,1,1,4,6,7,5,0,0,0,0,1,15,11,11,9,10,4,1,1,1,1,1,1,1,8,8,10,10,9,0,0,0,0,0,9,11,8,5,5,2,1,1,1,3,2,2,9,8,9,13,9,7,0,0,0,0,0,3,9,7,6,3,2,4,3,3,5,7,8,10,10,9,12,11,9,0,0,0,0,0,0,0,1,0,0,0,0,7,8,8,7,6,7,8,8,9,10,10,0,0,0,0,0,0,0,0,0,0,0,0,1,7,5,4,5,7,7,7,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,2,2,2,5,5,6,6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,4,5,6,6,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,4,5,4,6,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,3,5,6,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,4,6,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,6,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,5,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,5,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,5,9],
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
