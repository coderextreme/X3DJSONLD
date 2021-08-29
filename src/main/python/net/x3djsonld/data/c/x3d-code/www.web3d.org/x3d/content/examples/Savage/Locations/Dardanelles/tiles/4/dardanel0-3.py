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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-3.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel0-3.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel0-3.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.983082655714444,0.0),geoSystem=["GD"],height=[235,128,270,382,381,303,641,905,926,821,982,546,436,550,363,564,571,348,441,621,523,497,106,169,178,222,356,469,541,747,730,785,612,774,805,522,432,650,512,324,349,447,351,366,91,94,300,526,515,562,772,675,488,771,645,555,805,566,375,628,413,322,307,384,300,352,39,56,145,185,401,647,499,577,506,631,772,572,496,430,420,304,354,356,275,400,285,295,24,17,33,80,276,423,443,433,384,579,632,819,634,641,537,427,334,407,435,371,400,362,6,10,14,21,132,276,559,498,302,395,497,585,702,667,646,544,347,427,397,312,304,294,6,11,14,20,52,127,285,291,244,293,458,551,469,628,643,493,483,262,343,361,379,370,6,8,17,22,31,37,62,128,105,177,201,360,305,474,501,460,426,363,245,255,316,323,5,11,20,30,32,94,61,62,113,133,145,317,227,440,583,510,323,354,243,246,238,254,11,12,31,41,75,120,106,129,219,292,371,367,289,493,543,539,440,325,262,221,229,237,95,102,101,74,150,238,274,193,209,355,488,469,412,538,487,541,440,511,408,253,234,216,234,377,338,175,164,363,285,325,375,541,551,375,739,516,690,652,587,378,292,364,260,238,351,416,203,191,175,331,333,612,375,500,772,569,702,716,622,862,634,496,444,378,279,287,436,542,334,321,287,331,379,560,554,540,531,573,660,543,740,764,640,507,518,450,448,413,560,860,499,811,693,733,591,677,669,627,627,568,595,685,635,789,581,536,531,398,411,427,702,573,748,882,730,955,1252,896,729,905,790,536,506,429,662,643,656,506,476,386,354,319,1183,1103,1008,751,711,919,839,820,509,686,643,634,447,313,537,670,579,661,530,497,294,346,1276,666,785,768,572,704,801,573,607,366,593,485,438,517,381,461,562,494,469,493,412,354,1115,731,710,421,395,508,435,439,550,674,559,393,273,281,441,613,602,565,575,483,387,370,1257,979,697,737,642,500,401,513,310,363,372,284,235,235,410,419,436,593,562,552,451,440,1011,879,751,477,569,445,331,344,283,297,261,285,299,208,301,260,287,450,696,580,510,531,1004,884,755,483,553,442,328,330,282,293,260,285,294,210,299,257,286,441,694,582,510,533],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel0-3.py")
