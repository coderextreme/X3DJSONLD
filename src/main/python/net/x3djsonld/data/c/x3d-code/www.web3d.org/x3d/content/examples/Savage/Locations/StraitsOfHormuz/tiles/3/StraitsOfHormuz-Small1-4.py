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
    GeoViewpoint(description='GeoViewpoint_3_14',geoSystem=['GDC'],position=(25.78518503735335,56.48224529143444,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.78518503735335,56.48224529143444,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small2-8.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small2-9.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small3-8.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small3-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small1-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[-1,0,2,1,4,2,5,2,7,3,3,4,0,3,6,3,2,3,2,4,2,3,2,3,3,1,2,3,3,2,3,4,4,0,1,4,0,4,4,2,2,3,2,1,-1,3,1,2,1,5,2,5,6,2,3,5,1,1,1,4,2,0,2,1,1,2,6,-2,2,2,0,1,3,6,3,2,3,5,5,1,6,5,1,-1,1,2,1,1,1,2,0,0,0,1,3,0,1,2,2,1,3,6,3,0,2,3,1,1,1,2,0,3,3,6,0,3,7,10,2,3,3,3,5,1,1,0,-3,-1,0,2,1,3,6,2,8,1,3,4,3,0,1,3,3,3,5,5,8,0,6,1,0,3,1,2,1,9,6,4,4,4,6,5,5,4,4,6,3,1,2,2,1,0,3,5,0,4,73,3,3,4,3,6,3,4,3,2,5,3,3,4,2,1,5,1,0,0,4,0,309,2,4,3,4,2,3,1,3,0,4,0,-3,0,4,0,6,1,4,0,4,6,224,166,1,4,6,6,8,3,0,3,4,1,6,0,-1,1,0,3,0,4,1,3,117,10,2,8,5,2,0,4,5,0,0,4,4,-3,0,6,3,1,7,2,-2,-3,419,50,43,2,2,0,1,0,0,0,1,0,-3,5,0,3,-3,3,0,2,0,0,105,349,10,2,5,-3,0,-1,-1,-3,2,1,4,9,-15,21,0,6,17,-3,3,-4,357,392,147,3,-1,5,16,-3,0,0,13,0,4,-2,-13,-4,-3,-2,0,0,0,3,548,368,5,5,0,-1,-2,-3,0,-1,-18,10,11,-2,2,-5,-6,0,0,6,0,1,204,384,188,204,23,3,1,5,8,-3,10,11,9,2,-2,-5,-2,7,6,6,6,6,500,388,329,1,40,19,1,1,5,1,0,17,11,11,-1,-2,18,-9,6,6,6,6,711,863,471,217,330,12,0,-4,2,3,11,1,11,11,1,4,14,7,3,0,0,0,755,905,907,522,312,91,-2,6,4,5,8,-6,2,-3,-3,7,1,15,6,0,0,0,912,806,1109,379,635,168,-3,1,1,7,-3,0,-3,-3,12,0,7,-8,12,-1,5,6,889,800,1107,363,635,170,0,1,4,7,-4,0,-3,-3,12,0,7,-9,12,-1,5,6],
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
