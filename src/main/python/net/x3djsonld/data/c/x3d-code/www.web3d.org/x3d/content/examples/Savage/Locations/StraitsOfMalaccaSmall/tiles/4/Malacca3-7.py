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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca3-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[39,40,40,39,38,34,11,9,8,22,25,20,8,3,3,2,4,4,0,2,3,4,36,35,37,39,39,19,11,7,8,25,10,12,11,13,8,3,0,4,7,5,10,9,38,38,36,37,37,37,37,33,32,35,27,12,3,-11,5,2,2,-2,5,6,13,12,39,38,30,34,37,35,36,36,33,34,19,8,3,0,5,3,4,-12,14,10,11,26,40,36,33,36,36,35,13,16,27,31,13,8,3,3,2,3,1,9,11,10,32,36,37,38,38,40,34,37,35,35,14,12,6,0,6,4,2,1,5,8,15,30,35,35,36,35,35,38,33,38,38,19,6,18,7,1,1,6,3,2,9,13,16,27,32,23,34,36,34,36,35,32,34,11,6,13,-1,3,2,1,3,4,8,8,19,26,21,23,36,35,35,36,34,26,20,1,-1,-1,2,3,4,3,2,11,9,23,6,10,0,3,37,36,36,34,36,13,-4,6,4,1,2,2,1,2,2,1,2,0,1,1,5,0,36,37,36,32,20,-3,0,-2,0,2,2,4,0,2,2,2,3,3,3,4,1,4,18,18,29,20,4,-7,-1,-2,0,6,3,3,0,0,2,7,5,2,3,2,1,4,2,24,0,8,1,-7,-1,-5,0,3,1,5,2,5,4,2,4,4,3,1,4,4,1,8,-3,-4,-4,-5,-4,3,4,0,3,4,2,3,3,3,1,3,2,4,4,3,-6,0,-33,7,-2,-8,3,4,0,2,1,2,3,2,3,0,3,3,2,2,4,1,0,0,-24,0,-3,-6,2,6,5,3,3,2,0,3,2,3,4,3,3,4,3,2,3,-5,0,-5,-6,0,1,2,1,3,0,2,2,3,2,3,3,2,2,4,3,2,0,6,0,0,-4,0,4,3,2,2,1,1,2,2,3,2,2,1,3,7,3,2,8,4,-4,0,0,0,4,2,1,2,3,3,2,3,2,3,3,0,4,3,0,2,5,0,0,0,2,5,5,1,2,1,2,3,0,3,1,4,3,2,2,1,3,2,29,19,-2,8,4,0,2,0,3,3,4,2,3,2,2,0,2,2,3,1,3,1,29,28,2,5,3,5,3,0,2,2,1,1,1,2,3,4,5,2,1,2,1,3,28,26,9,7,3,5,2,1,2,1,2,1,1,3,2,4,3,3,0,4,2,4],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
