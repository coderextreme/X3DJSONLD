####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python StandardHumanoidNoSegSite.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='StandardHumanoidNoSegSite.x3d',name='title'),
    meta(name='identifier',content='http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoidNoSegSite.x3d'),
    meta(name='description',content='An attempt at a standard LOA-4 skeleton'),
    meta(name='generator',content='h2.pl'),
    meta(name='modified',content='14 Jan 2023'),
    meta(content='John Carlson',name='creator'),
    meta(content='9 November 2020',name='created'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      #  DEF for markerfor XYZ axes 
      children=[
      Shape(DEF='AxisLinesShape',
        #  RGB lines showing XYZ axes 
        geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
          coord=Coordinate(point=[(0,0,0),(0.1,0,0),(0,0.1,0),(0,0,0.1)]),
          color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))]),
    Group(
      #  DEFS for markers of skeleton joints, segments, and sites 
      children=[
      Transform(
        children=[
        Transform(translation=(0,2,0),
          children=[
          Shape(DEF='HAnimRootShape',
            geometry=Sphere(radius=0.02),
            appearance=Appearance(
              material=Material(DEF='HAnimRootMaterial',diffuseColor=(0.8,0,0),transparency=0.3)))]),
        Transform(translation=(0,2.1,0),
          children=[
          Shape(DEF='HAnimJointShape',
            geometry=Sphere(radius=0.02),
            appearance=Appearance(
              material=Material(DEF='HAnimJointMaterial',diffuseColor=(0,0,0.8),transparency=0.3)))]),
        Transform(translation=(0,2.05,0),
          children=[
          Shape(DEF='HAnimSegmentLine',
            geometry=LineSet(vertexCount=[2],
              color=ColorRGBA(DEF='HAnimSegmentLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]),
              coord=Coordinate(point=[(-0.05,0,0),(0.05,0,0)])))]),
        Transform(translation=(0,2.1,0),
          children=[
          Shape(DEF='HAnimSiteShape',
            geometry=IndexedFaceSet(DEF='DiamondIFS',creaseAngle=0.5,solid=False,coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],
              color=ColorRGBA(DEF='HAnimSiteColorRGBA',color=[(1,1,0,1),(1,1,0,0.1),(1,1,0,1),(1,1,0,0.1),(1,1,0,1),(1,1,0,0.1)]),
              coord=Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0),transparency=0.3)))])])]),
    NavigationInfo(speed=1.5),
    Viewpoint(description='default'),
    HAnimHumanoid(DEF='hanim_HAnim',info=["humanoidVersion=2.0"],name='HAnim',version='2.0',
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',center=(0.0000,0.8240,0.0277),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
        children=[
        HAnimJoint(DEF='hanim_sacroiliac',name='sacroiliac',center=(0.0000,0.9149,0.0016),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimJoint(DEF='hanim_l_hip',name='l_hip',center=(0.0961,0.9124,-0.0001),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimJoint(DEF='hanim_l_knee',name='l_knee',center=(0.1040,0.4867,0.0308),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimJoint(DEF='hanim_l_talocrural',name='l_talocrural',center=(0.1101,0.0656,-0.0736),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimJoint(DEF='hanim_l_talocalcaneonavicular',name='l_talocalcaneonavicular',center=(0.0781,0.0283,-0.0970),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='hanim_l_cuneonavicular_1',name='l_cuneonavicular_1',center=(0.0672,0.0235,-0.0835),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_1',name='l_tarsometatarsal_1',center=(0.0644,0.0147,-0.0577),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_1',name='l_metatarsophalangeal_1',center=(0.0619,0.0059,-0.0083),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_interphalangeal_1',name='l_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0])])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_2',name='l_cuneonavicular_2',center=(0.0812,0.0250,-0.0805),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_2',name='l_tarsometatarsal_2',center=(0.0800,0.0175,-0.0608),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_2',name='l_metatarsophalangeal_2',center=(0.0824,0.0064,-0.0040),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_2',name='l_tarsal_proximal_interphalangeal_2',center=(0.0841,0.0041,0.0121),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_2',name='l_tarsal_distal_interphalangeal_2',center=(0.0841,0.0013,0.0216),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_3',name='l_cuneonavicular_3',center=(0.0928,0.0248,-0.0821),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_3',name='l_tarsometatarsal_3',center=(0.0944,0.0175,-0.0625),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_3',name='l_metatarsophalangeal_3',center=(0.0963,0.0065,-0.0065),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_3',name='l_tarsal_proximal_interphalangeal_3',center=(0.0987,0.0034,0.0086),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_3',name='l_tarsal_distal_interphalangeal_3',center=(0.1002,0.0013,0.0178),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])])]),
                HAnimJoint(DEF='hanim_l_calcaneocuboid',name='l_calcaneocuboid',center=(0.0889,0.0494,-0.1278),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='hanim_l_transversetarsal',name='l_transversetarsal',center=(0.1105,0.0267,-0.0998),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_4',name='l_tarsometatarsal_4',center=(0.1063,0.0160,-0.0634),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_4',name='l_metatarsophalangeal_4',center=(0.1097,0.0058,-0.0107),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_4',name='l_tarsal_proximal_interphalangeal_4',center=(0.1140,0.0037,0.0044),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_4',name='l_tarsal_distal_interphalangeal_4',center=(0.1155,0.0008,0.0118),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_5',name='l_tarsometatarsal_5',center=(0.1206,0.0124,-0.0671),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_5',name='l_metatarsophalangeal_5',center=(0.1239,0.0051,-0.0153),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_5',name='l_tarsal_proximal_interphalangeal_5',center=(0.1262,0.0023,-0.0077),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_5',name='l_tarsal_distal_interphalangeal_5',center=(0.1271,0.0000,0.0000),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])])])])])]),
          HAnimJoint(DEF='hanim_r_hip',name='r_hip',center=(-0.0950,0.9171,0.0029),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimJoint(DEF='hanim_r_knee',name='r_knee',center=(-0.0867,0.4913,0.0318),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimJoint(DEF='hanim_r_talocrural',name='r_talocrural',center=(-0.0801,0.0712,-0.0766),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimJoint(DEF='hanim_r_talocalcaneonavicular',name='r_talocalcaneonavicular',center=(-0.0781,0.0283,-0.0970),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='hanim_r_cuneonavicular_1',name='r_cuneonavicular_1',center=(-0.0672,0.0235,-0.0835),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_1',name='r_tarsometatarsal_1',center=(-0.0644,0.0147,-0.0577),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_1',name='r_metatarsophalangeal_1',center=(-0.0619,0.0059,-0.0083),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_interphalangeal_1',name='r_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0])])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_2',name='r_cuneonavicular_2',center=(-0.0812,0.0250,-0.0805),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_2',name='r_tarsometatarsal_2',center=(-0.0800,0.0175,-0.0608),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_2',name='r_metatarsophalangeal_2',center=(-0.0823,0.0064,-0.0040),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_2',name='r_tarsal_proximal_interphalangeal_2',center=(-0.0841,0.0041,0.0121),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_2',name='r_tarsal_distal_interphalangeal_2',center=(-0.0841,0.0013,0.0216),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_3',name='r_cuneonavicular_3',center=(-0.0928,0.0248,-0.0821),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_3',name='r_tarsometatarsal_3',center=(-0.0944,0.0175,-0.0625),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_3',name='r_metatarsophalangeal_3',center=(-0.0963,0.0065,-0.0065),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_3',name='r_tarsal_proximal_interphalangeal_3',center=(-0.0987,0.0034,0.0086),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_3',name='r_tarsal_distal_interphalangeal_3',center=(-0.1002,0.0013,0.0178),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])])]),
                HAnimJoint(DEF='hanim_r_calcaneocuboid',name='r_calcaneocuboid',center=(-0.0889,0.0494,-0.1278),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='hanim_r_transversetarsal',name='r_transversetarsal',center=(-0.1105,0.0267,-0.0998),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_4',name='r_tarsometatarsal_4',center=(-0.1063,0.0160,-0.0634),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_4',name='r_metatarsophalangeal_4',center=(-0.1097,0.0058,-0.0107),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_4',name='r_tarsal_proximal_interphalangeal_4',center=(-0.1140,0.0037,0.0044),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_4',name='r_tarsal_distal_interphalangeal_4',center=(-0.1155,0.0008,0.0118),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_5',name='r_tarsometatarsal_5',center=(-0.1206,0.0124,-0.0671),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_5',name='r_metatarsophalangeal_5',center=(-0.1239,0.0051,-0.0153),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_5',name='r_tarsal_proximal_interphalangeal_5',center=(-0.1262,0.0023,-0.0077),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_5',name='r_tarsal_distal_interphalangeal_5',center=(-0.1271,0.0000,0.0000),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])])])])])])]),
        HAnimJoint(DEF='hanim_vl5',name='vl5',center=(0.0028,1.0568,-0.0776),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimJoint(DEF='hanim_vl4',name='vl4',center=(0.0035,1.0925,-0.0787),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimJoint(DEF='hanim_vl3',name='vl3',center=(0.0041,1.1276,-0.0796),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimJoint(DEF='hanim_vl2',name='vl2',center=(0.0045,1.1546,-0.0800),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimJoint(DEF='hanim_vl1',name='vl1',center=(0.0048,1.1912,-0.0805),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='hanim_vt12',name='vt12',center=(0.0051,1.2278,-0.0808),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='hanim_vt11',name='vt11',center=(0.0053,1.2679,-0.0810),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='hanim_vt10',name='vt10',center=(0.0056,1.2848,-0.0822),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='hanim_vt9',name='vt9',center=(0.0057,1.3126,-0.0838),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='hanim_vt8',name='vt8',center=(0.0057,1.3382,-0.0845),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimJoint(DEF='hanim_vt7',name='vt7',center=(0.0058,1.3625,-0.0833),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                              children=[
                              HAnimJoint(DEF='hanim_vt6',name='vt6',center=(0.0059,1.3866,-0.0800),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                children=[
                                HAnimJoint(DEF='hanim_vt5',name='vt5',center=(0.0060,1.4102,-0.0745),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                  children=[
                                  HAnimJoint(DEF='hanim_vt4',name='vt4',center=(0.0061,1.4320,-0.0675),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                    children=[
                                    HAnimJoint(DEF='hanim_vt3',name='vt3',center=(0.0062,1.4583,-0.0570),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                      children=[
                                      HAnimJoint(DEF='hanim_vt2',name='vt2',center=(0.0063,1.4761,-0.0484),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                        children=[
                                        HAnimJoint(DEF='hanim_vt1',name='vt1',center=(0.0065,1.4951,-0.0387),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                          children=[
                                          HAnimJoint(DEF='hanim_vc7',name='vc7',center=(0.0066,1.5132,-0.0301),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimJoint(DEF='hanim_vc6',name='vc6',center=(0.0066,1.5357,-0.0143),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimJoint(DEF='hanim_vc5',name='vc5',center=(0.0066,1.5520,-0.0082),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimJoint(DEF='hanim_vc4',name='vc4',center=(0.0066,1.5662,-0.0084),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='hanim_vc3',name='vc3',center=(0.0066,1.5800,-0.0103),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='hanim_vc2',name='vc2',center=(0.0066,1.5928,-0.0103),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_vc1',name='vc1',center=(0.0066,1.6144,-0.0034),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_skullbase',name='skullbase',center=(0.0044,1.6209,0.0236),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_eyelid_joint',name='l_eyelid_joint',center=(0.0503,1.4157,-0.0689),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_r_eyelid_joint',name='r_eyelid_joint',center=(-0.0507,1.4157,-0.0689),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_l_eyeball_joint',name='l_eyeball_joint',center=(0.0479,1.3963,-0.0188),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_r_eyeball_joint',name='r_eyeball_joint',center=(-0.0483,1.3963,-0.0188),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_l_eyebrow_joint',name='l_eyebrow_joint',center=(0.0216,1.4053,0.0051),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_r_eyebrow_joint',name='r_eyebrow_joint',center=(-0.0219,1.4053,0.0051),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_temporomandibular',name='temporomandibular',center=(-0.0002,1.3043,-0.0865),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_l_sternoclavicular',name='l_sternoclavicular',center=(0.0820,1.4488,-0.0353),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimJoint(DEF='hanim_l_acromioclavicular',name='l_acromioclavicular',center=(0.0962,1.4269,-0.0424),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimJoint(DEF='hanim_l_shoulder',name='l_shoulder',center=(0.2029,1.4376,-0.0387),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimJoint(DEF='hanim_l_elbow',name='l_elbow',center=(0.2014,1.1357,-0.0682),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='hanim_l_radiocarpal',name='l_radiocarpal',center=(0.1984,0.8663,-0.0583),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='hanim_l_midcarpal_1',name='l_midcarpal_1',center=(0.1811,0.6975,-0.0826),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_1',name='l_carpometacarpal_1',center=(0.1924,0.8472,-0.0534),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_1',name='l_metacarpophalangeal_1',center=(0.1951,0.8226,0.0246),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_interphalangeal_1',name='l_carpal_interphalangeal_1',center=(0.1955,0.8159,0.0464),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_2',name='l_midcarpal_2',center=(0.1811,0.6984,-0.0935),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_2',name='l_carpometacarpal_2',center=(0.1983,0.8024,-0.0280),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_2',name='l_metacarpophalangeal_2',center=(0.1983,0.7815,-0.0280),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_2',name='l_carpal_proximal_interphalangeal_2',center=(0.2017,0.7363,-0.0248),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_2',name='l_carpal_distal_interphalangeal_2',center=(0.2028,0.7139,-0.0236),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_3',name='l_midcarpal_3',center=(0.1809,0.7000,-0.1067),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_3',name='l_carpometacarpal_3',center=(0.1987,0.8029,-0.0530),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_3',name='l_metacarpophalangeal_3',center=(0.1987,0.7818,-0.0530),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_3',name='l_carpal_proximal_interphalangeal_3',center=(0.2013,0.7273,-0.0503),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_3',name='l_carpal_distal_interphalangeal_3',center=(0.2026,0.7011,-0.0494),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_4_5',name='l_midcarpal_4_5',center=(0.1809,0.6973,-0.1276),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_4',name='l_carpometacarpal_4',center=(0.1956,0.8019,-0.0794),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_4',name='l_metacarpophalangeal_4',center=(0.1956,0.7815,-0.0794),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_4',name='l_carpal_proximal_interphalangeal_4',center=(0.1973,0.7287,-0.0777),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_4',name='l_carpal_distal_interphalangeal_4',center=(0.1983,0.7045,-0.0767),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_5',name='l_carpometacarpal_5',center=(0.1925,0.8066,-0.1036),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_5',name='l_metacarpophalangeal_5',center=(0.1925,0.7866,-0.1036),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_5',name='l_carpal_proximal_interphalangeal_5',center=(0.1938,0.7452,-0.1024),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_5',name='l_carpal_distal_interphalangeal_5',center=(0.1948,0.7277,-0.1017),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_r_sternoclavicular',name='r_sternoclavicular',center=(-0.0694,1.4600,-0.0330),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimJoint(DEF='hanim_r_acromioclavicular',name='r_acromioclavicular',center=(-0.0836,1.4281,-0.0401),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimJoint(DEF='hanim_r_shoulder',name='r_shoulder',center=(-0.1907,1.4407,-0.0325),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimJoint(DEF='hanim_r_elbow',name='r_elbow',center=(-0.1949,1.1388,-0.0620),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='hanim_r_radiocarpal',name='r_radiocarpal',center=(-0.1959,0.8694,-0.0521),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='hanim_r_midcarpal_1',name='r_midcarpal_1',center=(-0.1811,0.6975,-0.0826),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_1',name='r_carpometacarpal_1',center=(-0.1899,0.8502,-0.0473),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_1',name='r_metacarpophalangeal_1',center=(-0.1874,0.8256,0.0306),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_interphalangeal_1',name='r_carpal_interphalangeal_1',center=(-0.1864,0.8190,0.0506),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_2',name='r_midcarpal_2',center=(-0.1811,0.6984,-0.0935),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_2',name='r_carpometacarpal_2',center=(-0.1961,0.8055,-0.0218),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_2',name='r_metacarpophalangeal_2',center=(-0.1961,0.7846,-0.0218),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_2',name='r_carpal_proximal_interphalangeal_2',center=(-0.1954,0.7393,-0.0185),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_2',name='r_carpal_distal_interphalangeal_2',center=(-0.1945,0.7169,-0.0173),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_3',name='r_midcarpal_3',center=(-0.1809,0.7000,-0.1067),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_3',name='r_carpometacarpal_3',center=(-0.1972,0.8060,-0.0468),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_3',name='r_metacarpophalangeal_3',center=(-0.1972,0.7849,-0.0468),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_3',name='r_carpal_proximal_interphalangeal_3',center=(-0.1950,0.7304,-0.0441),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_3',name='r_carpal_distal_interphalangeal_3',center=(-0.1939,0.7042,-0.0432),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_4_5',name='r_midcarpal_4_5',center=(-0.1809,0.6973,-0.1276),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_4',name='r_carpometacarpal_4',center=(-0.1951,0.8049,-0.0732),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_4',name='r_metacarpophalangeal_4',center=(-0.1951,0.7845,-0.0732),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_4',name='r_carpal_proximal_interphalangeal_4',center=(-0.1920,0.7318,-0.0716),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_4',name='r_carpal_distal_interphalangeal_4',center=(-0.1908,0.7077,-0.0706),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_5',name='r_carpometacarpal_5',center=(-0.1926,0.8096,-0.0975),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_5',name='r_metacarpophalangeal_5',center=(-0.1926,0.7896,-0.0975),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_5',name='r_carpal_proximal_interphalangeal_5',center=(-0.1902,0.7483,-0.0963),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_5',name='r_carpal_distal_interphalangeal_5',center=(-0.1908,0.7540,-0.0960),skinCoordIndex=[0],skinCoordWeight=[0],ulimit=[0,0,0],llimit=[0,0,0])])])])])])])])])])])])])])])])])])])])])])])])])])])]),],
      #  <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) 
      skin=[
      Shape(DEF='SkinShape',
        geometry=IndexedFaceSet(coordIndex=[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1],creaseAngle=3.1,
          coord=Coordinate(DEF='TheSkinCoord',point=[(0,1.77,0),(0,1.665,0.09),(-0.033,1.62,0.087),(0.033,1.62,0.087),(0,1.55,0.097),(-0.077,1.64,-0.01),(-0.0527,1.58,0.015),(0.077,1.64,-0.01),(0.0527,1.58,0.015),(0,1.625,-0.0925),(-0.03,1.46,0.035),(0,1.44,0.03),(0.03,1.46,0.035),(-0.1135,1.318,0.095),(0.1135,1.318,0.095),(0,1.25,0.113),(-0.087,1.19,0.09),(-0.0935,1.03,0.075),(0.087,1.19,0.09),(0.0935,1.03,0.075),(-0.1425,1.065,0.0033),(-0.15,0.9,-0.01),(0.1425,1.065,0.0033),(0.15,0.9,-0.01),(0,1.53,-0.084),(0.0049,1.1908,-0.1113),(-0.0773,1.019,-0.12),(0.0773,1.019,-0.12),(0.005,1.0915,-0.1091),(-0.178,1.4825,-0.0625),(-0.17,1.38,0.007),(-0.1884,0.8676,-0.036),(-0.16,1.38,-0.127),(-0.2,1.1388,-0.08),(-0.244,1.1388,-0.04),(-0.165,1.1388,-0.04),(-0.23,1.133,-0.055),(-0.1977,0.8169,-0.0177),(-0.1941,0.6772,-0.0423),(-0.2117,0.8562,-0.0584),(-0.1929,0.789,-0.1064),(0.175,1.4825,-0.06),(0.17,1.38,0.007),(0.1901,0.8645,-0.0415),(0.16,1.38,-0.125),(0.2,1.1388,-0.08),(0.165,1.1388,-0.04),(0.244,1.1388,-0.04),(0.23,1.133,-0.055),(0.2009,0.8139,-0.0237),(0.2056,0.6743,-0.0482),(0.2142,0.8529,-0.0648),(0.1929,0.786,-0.1122),(-0.1,0.4913,-0.03),(-0.17,0.466,0),(-0.05,0.466,0),(-0.165,0.01,0.12),(-0.15,0.07,0),(-0.085,0.086,0.0125),(-0.09,0.056,0.0125),(-0.115,0.02,0.122),(-0.115,0.04,-0.055),(-0.11,0.011,0.19),(0.0993,0.4881,-0.0309),(0.17,0.466,0),(0.05,0.4867,0),(0.165,0.01,0.12),(0.15,0.07,0),(0.085,0.086,0.0125),(0.09,0.056,0.0125),(0.115,0.02,0.122),(0.115,0.04,-0.055),(0.11,0.011,0.19),(0,0.875,0),(-0.0646,1.5149,-0.038),(0.0646,1.5149,-0.038),(0,1.07225,0.09),(-0.11,1.427,-0.1375),(-0.235,1.42,-0.0625),(0.11,1.427,-0.1375),(0.235,1.42,-0.0625),(0,1.41,-0.145),(0,0.925,0.08),(-0.087,1.19,-0.09),(0.087,1.19,-0.09),(0.172,1.32,-0.03),(-0.172,1.32,-0.03),(0.15,1.23,-0.015),(-0.15,1.23,-0.015),(0.079,0.92,-0.14),(0.1,0.9,0.077),(-0.079,0.92,-0.14),(-0.1,0.9,0.075),(0,0.87,0),(0.171,0.65,0),(0.02,0.65,0),(0.1,0.65,-0.08),(0.1,0.65,0.07),(-0.171,0.65,0),(-0.02,0.65,0),(-0.1,0.65,-0.08),(-0.1,0.65,0.07),(0.25,1.27,-0.04),(0.17,1.27,-0.04),(0.2,1.27,-0.09),(0.2,1.27,0.02),(0.244,1.1388,-0.04),(0.165,1.1388,-0.04),(0.2,1.1388,-0.08),(0.2,1.1388,-0.013),(0.225,1,-0.01),(0.225,1,-0.07),(0.185,1,-0.01),(0.185,1,-0.07),(0.2,1.1388,-0.04),(0.225,0.92,-0.04),(0.175,0.92,-0.04),(0.2,0.92,-0.065),(0.2,0.92,-0.015),(0.225,0.89,-0.04),(0.175,0.89,-0.04),(0.2,0.89,-0.065),(0.2,0.89,-0.015),(0.218,0.86,-0.04),(0.184,0.86,-0.04),(0.2,0.87,-0.07),(0.2,0.87,0),(0.21,0.85,0),(0.1854,0.85,0),(0.212,0.84,-0.015),(0.183,0.84,-0.015),(0.213,0.835,-0.04),(0.19,0.835,-0.04),(0.211,0.835,-0.065),(0.192,0.835,-0.065),(0.208,0.84,-0.085),(0.19,0.84,-0.085),(0.2,0.84,-0.095),(0.215,0.82,0),(0.193,0.815,0.005),(0.198,0.8,0.012),(0.21,0.82,0.03),(0.19,0.82,0.03),(0.2,0.835,0.039),(0.212,0.8,0.05),(0.188,0.8,0.05),(0.2,0.807,0.057),(0.2,0.793,0.035),(0.2,0.774,0.076),(0.212,0.78,0.07),(0.188,0.78,0.07),(0.2,0.785,0.075),(0.2,0.77,0.062),(0.215,0.793,-0.015),(0.187,0.793,-0.015),(0.2,0.793,-0.005),(0.215,0.788,-0.04),(0.187,0.788,-0.04),(0.215,0.793,-0.065),(0.187,0.793,-0.065),(0.21,0.79,-0.085),(0.19,0.79,-0.085),(0.2,0.79,-0.095),(0.19,0.77,-0.0275),(0.19,0.77,-0.0525),(0.19,0.78,-0.0775),(0.212,0.745,-0.015),(0.188,0.745,-0.02),(0.2,0.745,-0.0255),(0.2,0.745,-0.0045),(0.211,0.72,-0.015),(0.189,0.72,-0.015),(0.2,0.72,-0.0252),(0.2,0.72,-0.0048),(0.21,0.695,-0.015),(0.19,0.695,-0.015),(0.2,0.695,-0.025),(0.2,0.695,-0.005),(0.2,0.685,-0.015),(0.215,0.74,-0.04),(0.185,0.74,-0.04),(0.2,0.74,-0.055),(0.2,0.74,-0.025),(0.21,0.7142,-0.04),(0.19,0.7142,-0.04),(0.2,0.7142,-0.053),(0.2,0.7142,-0.027),(0.21,0.68,-0.04),(0.19,0.68,-0.04),(0.2,0.68,-0.05),(0.2,0.68,-0.03),(0.2,0.67,-0.04),(0.212,0.74,-0.065),(0.188,0.74,-0.065),(0.2,0.74,-0.0756),(0.2,0.74,-0.0542),(0.21,0.7177,-0.065),(0.19,0.7177,-0.065),(0.2,0.7177,-0.0751),(0.2,0.7177,-0.0549),(0.21,0.695,-0.065),(0.19,0.695,-0.065),(0.2,0.695,-0.075),(0.2,0.695,-0.055),(0.2,0.685,-0.065),(0.211,0.755,-0.085),(0.189,0.755,-0.085),(0.2,0.755,-0.0952),(0.2,0.755,-0.0748),(0.21,0.735,-0.085),(0.19,0.735,-0.085),(0.2,0.735,-0.0951),(0.2,0.735,-0.0749),(0.21,0.72,-0.085),(0.19,0.72,-0.085),(0.2,0.72,-0.095),(0.2,0.72,-0.075),(0.2,0.71,-0.085),(-0.23,1.23,-0.04),(-0.16,1.23,-0.04),(-0.2,1.235,-0.105),(-0.2,1.235,0.02),(-0.244,1.1388,-0.04),(-0.165,1.1388,-0.04),(-0.2,1.1388,-0.08),(-0.2,1.1388,0.013),(-0.225,1,-0.01),(-0.225,1,-0.07),(-0.185,1,-0.01),(-0.185,1,-0.07),(-0.2,1.1388,-0.04),(-0.225,0.92,-0.04),(-0.175,0.92,-0.04),(-0.2,0.92,-0.065),(-0.2,0.92,-0.015),(-0.225,0.89,-0.04),(-0.175,0.89,-0.04),(-0.2,0.89,-0.065),(-0.2,0.89,-0.015),(-0.218,0.86,-0.04),(-0.184,0.86,-0.04),(-0.2,0.87,-0.07),(-0.2,0.87,0),(-0.21,0.85,0),(-0.1854,0.85,0),(-0.212,0.84,-0.015),(-0.183,0.84,-0.015),(-0.213,0.835,-0.04),(-0.19,0.835,-0.04),(-0.211,0.835,-0.065),(-0.192,0.835,-0.065),(-0.208,0.84,-0.085),(-0.19,0.84,-0.085),(-0.2,0.84,-0.095),(-0.215,0.82,0),(-0.193,0.815,0.005),(-0.198,0.8,0.012),(-0.21,0.82,0.03),(-0.19,0.82,0.03),(-0.2,0.835,0.039),(-0.212,0.8,0.05),(-0.188,0.8,0.05),(-0.2,0.807,0.057),(-0.2,0.793,0.035),(-0.2,0.774,0.076),(-0.212,0.78,0.07),(-0.188,0.78,0.07),(-0.2,0.785,0.075),(-0.2,0.77,0.062),(-0.215,0.793,-0.015),(-0.187,0.793,-0.015),(-0.2,0.793,-0.005),(-0.215,0.788,-0.04),(-0.187,0.788,-0.04),(-0.215,0.793,-0.065),(-0.187,0.793,-0.065),(-0.21,0.79,-0.085),(-0.19,0.79,-0.085),(-0.2,0.79,-0.095),(-0.19,0.77,-0.0275),(-0.19,0.77,-0.0525),(-0.19,0.78,-0.0775),(-0.212,0.745,-0.015),(-0.188,0.745,-0.02),(-0.2,0.745,-0.0255),(-0.2,0.745,-0.0045),(-0.211,0.72,-0.015),(-0.189,0.72,-0.015),(-0.2,0.72,-0.0252),(-0.2,0.72,-0.0048),(-0.21,0.695,-0.015),(-0.19,0.695,-0.015),(-0.2,0.695,-0.025),(-0.2,0.695,-0.005),(-0.2,0.685,-0.015),(-0.215,0.74,-0.04),(-0.185,0.74,-0.04),(-0.2,0.74,-0.055),(-0.2,0.74,-0.025),(-0.21,0.7142,-0.04),(-0.19,0.7142,-0.04),(-0.2,0.7142,-0.053),(-0.2,0.7142,-0.027),(-0.21,0.68,-0.04),(-0.19,0.68,-0.04),(-0.2,0.68,-0.05),(-0.2,0.68,-0.03),(-0.2,0.67,-0.04),(-0.212,0.74,-0.065),(-0.188,0.74,-0.065),(-0.2,0.74,-0.0756),(-0.2,0.74,-0.0542),(-0.21,0.7177,-0.065),(-0.19,0.7177,-0.065),(-0.2,0.7177,-0.0751),(-0.2,0.7177,-0.0549),(-0.21,0.695,-0.065),(-0.19,0.695,-0.065),(-0.2,0.695,-0.075),(-0.2,0.695,-0.055),(-0.2,0.685,-0.065),(-0.211,0.755,-0.085),(-0.189,0.755,-0.085),(-0.2,0.755,-0.0952),(-0.2,0.755,-0.0748),(-0.21,0.735,-0.085),(-0.19,0.735,-0.085),(-0.2,0.735,-0.0951),(-0.2,0.735,-0.0749),(-0.21,0.72,-0.085),(-0.19,0.72,-0.085),(-0.2,0.72,-0.095),(-0.2,0.72,-0.075),(-0.2,0.71,-0.085),(0.115,0.466,0.06),(0.115,0.466,-0.055),(0.15,0.466,0),(0.05,0.466,0),(0.17,0.3,0),(0.06,0.3,0),(0.1,0.3,-0.05),(0.1,0.3,0.05),(0.15,0.07,0),(0.085,0.086,0.0125),(0.115,0.069,-0.045),(0.117,0.0975,0.0615),(0.1375,0.006,-0.03),(0.095,0.006,-0.03),(0.115,0.015,-0.045),(0.115,0.06,0.1),(0.115,0,0.07),(0.165,0,0.07),(0.095,0,0.07),(0.115,0.04,0.13),(0.125,0,0.12),(0.165,0,0.12),(0.087,0,0.122),(0.09,0.012,0.188),(0.11,0.011,0.19),(0.128,0.011,0.185),(0.142,0.011,0.178),(0.154,0.01,0.168),(-0.115,0.466,0.06),(-0.115,0.466,-0.055),(-0.17,0.466,0),(-0.05,0.466,0),(-0.17,0.3,0),(-0.06,0.3,0),(-0.1,0.3,-0.05),(-0.1,0.3,0.05),(-0.15,0.07,0),(-0.085,0.086,0.0125),(-0.115,0.069,-0.045),(-0.117,0.0975,0.0615),(-0.1375,0.006,-0.03),(-0.095,0.006,-0.03),(-0.095,0.006,-0.03),(-0.115,0.06,0.1),(-0.115,0,0.07),(-0.165,0,0.07),(-0.095,0,0.07),(-0.115,0.04,0.13),(-0.125,0,0.12),(-0.165,0,0.12),(-0.087,0,0.122),(-0.09,0.012,0.188),(-0.11,0.011,0.19),(-0.128,0.011,0.185),(-0.142,0.011,0.178),(-0.154,0.01,0.168)]),
          color=Color(color=[(1,0,0),(0,1,1),(0,1,0),(1,1,0),(1,1,0),(1,0,0),(0,1,0),(0,0,1),(0,1,1),(0,1,1),(1,1,0),(1,1,0),(1,1,0),(1,1,0),(0,1,0),(0,0,1),(0,1,0),(1,0,0),(0,1,0),(1,0,1),(1,0,0),(1,0,0),(1,1,0),(1,1,0),(1,1,1),(1,0,0),(0,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,1,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,0,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(0,0,1),(1,1,0),(0,1,0),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(0,0,1),(0,0,1),(0,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(0,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,0,1),(0,0,1),(0,0,1),(1,1,0),(0,1,0),(0,0,1),(1,1,0),(1,1,0),(0,0,1),(0,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,1,0),(0,1,0),(1,1,0),(1,0,1),(1,1,0),(0,1,0),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(1,0,1),(1,0,1),(1,0,1),(1,0,1),(0,1,0),(1,0,0),(0,1,0),(1,0,0),(0,1,0),(1,0,0),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,1),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(1,0,0),(0,1,0),(0,0,1),(0,1,1),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(1,1,0),(1,0,0),(0,0,1),(0,1,1),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,1),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(0,1,0),(0,0,1),(0,1,0),(1,1,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(1,1,0),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(1,0,1),(0,1,0),(1,0,0),(0,1,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,1),(1,0,0),(1,0,1),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,0,1),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(0,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(0,0,1),(1,1,0),(1,0,1),(1,0,1),(1,0,1),(1,0,1),(0,1,0),(1,0,0),(0,1,0),(1,0,0),(0,1,0),(1,0,0),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,1),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(1,0,0),(0,1,0),(0,0,1),(0,1,1),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,0,1),(1,1,0),(1,0,0),(0,0,1),(0,1,1),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,1,0),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,1),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(0,1,0),(0,0,1),(0,1,0),(1,1,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(1,1,0),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(1,0,1),(0,1,0),(1,0,0),(0,1,0),(1,0,1),(0,1,0),(1,0,0),(0,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,1),(1,0,0),(1,0,1),(1,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(0,1,0),(1,0,1),(0,1,0),(1,0,1),(1,1,0),(0,0,1),(0,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(0,1,0),(1,1,0),(1,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(0,0,1),(1,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,0,1),(0,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,1),(1,1,0),(0,0,1),(0,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(0,1,0),(1,1,0),(1,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,0,1),(1,1,0),(0,1,0),(0,0,1),(1,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,0,1),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,0,1),(0,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,1,0),(0,1,0),(1,1,0),(0,1,0),(1,1,0),(1,0,1),(0,1,0),(1,0,1),(0,1,0),(1,0,1),(1,1,1)])),
        appearance=Appearance(DEF='SkinAppearance',
          texture=ImageTexture(DEF='zBlueSpiralBkg2',description='Blue Spiral Pattern',url=["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]),
          material=Material(DEF='SkinMaterial',ambientIntensity=0.6,diffuseColor=(1,1,1),shininess=0.6,transparency=0.2))),],
      #  </LOD> 
      skinCoord=Coordinate(USE='TheSkinCoord'),
      joints=[
      HAnimJoint(USE='hanim_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_sacroiliac',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt12',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt11',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt10',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt9',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt8',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_skullbase',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_temporomandibular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0])],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for StandardHumanoidNoSegSite.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python StandardHumanoidNoSegSite.py load and self-test diagnostics complete.")