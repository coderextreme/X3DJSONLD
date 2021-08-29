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
    GeoViewpoint(description='GeoViewpoint_3_11',geoSystem=['GDC'],position=(41.280922627855375,28.882589547476528,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.280922627855375,28.882589547476528,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus2-1.x3d'],child2Url=['../../tiles/4/bosphorus3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[1,0,17,24,121,27,61,84,46,88,87,49,90,87,7,38,12,48,43,0,4,-2,47,29,75,73,67,72,69,105,91,108,137,115,89,62,32,15,108,96,110,126,86,120,0,96,86,59,126,83,121,98,99,144,96,88,78,110,63,12,82,10,70,134,106,109,107,104,99,105,161,123,168,138,161,154,166,132,110,29,58,78,74,56,60,90,119,131,18,146,140,171,128,197,188,186,133,83,83,119,69,115,56,93,90,113,120,39,107,87,105,129,80,191,211,162,135,106,160,102,110,65,24,40,102,81,118,123,134,164,81,25,106,150,160,149,78,51,100,87,84,122,90,37,33,102,88,100,136,170,91,78,204,131,154,118,65,102,147,161,140,105,141,94,94,74,97,93,137,115,160,172,199,138,166,159,75,74,110,95,147,151,127,66,125,88,74,119,103,99,170,181,161,158,109,122,114,57,95,122,98,107,109,78,117,73,92,120,119,150,121,118,66,62,82,48,12,46,66,65,113,141,121,142,93,38,130,98,83,64,56,15,28,6,17,25,3,-2,0,0,0,1,16,22,67,45,63,21,72,54,14,2,3,0,1,0,0,0,0,0,1,0,1,0,49,20,9,38,5,-1,3,0,2,1,1,1,0,-1,0,0,1,0,0,0,0,1,6,2,-1,3,1,0,0,0,0,3,0,0,0,0,0,1,0,0,1,1,2,0,0,0,-1,0,0,2,3,0,1,2,1,0,0,1,2,0,1,5,1,2,3,0,0,1,3,0,0,3,0,0,0,2,0,0,2,3,0,0,0,1,0,1,1,1,0,3,0,0,1,0,1,0,0,0,-1,0,2,4,0,1,0,2,2,0,1,6,-1,0,0,0,2,-1,0,0,0,1,1,1,1,0,0,0,1,0,1,2,3,2,0,0,-2,0,0,0,0,0,0,-1,6,2,0,1,1,1,2,0,2,1,2,0,1,0,0,1,0,2,1,1,4,2,1,0,1,2,0,3,4,0,2,2,2,2,0,0,1,0,0,3,1,0,4,0,0,0,0,3,0,3,3,0,1,3,1,2],
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
