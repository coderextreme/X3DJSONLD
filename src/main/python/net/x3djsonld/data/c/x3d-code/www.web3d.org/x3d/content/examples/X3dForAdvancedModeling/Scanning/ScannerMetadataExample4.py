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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    unit(category='length',conversionFactor=1,name='meter'),
    meta(content='ScannerMetadataExample4.x3d',name='title'),
    meta(content='Embed example metadata associated with a scanned 3D model using X3D version 4.',name='description'),
    meta(content='11 November 2019',name='created'),
    meta(content='1 April 2021',name='modified'),
    meta(content='If approved for X3D4, apply modified containerField=value defaults for Metadata* nodes',name='TODO'),
    meta(content='https://docs.google.com/spreadsheets/d/1RKvh6oEsyIgEIFfjDQNgu1U6QoAmsduvHx3ki18Z06A/htmlview#',name='reference'),
    meta(content='Bill Gutelius, Qntfi https://www.qntfii.com',name='creator'),
    meta(content='Nicholas Polys, VT',name='translator'),
    meta(content='ScannerMetadataExample33.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Scanning/ScannerMetadataExample4.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ScannerMetadataExample4.x3d'),
    MetadataSet(name='Scan Information',reference='Web3D proposed vocabulary: version 0.1',
      value=[
      MetadataSet(name='Acquisition',reference='Hardware',
        value=[
        MetadataString(name='Scanner',value=['Emesent HOVERMAP']),
        MetadataString(name='ScannerModel',value=['Model: HF-1']),
        MetadataFloat(name='Pulse rate (kHz)',value=[300]),
        MetadataFloat(name='Wavelength (nm)',value=[903]),
        MetadataFloat(name='Max range (m)',value=[100])]),
      MetadataSet(name='Scan Session',
        value=[
        MetadataString(name='acquisition_timestamp',value=["2019-11-05T10:15:32.3+0500"])]),
      MetadataSet(name='LAS Fields',reference='http://www.asprs.org/wp-content/uploads/2019/03/LAS_1_4_r14.pdf',
        value=[
        MetadataString(name='number of points',value=['18102106']),
        MetadataInteger(name='point_format',value=[1]),
        MetadataSet(name='LAS.scalar fields',
          value=[
          MetadataInteger(name='num.fields',value=[3]),
          MetadataString(name='scalar1',value=['Intensity']),
          MetadataString(name='scalar2',value=['ReturnNumber']),
          MetadataString(name='scalar3',value=['GpsTime'])]),
        #  we should have a double precision version too <MetadataSFVec3f containerField="value" name="Global shift" value='131.45, 91.94, 3.18'/> 
        MetadataFloat(name='LAS.Global_shift.x',value=[131.45]),
        MetadataFloat(name='LAS.Global_shift.y',value=[91.94]),
        MetadataFloat(name='LAS.Global_shift.z',value=[3.18]),
        MetadataInteger(name='Scalar.fields',value=[3]),
        MetadataInteger(name='Version.Major',value=[1]),
        MetadataInteger(name='Version.Minor',value=[4]),
        MetadataFloat(name='LAS.scale.x',value=[2.13564e-7]),
        MetadataFloat(name='LAS.scale.y',value=[2.35058e-7]),
        MetadataFloat(name='LAS.scale.z',value=[5.6171e-8])]),
      MetadataSet(name='Scene Provenance',
        value=[
        MetadataSet(name='Provenance',
          #  omitted value="this" 
          value=[
          MetadataSet(name='this-1',
            value=[
            MetadataString(name='Last Modified',value=["Jan 1 2019"]),
            MetadataString(name='Institution',value=["Virginia Tech Visionarium"]),
            MetadataString(name='Authors',value=["Nicholas Polys"]),
            MetadataString(name='Tools',value=["LAS2X3D.py"]),
            MetadataString(name='Algorithms',value=["lexical sampling by interval stride"])])])])]),
    Anchor(description='ScannerMetadataExample4 model page',parameter=["target=blank"],url=["https://x3dgraphics.com/examples/X3dForAdvancedModeling/Scanning/ScannerMetadataExample4Index.html"],
      children=[
      Shape(
        geometry=Text(string=["ScannerMetadataExample4","embed metadata in X3D4"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.75,style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.501961,0.109804))))]),
    #  NFP: Scene node can also take a MetadataSet (?) ... Here considered as a value-added scene from the acquisition the default containerField='value' 
    Transform(translation=(131.45,91.94,3.18),
      #  by global shift value above 
      #  could be an LOD 
      children=[
      Switch(bboxCenter=(106.781,117.532,28.0086),bboxSize=(213.564,235.058,56.171),whichChoice=0,
        children=[
        Group(
          children=[
          Shape(DEF='Highest_Resolution',
            metadata=MetadataSet(name='holder1',
              value=[
              MetadataSet(name='LAS Fields',reference='http://www.asprs.org/wp-content/uploads/2019/03/LAS_1_4_r14.pdf',
                value=[
                MetadataString(name='number of points',value=['1810210'])]),
              MetadataSet(name='Permissions',
                value=[
                MetadataBoolean(name='recording',value=[False]),
                MetadataBoolean(name='systematization',value=[False]),
                MetadataBoolean(name='accumulation',value=[False])])]))]),
        Group(
          children=[
          Shape(DEF='Medium_Resolution',
            metadata=MetadataSet(name='holder3',
              value=[
              MetadataSet(name='LAS Fields',reference='http://www.asprs.org/wp-content/uploads/2019/03/LAS_1_4_r14.pdf',
                value=[
                MetadataString(name='number of points',value=['181021'])]),
              MetadataSet(name='Permissions',
                value=[
                MetadataBoolean(name='recording',value=[False]),
                MetadataBoolean(name='systematization',value=[True]),
                MetadataBoolean(name='accumulation',value=[True])])]))]),
        Group(
          children=[
          Shape(DEF='Low_Resolution',
            metadata=MetadataSet(name='holder3',
              value=[
              MetadataSet(name='LAS Fields',reference='http://www.asprs.org/wp-content/uploads/2019/03/LAS_1_4_r14.pdf',
                value=[
                MetadataString(name='number of points',value=['72408'])]),
              MetadataSet(name='Permissions',
                value=[
                MetadataBoolean(name='recording',value=[True]),
                MetadataBoolean(name='systematization',value=[True]),
                MetadataBoolean(name='accumulation',value=[True])])]))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ScannerMetadataExample4.py")
