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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[748,850,627,469,935,992,817,947,740,416,79,73,103,187,484,355,665,868,978,812,99,40,915,724,360,178,920,1055,565,295,668,333,73,71,100,125,523,795,993,984,941,915,305,248,868,748,430,107,159,544,504,228,95,228,62,72,90,277,464,726,653,872,924,856,628,259,882,732,684,124,90,128,617,258,61,214,82,62,81,201,680,396,294,446,918,949,649,163,861,656,654,654,127,93,332,305,49,51,61,58,89,605,611,341,133,469,727,455,451,450,866,683,468,588,410,103,83,332,51,47,49,203,313,410,270,244,104,249,671,427,245,334,637,770,654,310,399,108,48,50,47,41,200,404,299,76,68,80,110,150,354,379,60,190,512,729,735,606,329,339,79,36,49,36,141,94,69,57,188,284,112,312,392,528,24,4,280,531,720,579,567,224,76,26,32,32,175,33,45,203,541,568,287,282,545,511,27,4,69,436,756,576,523,320,278,40,27,58,23,27,179,528,500,605,633,694,461,597,79,15,197,378,646,636,466,340,246,59,26,22,21,206,526,521,344,562,653,714,343,325,390,231,82,222,483,686,427,211,245,397,20,17,16,285,455,532,258,503,602,500,368,68,192,189,48,142,726,671,469,211,185,294,24,10,13,159,361,411,250,335,534,317,160,31,52,190,1,503,646,627,560,341,53,309,17,10,7,68,300,342,327,237,249,0,8,18,119,63,6,433,524,573,520,422,12,277,8,6,7,129,236,266,303,171,22,-2,125,70,0,6,46,291,440,521,506,297,5,134,287,3,5,20,189,235,295,67,246,-6,-3,1,2,0,3,226,410,446,478,329,12,95,236,9,-5,121,120,189,207,0,223,10,14,5,5,-2,3,97,286,436,418,317,103,14,179,15,0,124,122,137,116,13,11,23,162,422,110,63,2,34,237,403,378,262,3,4,76,3,2,93,94,15,45,11,23,36,195,551,372,337,3,5,200,375,282,316,53,4,3,3,4,18,22,1,2,37,10,11,100,297,506,510,3,70,288,300,265,260,24,2,0,5,0,6,2,1,7,8,-1,-7,271,574,722,655,6,43,202,238,272,192,14,1,4,-4,2,1,3,4,6,8,-13,0,220,562,546,285,5,32,198,230,269,155,13,2,3,0,3,1,6,4,6,5,-11,0,229,561,496,278],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
