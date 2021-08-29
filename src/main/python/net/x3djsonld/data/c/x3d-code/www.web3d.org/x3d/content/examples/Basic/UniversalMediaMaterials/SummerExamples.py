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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SummerExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SummerExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer00',url=["SummerPrototypes.x3d#Summer00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer00","SummerPrototypes.wrl#Summer00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer01',url=["SummerPrototypes.x3d#Summer01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer01","SummerPrototypes.wrl#Summer01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer02',url=["SummerPrototypes.x3d#Summer02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer02","SummerPrototypes.wrl#Summer02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer03',url=["SummerPrototypes.x3d#Summer03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer03","SummerPrototypes.wrl#Summer03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer04',url=["SummerPrototypes.x3d#Summer04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer04","SummerPrototypes.wrl#Summer04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer05',url=["SummerPrototypes.x3d#Summer05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer05","SummerPrototypes.wrl#Summer05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer06',url=["SummerPrototypes.x3d#Summer06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer06","SummerPrototypes.wrl#Summer06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer07',url=["SummerPrototypes.x3d#Summer07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer07","SummerPrototypes.wrl#Summer07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer08',url=["SummerPrototypes.x3d#Summer08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer08","SummerPrototypes.wrl#Summer08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer09',url=["SummerPrototypes.x3d#Summer09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer09","SummerPrototypes.wrl#Summer09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer10',url=["SummerPrototypes.x3d#Summer10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer10","SummerPrototypes.wrl#Summer10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer11',url=["SummerPrototypes.x3d#Summer11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer11","SummerPrototypes.wrl#Summer11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer12',url=["SummerPrototypes.x3d#Summer12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer12","SummerPrototypes.wrl#Summer12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer13',url=["SummerPrototypes.x3d#Summer13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer13","SummerPrototypes.wrl#Summer13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer14',url=["SummerPrototypes.x3d#Summer14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer14","SummerPrototypes.wrl#Summer14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer15',url=["SummerPrototypes.x3d#Summer15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer15","SummerPrototypes.wrl#Summer15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer16',url=["SummerPrototypes.x3d#Summer16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer16","SummerPrototypes.wrl#Summer16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer17',url=["SummerPrototypes.x3d#Summer17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer17","SummerPrototypes.wrl#Summer17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer18',url=["SummerPrototypes.x3d#Summer18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer18","SummerPrototypes.wrl#Summer18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer19',url=["SummerPrototypes.x3d#Summer19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer19","SummerPrototypes.wrl#Summer19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer20',url=["SummerPrototypes.x3d#Summer20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer20","SummerPrototypes.wrl#Summer20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer21',url=["SummerPrototypes.x3d#Summer21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer21","SummerPrototypes.wrl#Summer21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer22',url=["SummerPrototypes.x3d#Summer22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer22","SummerPrototypes.wrl#Summer22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer23',url=["SummerPrototypes.x3d#Summer23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer23","SummerPrototypes.wrl#Summer23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer24',url=["SummerPrototypes.x3d#Summer24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer24","SummerPrototypes.wrl#Summer24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer25',url=["SummerPrototypes.x3d#Summer25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer25","SummerPrototypes.wrl#Summer25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer26',url=["SummerPrototypes.x3d#Summer26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer26","SummerPrototypes.wrl#Summer26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer27',url=["SummerPrototypes.x3d#Summer27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer27","SummerPrototypes.wrl#Summer27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer28',url=["SummerPrototypes.x3d#Summer28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer28","SummerPrototypes.wrl#Summer28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer29',url=["SummerPrototypes.x3d#Summer29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer29","SummerPrototypes.wrl#Summer29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer30',url=["SummerPrototypes.x3d#Summer30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer30","SummerPrototypes.wrl#Summer30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer31',url=["SummerPrototypes.x3d#Summer31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer31","SummerPrototypes.wrl#Summer31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer32',url=["SummerPrototypes.x3d#Summer32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer32","SummerPrototypes.wrl#Summer32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer33',url=["SummerPrototypes.x3d#Summer33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer33","SummerPrototypes.wrl#Summer33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer34',url=["SummerPrototypes.x3d#Summer34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d#Summer34","SummerPrototypes.wrl#Summer34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.wrl#Summer34"]),
    Group(bboxSize=(10.5,10.5,2.0),
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Summer00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Summer00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer00',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Summer00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Summer01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Summer01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer01',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Summer02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Summer02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer02',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Summer03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Summer03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer03',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Summer04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Summer04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer04',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Summer05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Summer05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer05',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Summer06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Summer06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer06',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Summer07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Summer07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer07',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Summer08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Summer08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer08',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Summer09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Summer09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer09',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Summer10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Summer10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer10',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Summer11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Summer11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer11',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Summer12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Summer12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer12',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Summer13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Summer13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer13',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Summer14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Summer14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer14',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Summer15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Summer15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer15',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Summer16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Summer16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer16',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Summer17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Summer17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer17',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Summer18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Summer18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer18',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Summer19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Summer19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer19',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Summer20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Summer20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer20',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Summer21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Summer21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer21',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Summer22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Summer22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer22',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer2","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Summer23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Summer23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer23',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Summer24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Summer24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer24',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Summer25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Summer25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer25',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Summer26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Summer26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer26',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Summer27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Summer27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer27',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Summer28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Summer28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer28',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Summer29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Summer29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer29',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Summer30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Summer30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer30',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Summer31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Summer31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer31',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Summer32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Summer32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer32',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Summer33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Summer33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer33',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Summer34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Summer34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Summer34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Summer34',parameter=["target=_source"],url=["SummerPrototypes.html#ProtoDeclare_Summer34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.html#ProtoDeclare_Summer34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Summer34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SummerExamples.py")
