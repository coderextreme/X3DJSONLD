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
    GeoViewpoint(description='GeoViewpoint_3_45',geoSystem=['GDC'],position=(1.3545435942297035,103.92975052808853,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.3545435942297035,103.92975052808853,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca8-10.x3d'],child2Url=['../../tiles/4/Malacca8-11.x3d'],child3Url=['../../tiles/4/Malacca9-10.x3d'],child4Url=['../../tiles/4/Malacca9-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819587,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[10,9,10,10,8,5,8,3,10,1,0,3,0,6,5,27,3,1,1,4,3,2,25,20,5,9,9,9,10,4,2,0,1,0,2,4,1,9,10,1,0,0,4,3,30,25,6,10,11,8,4,11,2,6,2,2,1,0,4,0,4,1,1,3,4,5,24,6,6,27,8,9,4,5,6,5,1,5,0,0,2,0,6,1,0,1,2,2,22,15,7,10,4,11,10,5,16,3,5,4,5,9,9,0,0,3,1,1,1,2,11,20,3,1,5,37,58,5,7,22,22,6,6,0,7,-2,-6,3,4,1,1,1,14,9,11,1,5,9,10,4,2,14,1,4,18,1,0,-3,10,13,2,1,1,2,24,27,5,6,3,13,6,3,4,4,9,7,7,-2,1,1,19,5,3,8,3,3,18,2,3,3,8,4,2,1,3,0,2,63,31,14,11,10,24,17,3,3,4,4,2,1,2,5,6,4,0,2,4,12,6,4,4,11,4,18,3,2,2,3,3,2,3,2,2,1,3,7,11,1,24,18,13,2,0,4,-5,3,1,1,2,1,3,3,0,1,1,3,3,2,12,11,19,22,13,-1,0,27,3,3,3,2,2,2,2,2,1,2,2,3,0,10,16,35,12,18,25,14,35,38,2,2,3,3,2,2,2,2,7,3,3,1,6,13,28,49,22,43,32,26,49,28,2,2,1,2,1,3,1,0,4,4,8,9,12,11,114,87,42,47,25,42,29,21,2,3,2,2,0,2,3,3,46,31,12,12,10,41,44,28,28,109,66,71,21,4,3,3,4,3,2,3,4,1,10,41,11,20,56,77,75,57,208,43,15,45,3,4,4,4,4,3,4,3,2,1,151,8,27,29,59,44,189,78,382,40,15,34,1,3,3,2,5,4,3,2,2,3,201,8,29,33,37,78,56,101,312,62,36,57,3,3,1,2,3,4,5,3,2,3,241,17,40,71,68,103,37,36,44,64,38,4,3,3,3,3,3,2,2,4,3,3,121,32,69,101,220,30,44,34,43,42,38,4,238,3,2,3,3,2,3,4,3,4,179,36,91,94,231,28,45,27,45,37,43,4,214,3,2,3,3,2,3,4,4,4],
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
