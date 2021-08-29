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
        texture=ImageTexture(url=['../../images/4/Malacca0-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,104.21606275779241,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[-2,-2,0,3,3,0,2,5,3,9,8,4,5,1,9,1,7,10,8,6,5,0,1,15,-1,2,1,1,1,0,4,5,2,8,7,0,6,1,8,7,13,5,4,-4,8,0,1,1,4,2,0,1,4,6,3,5,9,2,1,1,9,7,3,11,16,-4,2,-3,1,1,1,2,0,1,1,0,5,5,10,6,5,6,11,7,2,7,6,11,4,2,0,0,0,0,2,1,-3,-2,2,0,1,0,1,8,14,11,9,4,4,5,0,2,-3,0,2,0,2,0,3,-3,3,-1,7,-2,-2,7,5,0,11,6,0,-2,-1,0,1,0,8,2,1,1,0,0,0,5,1,-2,-2,10,4,5,6,12,7,13,0,0,-1,-2,3,2,2,2,2,4,0,1,3,-4,-10,-1,-3,6,3,10,10,4,0,-4,-4,31,21,4,0,0,0,2,-1,-2,-5,-4,-5,-7,4,2,5,3,7,2,0,-5,0,4,3,3,9,1,0,2,0,-9,-9,-1,0,-5,1,-2,-1,11,7,0,2,-8,35,5,7,6,1,8,4,-1,3,-1,-2,-3,-1,-6,-4,-5,0,6,2,3,6,108,3,0,-4,-7,-3,-2,0,0,2,0,-5,0,-5,0,-5,0,-7,9,-13,3,-1,5,44,3,7,7,-2,-2,0,2,-1,-2,-1,-5,2,-6,-1,0,-5,2,10,1,-4,16,31,38,24,-5,-1,-3,1,-1,-4,-5,0,-1,-2,-1,-5,0,-4,0,17,0,19,20,25,10,2,-1,0,-1,0,-1,-1,-1,0,-2,-3,1,2,-1,1,17,3,0,24,13,27,4,3,-22,12,9,-4,-3,0,-3,-1,3,-1,1,4,-5,0,0,-2,21,28,34,49,-3,6,0,7,5,-2,-3,-3,-2,0,-1,-8,-9,2,2,4,0,24,3,3,8,29,4,14,1,-1,0,0,-3,-3,-1,-3,0,-8,19,-2,2,23,0,10,0,5,-2,0,2,2,5,9,-1,0,-5,-8,-5,-8,-3,1,-11,-4,0,-1,-1,0,3,32,26,-7,2,5,-2,0,11,-6,-8,-1,-5,0,1,-4,-7,0,0,1,4,5,6,47,3,10,-1,0,0,-2,-5,10,-2,-2,0,-4,0,-3,-5,-2,3,39,0,4,1,35,18,9,-6,8,-1,-4,-4,7,0,-3,0,-2,-5,4,1,4,4,9,10,6,9,31,20,13,-2,2,0,0,-2,8,0,-2,0,-7,-4,4,3,7,2,3,10,6,4],
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
