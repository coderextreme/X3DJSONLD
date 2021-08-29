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
    GeoLOD(center=(41.59143480887271,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-0.x3d'],child2Url=['../../tiles/5/newport18-1.x3d'],child3Url=['../../tiles/5/newport19-0.x3d'],child4Url=['../../tiles/5/newport19-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,11,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,13,11,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,17,10,9,10,9,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,12,12,12,18,13,11,9,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,13,13,14,11,11,10,8,11,9,9,10,11,6,4,5,2,0,0,0,0,0,0,0,14,14,13,12,10,7,11,11,11,10,12,11,9,6,6,7,8,8,6,5,8,8,1,14,15,12,12,10,11,10,9,10,13,10,10,8,7,5,5,7,6,5,5,6,8,5,14,15,16,15,12,10,7,10,11,8,6,6,8,4,3,6,8,6,8,10,6,10,16,13,16,13,13,11,11,10,8,7,5,6,6,6,5,6,11,12,7,9,11,6,8,11,14,12,12,11,10,10,8,7,7,4,10,11,10,10,10,7,6,7,7,7,5,5,6,16,11,10,12,11,10,9,8,7,7,10,9,8,8,9,10,7,7,7,7,8,6,5,14,13,15,11,10,10,8,9,8,9,8,6,8,8,9,7,6,7,8,10,9,8,8,10,11,11,9,11,11,10,10,13,12,8,6,9,10,12,9,9,9,8,8,8,9,10,12,12,11,9,9,10,10,12,12,13,12,13,13,12,12,11,11,9,8,8,9,8,9,14,12,12,11,12,10,12,13,13,11,11,12,15,17,12,16,14,10,8,8,8,8,8,12,16,11,9,9,12,13,12,10,12,13,16,15,13,17,15,12,13,10,9,9,9,9,11,9,8,11,11,10,12,12,12,12,14,18,15,14,12,12,14,13,16,10,8,8,11,6,10,11,9,8,8,11,12,13,16,14,15,16,14,11,11,10,10,14,13,10,9,8,8,7,10,10,12,10,9,10,14,12,15,10,13,13,11,9,10,11,10,10,13,11,8,9,8,7,8,10,10,10,10,13,17,13,13,10,9,8,8,10,12,11,9,8,8,9,8,8,7,8,8,11,10,9,12,16,12,14,11,9,8,8,10,9,10,9,8,8,9],
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
