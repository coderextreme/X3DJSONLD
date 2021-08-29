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
        texture=ImageTexture(url=['../../images/4/Malacca8-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[1,1,2,0,2,2,0,3,0,0,-4,0,-8,-3,0,1,3,1,-2,-2,-2,-2,1,1,0,0,0,2,1,2,1,0,4,6,-8,-6,7,-9,1,0,8,-2,-2,-2,1,2,2,2,0,2,0,2,2,4,-1,-7,-4,0,-1,-10,21,-19,-20,7,-2,-2,0,1,1,1,3,0,2,1,0,9,3,0,-8,3,-12,-2,8,18,-16,6,-1,-2,0,1,1,1,1,2,2,1,2,1,1,-4,1,1,0,11,-4,-28,8,-12,1,-2,0,1,1,1,1,1,2,1,0,0,-4,2,11,0,-1,11,3,0,22,2,0,2,1,1,0,2,3,2,2,0,0,1,0,-16,3,8,0,0,11,2,8,21,-19,-13,1,1,2,2,1,2,1,0,1,1,1,13,16,7,0,1,8,11,-1,8,18,-18,0,0,1,4,1,1,0,0,1,1,1,0,1,0,0,0,4,8,11,-4,-28,18,0,2,2,1,0,1,2,0,3,0,1,2,0,0,3,1,0,2,11,2,-1,-27,0,0,0,1,0,0,1,0,2,1,1,0,2,0,2,1,3,1,0,11,0,-1,2,2,0,1,1,1,2,1,1,2,1,1,3,0,0,0,2,1,1,1,1,0,1,2,0,2,1,1,1,0,3,2,2,2,3,0,2,0,1,1,3,1,3,2,2,0,0,1,2,0,1,1,0,1,1,2,2,3,0,1,0,2,-2,0,0,0,0,0,1,1,2,2,1,1,0,2,2,2,1,0,1,1,1,0,2,0,1,-3,1,0,1,0,2,0,1,0,1,0,0,0,1,0,1,1,2,2,1,0,2,2,1,0,2,0,1,0,2,0,1,1,0,1,1,0,0,3,2,3,0,2,3,0,1,1,1,1,0,1,0,0,1,0,1,2,2,1,1,-2,0,0,0,3,2,1,1,2,0,0,1,0,1,1,1,0,1,0,2,2,2,1,0,1,1,0,2,0,0,0,2,1,0,1,0,1,0,1,0,1,1,0,0,1,0,2,1,1,2,1,0,1,0,1,0,0,1,0,0,0,2,2,2,1,2,0,0,3,2,0,0,1,0,1,1,1,0,1,1,1,0,1,0,2,2,1,1,2,2,2,0,-2,0,3,0,0,0,2,0,2,1,1,1,1,1,1,2,0,2,2,2,1,0,-2,2,6],
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
