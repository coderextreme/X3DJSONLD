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
        texture=ImageTexture(url=['../../images/4/bosphorus1-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.679573392779616,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[-1,-2,-1,0,-1,-1,0,0,4,5,15,14,11,12,13,13,14,15,18,21,31,32,0,0,0,1,-2,2,-1,0,0,3,11,8,9,9,11,13,14,14,15,14,14,14,0,0,1,0,1,0,0,0,0,-2,6,6,7,8,7,9,12,12,10,11,10,10,0,0,-1,1,1,2,-1,1,0,-2,0,7,4,5,9,9,9,10,11,10,10,11,0,1,0,1,1,2,0,0,1,-1,0,2,6,6,6,8,8,8,10,8,6,5,1,1,0,0,0,-1,0,-1,0,0,-2,-1,3,5,3,7,6,6,4,6,5,4,1,0,-2,-1,0,0,1,0,-2,0,-1,0,0,1,3,4,3,3,3,3,1,2,0,1,0,0,1,0,0,0,2,-2,1,0,0,1,1,2,2,1,1,0,0,1,2,6,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,4,0,0,2,0,0,3,2,0,0,0,0,0,-2,0,0,-1,0,0,0,-1,-3,3,0,0,0,0,0,0,-1,1,1,0,0,0,-1,0,2,1,1,5,4,0,-5,0,4,0,0,0,0,0,1,-1,0,2,2,0,1,0,-1,-1,0,1,0,0,0,2,-1,-3,0,0,1,1,1,1,1,1,3,0,0,1,0,1,-1,0,-1,-1,-2,-3,3,2,1,0,0,0,0,0,2,1,3,1,-2,-1,0,0,0,0,0,0,2,1,-1,1,0,1,0,0,0,1,0,0,0,0,0,1,1,0,0,1,2,0,2,0,1,3,-2,2,2,0,4,1,3,1,0,0,3,0,0,2,0,0,2,1,0,3,1,0,0,4,2,1,-2,0,0,0,4,1,2,1,0,0,1,0,0,0,0,1,2,2,5,0,0,-2,2,0,0,2,1,0,0,0,0,0,0,1,0,0,1,1,0,6,0,0,0,0,3,2,1,2,0,0,2,0,1,1,0,-1,0,2,0,1,1,1,3,3,3,0,4,0,0,0,2,2,0,3,1,0,2,0,1,0,1,0,1,0,0,1,1,2,0,1,0,1,1,2,0,1,0,0,0,0,1,0,0,0,-1,0,1,0,0,1,0,0,2,0,0,0,2,0,0,2,0,3,5,0,0,2,0,0,0,0,0,0,2,0,0,2,1,0,0,0,0,1,1,1,1,0,0,2,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,1,1,2,2],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
