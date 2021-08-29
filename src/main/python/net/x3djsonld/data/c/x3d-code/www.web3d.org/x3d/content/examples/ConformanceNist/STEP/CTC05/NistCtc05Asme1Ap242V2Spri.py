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

newModel=X3D(profile='CADInterchange',version='3.3',
  head=head(
    children=[
    component(level=1,name='EnvironmentalEffects'),
    component(level=1,name='Navigation'),
    unit(category='length',conversionFactor=0.001,name='millimetre'),
    meta(content='NistCtc05Asme1Ap242V2Spri.x3d',name='title'),
    meta(content='24 February 2018',name='created'),
    meta(content='11 October 2019',name='created'),
    meta(content='Vince Marchetti',name='translator'),
    meta(content='Robert Lipman',name='creator'),
    meta(content='NIST Product and Manufacturing Information (PMI) Complex Test Case 5.',name='description'),
    meta(content='https://pages.nist.gov/CAD-PMI-Testing/models.html',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Product_and_manufacturing_information',name='reference'),
    meta(content='https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project/download',name='reference'),
    meta(content='https://s3.amazonaws.com/nist-el/mfg_digitalthread/nist_ftc_09_asme1_rd.pdf',name='reference'),
    meta(content='https://pages.nist.gov/CAD-PMI-Testing/tessellated-part-geometry.html',name='reference'),
    meta(content='https://pages.nist.gov/CAD-PMI-Testing/graphical-pmi-viewer.html',name='reference'),
    meta(content='https://pages.nist.gov/CAD-PMI-Testing/ap209-viewer.html',name='reference'),
    meta(content='https://www.nist.gov/services-resources/software/step-file-analyzer',name='reference'),
    meta(content='https://www.nist.gov/publications/guide-nist-pmi-cad-models-and-cad-system-pmi-modeling-capability-verification-testing',name='reference'),
    meta(content='https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project',name='reference'),
    meta(content='STEP AP242 Project, http://www.ap242.org',name='reference'),
    meta(content='ASME standard Y14.46-2017: Product Definition for Additive Manufacturing',name='reference'),
    meta(content='https://www.asme.org/products/codes-standards/y1446-2017-product-definition-additive',name='reference'),
    meta(content='STEP to X3D conversion code: kshell/step_x3d/branches/basic_cad',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the Web3D Design Printing and Scanning Working Group, https://www.web3d.org/working-groups/cad',name='info'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC05/NistCtc05Asme1Ap242V2Spri.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NistCtc05Asme1Ap242V2Spri.x3d'),
    Background(skyColor=[(0.094100,0.137300,0.498000)],
      metadata=MetadataString(name='color',reference='http://www.colourlovers.com/color/18237F/tienen_miedo',value=["tienen miedo"])),
    DirectionalLight(color=(1.000000,1.000000,1.000000),direction=(-3.5355e-01,-3.5355e-01,-8.6603e-01)),
    CADPart(name='None',
      metadata=MetadataSet(name='_collection',
        value=[
        MetadataString(name='version',value=["#6"]),
        MetadataSet(name='STEP:length_unit',
          value=[
          MetadataString(name='name',value=["millimetre"]),
          MetadataFloat(name='conversionFactor',value=[0.001])]),
        MetadataSet(name='exchange_structure_notice',
          value=[
          MetadataString(name='message',value=["empty_representation"]),
          MetadataString(name='instance',value=["#19"])])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NistCtc05Asme1Ap242V2Spri.py")
