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
    GeoViewpoint(description='GeoViewpoint_2_02',geoSystem=['GDC'],position=(40.73424150505923,29.17931591246088,28604.634182705922),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.73424150505923,29.17931591246088,0.0),range=34325.562,child1Url=['../../tiles/3/bosphorus0-4.x3d'],child2Url=['../../tiles/3/bosphorus0-5.x3d'],child3Url=['../../tiles/3/bosphorus1-4.x3d'],child4Url=['../../tiles/3/bosphorus1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[56,343,285,135,81,415,316,203,178,133,150,102,34,27,51,45,44,68,93,90,108,54,22,10,16,10,37,204,150,120,93,46,98,81,153,26,7,89,43,25,48,33,41,40,30,15,16,1,2,2,0,15,52,43,36,17,91,80,5,51,10,86,25,18,64,25,5,0,2,1,0,0,2,1,6,0,0,0,0,4,5,1,-5,5,7,8,46,12,0,3,1,0,0,0,0,0,0,1,2,0,-1,-2,0,2,0,0,-1,8,2,5,-4,0,0,0,0,0,2,1,3,0,0,0,1,0,0,-2,0,-2,-2,0,1,-4,0,-1,4,0,-1,0,0,-1,-1,0,0,1,-2,1,0,0,0,2,0,1,0,1,-1,0,1,0,1,0,-1,-1,-1,0,-1,0,2,0,0,0,1,1,1,0,1,0,0,-3,-1,-1,-1,0,0,-1,-1,0,0,0,0,1,0,0,0,-2,0,0,0,1,-2,0,-2,0,-3,-1,0,1,-1,-1,-1,0,-1,-2,-1,0,1,0,4,0,1,0,-2,-2,-5,-2,0,0,-1,-2,0,0,0,-1,-2,4,2,0,0,0,0,0,2,0,-3,-1,-2,-1,-2,0,0,0,0,0,0,-3,2,3,2,0,0,0,-2,3,0,0,-1,0,0,-1,-3,-2,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,0,0,0,-2,-1,-3,0,1,0,0,0,-3,0,1,0,0,0,0,0,0,0,-2,-1,-1,-1,0,0,-1,-2,0,0,1,0,-1,-1,-1,-1,0,-2,-3,-1,1,0,0,-1,-1,-2,-2,0,-2,-1,-1,-1,0,0,0,-2,0,0,0,0,0,1,0,1,-2,0,-2,0,-1,0,-2,0,-3,-1,-1,-3,-2,0,0,0,5,2,0,2,5,2,-1,-1,0,-1,0,-2,0,-2,-3,-2,0,0,1,0,-1,-2,1,-1,2,6,3,-2,0,-1,-1,-2,0,0,-2,-3,0,0,0,0,4,-3,3,-4,16,10,8,11,20,11,0,-1,-1,-1,-3,-2,-1,0,0,-2,-2,0,0,1,4,0,-11,0,0,21,24,35,0,-1,-1,-1,-2,0,-2,0,0,-1,-2,0,-1,0,0,0,-11,1,0,17,26,36],
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
