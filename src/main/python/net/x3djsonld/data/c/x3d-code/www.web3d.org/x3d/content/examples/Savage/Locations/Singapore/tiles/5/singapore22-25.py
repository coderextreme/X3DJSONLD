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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore22-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4043609355158675,103.94891185322548,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[5,3,2,1,0,-2,-1,-1,0,0,1,1,1,1,1,1,1,1,4,8,10,11,11,11,9,7,5,4,3,2,2,0,-1,-4,-5,-4,-3,7,4,3,2,1,0,-1,-2,-1,0,0,1,1,1,1,1,1,1,3,6,9,10,11,9,7,5,4,3,3,1,0,-2,-4,-4,-4,-3,-2,10,6,5,3,2,1,0,-2,-1,-1,0,0,1,1,1,1,1,1,2,5,7,9,9,7,5,4,3,3,2,0,-1,-4,-5,-4,-3,-2,0,15,11,7,4,3,2,1,0,-1,-2,-1,0,0,1,1,1,1,1,2,4,5,7,7,5,4,3,3,1,0,-2,-4,-4,-4,-3,-2,0,0,20,15,10,6,5,3,2,1,0,-2,-1,-1,0,0,1,1,1,1,1,2,4,5,5,4,3,3,2,0,-1,-4,-5,-4,-3,-2,0,0,2,23,20,15,11,7,4,3,2,1,0,-1,-2,-1,0,0,1,1,1,1,1,2,3,4,3,3,1,0,-2,-4,-4,-4,-3,-2,0,0,1,3,25,24,20,15,10,6,5,3,2,1,0,-2,-2,-1,0,0,1,1,1,1,2,3,3,3,2,0,-1,-4,-5,-4,-3,-2,0,0,2,3,3,26,25,23,20,15,11,7,4,3,2,1,0,-1,-2,-1,0,0,1,2,2,3,3,2,1,0,-2,-4,-4,-4,-3,-2,0,0,1,3,4,5,26,26,25,24,20,15,10,6,4,3,2,1,0,-2,-2,0,0,1,2,3,3,3,2,0,-1,-2,-4,-4,-3,-2,0,0,2,3,3,5,6,26,26,26,25,23,20,15,11,7,4,3,2,1,0,0,0,1,3,4,4,4,4,3,1,0,0,-1,-1,0,0,0,1,3,4,5,5,6,25,26,26,26,25,24,20,15,10,6,4,4,3,1,0,0,1,4,5,5,5,4,4,3,2,1,0,0,0,1,2,3,3,5,5,5,5,23,26,26,26,26,25,23,20,14,9,7,6,5,4,4,3,4,5,5,5,5,5,4,4,3,3,3,3,3,3,4,4,4,5,5,5,5,20,25,25,26,26,25,25,23,18,11,8,6,6,7,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,16,20,23,26,26,25,23,19,14,10,8,7,7,7,7,7,7,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,11,15,20,25,25,24,20,15,11,8,8,8,8,8,8,8,7,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,9,11,15,18,18,18,15,12,10,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,8,8,11,13,13,13,11,9,9,9,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,9,9,10,11,11,11,10,9,9,9,9,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,10,10,10,11,10,10,10,10,9,9,9,9,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,11,11,11,11,10,10,10,10,10,9,9,9,9,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,12,11,11,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5,5,12,12,11,11,11,11,10,10,10,10,10,9,9,9,9,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
