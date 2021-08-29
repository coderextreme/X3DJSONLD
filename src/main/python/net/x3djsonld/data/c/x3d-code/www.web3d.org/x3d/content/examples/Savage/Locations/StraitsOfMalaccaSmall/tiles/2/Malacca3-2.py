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
    GeoViewpoint(description='GeoViewpoint_2_32',geoSystem=['GDC'],position=(4.979361030700214,102.96356269830186,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.979361030700214,102.96356269830186,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca6-4.x3d'],child2Url=['../../tiles/3/Malacca6-5.x3d'],child3Url=['../../tiles/3/Malacca7-4.x3d'],child4Url=['../../tiles/3/Malacca7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[109,259,347,98,313,715,245,298,614,303,700,118,273,66,119,9,61,7,7,8,6,7,178,283,181,117,228,194,225,310,552,449,310,181,311,148,24,44,15,7,5,5,5,5,175,324,200,262,173,219,141,294,217,216,428,391,371,65,72,295,7,5,5,6,7,6,224,276,557,352,144,123,122,174,464,495,163,145,450,203,440,225,5,5,5,6,5,7,318,918,702,160,183,206,331,183,767,1072,85,63,334,27,363,24,16,5,4,6,6,8,229,1375,316,338,378,370,194,354,278,1212,543,77,261,32,164,16,4,7,6,4,5,3,683,483,183,843,714,238,219,840,384,671,281,61,141,33,44,5,8,5,3,5,4,4,688,415,167,401,249,219,523,357,243,1206,778,67,129,25,33,31,6,6,6,6,6,5,930,237,251,653,150,254,687,267,204,1230,635,60,104,19,15,21,7,6,5,7,6,4,207,204,195,126,109,122,493,194,618,974,421,61,82,18,32,12,7,7,6,4,6,5,139,127,160,107,111,246,519,153,166,855,45,42,41,18,4,5,7,5,4,6,3,5,150,146,142,74,135,184,150,154,142,316,233,32,250,23,8,6,6,7,7,7,7,6,96,188,126,57,120,220,250,355,296,239,21,26,20,27,4,4,4,8,8,7,6,7,93,534,74,316,250,297,136,218,156,43,32,15,14,8,6,7,7,3,5,6,9,7,92,230,100,343,484,291,394,286,299,51,33,15,7,18,6,6,6,6,4,5,6,6,147,223,47,479,370,549,450,666,69,85,15,15,6,4,4,4,3,7,4,5,4,4,104,204,63,383,410,649,496,513,78,28,22,9,8,4,6,5,7,3,6,3,4,5,353,179,220,710,332,284,648,80,39,28,57,7,5,3,4,3,3,7,8,7,7,6,197,33,374,681,59,328,421,69,52,22,31,9,4,2,3,4,4,3,6,4,4,8,115,39,62,382,47,137,767,21,18,8,10,3,6,6,3,3,6,6,1,6,7,6,53,38,84,740,30,133,516,27,12,5,6,6,5,5,5,6,6,4,6,7,5,4,55,43,84,731,29,85,507,32,11,4,6,6,5,6,4,6,7,2,5,7,5,2],
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
